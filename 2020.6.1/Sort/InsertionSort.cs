using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Sort
{
    class InsertionSort : BaseArr
    {
        public override void Sort()
        {
            int temp = 0;
            int j = 0;

            Console.WriteLine("삽입 정렬 시작");
            for (int i = 1; i < Max_Length; i++)
            {
                if(i+1 != Max_Length)
                {
                    Console.Write($"{i + 1}단계: ");
                }

                temp = arr[i];
                j = i;

                while (j > 0 && arr[j - 1] > temp)
                {
                    arr[j] = arr[j - 1];
                    j--;
                }
                arr[j] = temp;

                if (i + 1 != Max_Length)
                {
                    Show();
                    Console.WriteLine();
                }
            }
        }
    }
}
