using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Sort
{
    class QuickSort : BaseArr
    {
        public override void Sort()
        {
            Console.WriteLine("퀵 정렬 시작");
            QuickS(0, Max_Length - 1);
        }

        void QuickS(int left, int right)
        {
            int mid = left + (right - left) / 2;
            int l = left;
            int r = right;
            int pivot = 0;

            MedianOfThree(left, mid, right);

            if (right - left + 1 > 3)
            {   
                pivot = arr[mid];

                while(true)
                {
                    while (l < right && arr[l] < pivot) ++l;
                    while (r > left && arr[r] > pivot) --r;

                    if (l >= r)
                    {
                        break;
                    }

                    if(arr[l] == arr[r])
                    {
                        l++;
                        r--;
                    }
                    else
                    {
                        Swap(l, r);
                    }
                }
                QuickS(left, l);
                QuickS(l + 1, right);
            }
        }

        void MedianOfThree(int left, int mid, int right)
        {
            if(arr[left] > arr[mid])
            {
                Swap(left, mid);
            }

            if(arr[mid] > arr[right])
            {
                Swap(mid, right);
            }

            if(arr[left] > arr[right])
            {
                Swap(left, right);
            }
        }
       
        void Swap(int a, int b)
        {
            int temp = arr[a];
            arr[a] = arr[b];
            arr[b] = temp;
        }
    }
}
