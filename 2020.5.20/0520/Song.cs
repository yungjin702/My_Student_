using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _0520
{
    class Song
    {
        public string Title { get; set; }
        public string[] artistName;
        public int length;

        public Song(string title, string aName, int length)
        {
            Title = title;
            artistName = aName.Split(' ');
            this.length = length;
        }

        public void ShowInformation()
        {
            Console.WriteLine($"노래 제목: {Title}");

            Console.Write("가수이름: ");

            for(int i = 0; i < artistName.Length; i++)
            {
                Console.Write($"{artistName[i]} ");
            }

            Console.WriteLine();

            Console.WriteLine($"재생시간: {length /60}:{(length % 60).ToString("D2")}");
        }
    }
}
