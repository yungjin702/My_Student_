using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Sort
{
    class Program
    {
        static void Main(string[] args)
        {
            ConsoleKeyInfo keys;
            BaseArr baseArr = null;

            Console.WriteLine("1. 버블 정렬, 2. 삽입 정렬, 3. 선택 정렬, 4. 쉘 정렬, 5. 퀵 정렬");
            keys = Console.ReadKey(true);

            Console.Clear();

            switch (keys.Key)
            {
                case ConsoleKey.D1:
                    baseArr = new BubbleSort();
                    Console.Write("정렬되어 있지 않은 배열: ");
                    baseArr.Show();
                    Console.WriteLine();
                    baseArr.Sort();
                    Console.Write("정렬된 배열: ");
                    baseArr.Show();
                    break;

                case ConsoleKey.D2:
                    baseArr = new InsertionSort();
                    Console.Write("정렬되어 있지 않은 배열: ");
                    baseArr.Show();
                    Console.WriteLine();
                    baseArr.Sort();
                    Console.Write("정렬된 배열: ");
                    baseArr.Show();
                    break;

                case ConsoleKey.D3:
                    baseArr = new SelectionSort();
                    Console.Write("정렬되어 있지 않은 배열: ");
                    baseArr.Show();
                    Console.WriteLine();
                    baseArr.Sort();
                    Console.Write("정렬된 배열: ");
                    baseArr.Show();
                    break;

                case ConsoleKey.D4:
                    baseArr = new ShellSort();
                    Console.Write("정렬되어 있지 않은 배열: ");
                    baseArr.Show();
                    Console.WriteLine();
                    baseArr.Sort();
                    Console.Write("정렬된 배열: ");
                    baseArr.Show();
                    break;

                case ConsoleKey.D5:
                    baseArr = new QuickSort();
                    Console.Write("정렬되어 있지 않은 배열: ");
                    baseArr.Show();
                    Console.WriteLine();
                    baseArr.Sort();
                    Console.Write("정렬된 배열: ");
                    baseArr.Show();
                    break;

                default:
                    break;
            }

            Console.WriteLine();
        }
    }
}
