using System;
using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace _0715
{
    class Solution
    {
        public void Q1()
        {
            Stack<char> arr = new Stack<char>();
            string input = Console.ReadLine();
            string output = null;
            char check;
            int cut = 0;
            int i = 0;

            input = input.ToLower();

            for (i = input.Length - 1; i >= 0; --i)
            {
                char temp = input[i];
                arr.Push(temp);
            }

            check = arr.Peek();

            i = 0;

            while (i < input.Length)
            { 
                char temp = arr.Peek();

                if (check == temp)
                {
                    cut++;

                    if (cut == 10)
                    {
                        output = output + temp + cut;
                        cut = 1;
                    }
                }
                else
                {
                    output = output + check + cut;
                    check = temp;
                    cut = 1;
                }

                arr.Pop();
                i++;
            }
            output = output + check + cut;

            Console.WriteLine(output);
        }


        public int compare(int x, int y)
        {
            return y.CompareTo(x);
        }

        public void Q2()
        {
            Stack<int> arr = new Stack<int>();
            List<int> sorted = new List<int>();
            string input = Console.ReadLine();
            string output = null;
            int check;
            int i = 0;

            for (i = input.Length - 1; i >= 0; --i)
            {
                sorted.Add(input[i]);
            }

            sorted.Sort(compare);

            for (i = 0; i < sorted.Count; ++i)
            {
                arr.Push(sorted[i]);
            }

            i = 0;
            output = output + Convert.ToChar(arr.Peek());
            check = arr.Peek();

            while(i < input.Length)
            {
                int temp = arr.Peek();

                if(check == temp)
                {
                    arr.Pop();
                }
                else
                {
                    output = output + Convert.ToChar(temp);
                    check = temp;
                    arr.Pop();
                }
                i++;
            }

            Console.WriteLine(output);
        }

        public void Q3()
        {
            Stack<char> arr = new Stack<char>();
            string input = Console.ReadLine();
            string compare = input.ToLower();
            string output = null;

            for(int i = 0; i < compare.Length; ++i)
            {
                if (compare[i] == '\'' || compare[i] == ' ' || compare[i] == '.')
                {
                    compare = compare.Remove(i, 1);
                }
            }

            for (int i = 0; i < compare.Length; ++i)
            {
                arr.Push(compare[i]);
            }

            for(int i = 0; i < compare.Length; ++i)
            {
                output = output + arr.Peek();
                arr.Pop();
            }

            if(compare.CompareTo(output) == 0)
            {
                Console.WriteLine($"[{input}]은 회문입니다");
            }
            else
            {
                Console.WriteLine($"[{input}]은 회문이 아닙니다");
            }
        }

        public void Q4()
        {
            string input = Console.ReadLine();
            bool isNull = false;

            for(int i = 0; i < input.Length; ++i)
            {
                char temp = Char.ToLower(input[i]);
                if(temp == 'a' || temp == 'e' || temp == 'e' || temp == 'o' || temp == 'u')
                {
                    isNull = true;
                    Console.Write(input[i]);
                }
            }

            if(!isNull)
            {
                Console.WriteLine("???");
            }
            else
            {
                Console.WriteLine();
            }

        }
    }
}
