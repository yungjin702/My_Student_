using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Sort
{
    class ShellSort : BaseArr
    {
        public override void Sort()
        {
            Console.WriteLine("쉘 정렬 시작");

            int interval = Max_Length;
            int i, j, l;

            while(interval != 1)
            {
                interval = (interval / 3) + 1;
                Console.Write($"interval: {interval} >> ");

                for(i = 0; i < interval; i++)
                {
                    for(j = i + interval; j < Max_Length; j += interval)
                    {
                        int item = arr[j];
                        for (l = j - interval; l >= i && item < arr[l]; l -= interval)
                        {
                            arr[l + interval] = arr[l];
                        }
                        arr[l + interval] = item;
                    }
                }

                Show();
                Console.WriteLine();
            }
        }
    }
}
