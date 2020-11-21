using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _0617
{
    class Program
    {
        static void Main(string[] args)
        {
            Random random = new Random();
            random.Next();
            int number = random.Next(0, 99);
            int attempt = 1;
            int minValue = 0;
            int maxValue = 99;

            Console.WriteLine("값을 정했습니다. 잘 맞춰주세요. (0-99) 사이의 값을 입력하시면 됩니다.");

            while(true)
            {
                try
                {
                    int input = 0;
                    Console.Write($"{attempt} >> ");
                    input = Convert.ToInt32(Console.ReadLine());

                    if (input < number)
                    {
                        minValue = input + 1;
                        Console.Write($"{input}보다 더 큰 수 입니다.");
                        Console.WriteLine($" {minValue} ~ {maxValue} 사이입니다.");
                        Console.WriteLine();
                        attempt++;
                    }
                    else if (input > number)
                    {
                        maxValue = input - 1;
                        Console.Write($"{input}보다 더 작은 수 입니다.");
                        Console.WriteLine($" {minValue} ~ {maxValue} 사이입니다.");
                        Console.WriteLine();
                        attempt++;
                    }
                    else if (input == number)
                    {
                        string choose = null;
                        Console.WriteLine($"{attempt} 번만에 맞추셨습니다 값은 {number}입니다.");
                        Console.WriteLine("다시 하시겠습니까? (y/n)");
                        choose = Console.ReadLine();

                        if(choose.Equals("y"))
                        {
                            number = random.Next(0, 99);
                            attempt = 0;
                            minValue = 0;
                            maxValue = 99;
                            Console.Clear();
                            Console.WriteLine("값을 정했습니다. 잘 맞춰주세요. (0-99) 사이의 값을 입력하시면 됩니다.");
                            continue;
                        }
                        else if (choose.Equals("n"))
                        {
                            break;
                        }
                    }

                }
                catch (System.FormatException e)
                {
                    Console.WriteLine("정수가 아닙니다. 다시 입력하세요.");
                }
            }
           
        }
    }
}
