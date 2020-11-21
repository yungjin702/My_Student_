using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace _0713
{
    class Regex_Question
    {
        public void Q1()
        {
            string pattern = @"([0-9]{2}(0[1-9]|1[0-2])(0[1-9]|[1-2][0-9]|3[0-1]))([1-4][0-9]{6})";
            string input = null;

            input = Console.ReadLine();
            var matches = Regex.Match(input, pattern);

            if(matches.Success)
            {
                string replaced = Regex.Replace(input, pattern, "$1-$4");
                Console.WriteLine(replaced);
            }
            else
            {
                Console.WriteLine("주민등록번호 오류");
            }

        }

        public void Q2()
        {
            string pattern = @"(\w+)@(((\w+\.co)|(\w+\.ac)|(korea))\.kr|\w+(\.com)|(\.net))";
            string input = null;

            input = Console.ReadLine();
            var matches = Regex.Match(input, pattern);

            if (matches.Success)
            {
                Console.WriteLine($"ID : {matches.Groups[1]}");
            }
            else
            {
                Console.WriteLine("맞지 않는 이메일");
            }
        }

        public void Q3()
        {
            string pattern = @"\b[Tt]ime?(\w+)";
            var texts = new[]
            {
                "Time is money.",
                "What time is it?",
                "It will takes some time.",
                "We recognized the timetable",
                "Hello World",
            };

            foreach(var text in texts)
            {
                Console.WriteLine(text);
                var matches = Regex.Match(text, pattern);

                if(matches.Success)
                {
                    Console.WriteLine($"index: {matches.Index}");
                }
                else
                {
                    Console.WriteLine("index: X");
                }
            }
        }
    }
}
