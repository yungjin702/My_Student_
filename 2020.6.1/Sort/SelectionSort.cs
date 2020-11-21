using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Sort
{
    class SelectionSort : BaseArr
    {
        public override void Sort()
        {
            Console.WriteLine("선택 정렬 시작");
            for (int i = 0; i < Max_Length; i++)
            {
                if (i + 1 != Max_Length)
                {
                    Console.Write($"{i + 1}단계: ");
                }

                int index = i;

                for(int j = i + 1; j < Max_Length; j++)
                {
                    if(arr[index] > arr[j])
                    {
                        index = j;
                    }
                }

                if( i != index)
                {
                    int temp = arr[i];
                    arr[i] = arr[index];
                    arr[index] = temp;
                }

                if (i + 1 != Max_Length)
                {
                    Show();
                    Console.WriteLine();
                }
            }
        }
    }
}
