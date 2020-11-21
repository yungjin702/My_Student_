using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Sort
{
    abstract class BaseArr
    {
        static public readonly int Max_Length = 10;
        static public readonly int Max_Values = 100;

        public int[] arr = new int[Max_Length];

        public BaseArr()
        {
            Random random = new Random();
            random.Next();

            for (int i = 0; i < Max_Length; i++)
            {
                arr[i] = random.Next(1, Max_Values);
            }
        }

        public void Show()
        {
            for(int i = 0; i < Max_Length; i++)
            {
                Console.Write($"{arr[i]} ");
            }
            Console.WriteLine();
        }

        abstract public void Sort();
    }
}
