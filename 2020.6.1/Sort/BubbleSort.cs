using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Sort
{
    class BubbleSort : BaseArr
    {
        public override void Sort()
        {
           Console.WriteLine("버블 정렬 시작");
           for(int i = 0; i < Max_Length; i++)
           {
                if (i + 1 != Max_Length)
                {
                    Console.WriteLine($"{i + 1}단계");
                }

                for (int j = i + 1; j < Max_Length; j++)
                {
                    if (arr[i] > arr[j])
                    {
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }

                    Show();
                    Console.WriteLine();
                }
            }
        }
    }
}
