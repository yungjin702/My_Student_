using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _0520
{
    class Homework
    {
        public void One()
        {
            ConsoleKeyInfo keys;

            List<Song> songs = new List<Song>();
            songs.Add(new Song("아로하", "조정석", 245));
            songs.Add(new Song("살짝 설랬어", "오마이걸", 202));
            songs.Add(new Song("N분의 1 (Feat. 다이나믹듀오)",
                               "넉살,한해,조우찬,RYNO (라이노)", 245));

            foreach (Song song in songs)
            {
                song.ShowInformation();
                Console.WriteLine();
            }

            Console.WriteLine("Esc키를 눌러 전화부로 넘어가기");

            keys = Console.ReadKey(true);
            while (keys.Key != ConsoleKey.Escape)
            {
                keys = Console.ReadKey(true);
            }

            Console.Clear();
        }

        public void Two()
        {
            ConsoleKeyInfo keys;

            int input = 0;

            List<AddressBook> addressBooks = new List<AddressBook>();

            Console.WriteLine("인원수를 숫자로 입력해주세요");
            input = Convert.ToInt32(Console.ReadLine());

            for (int i = 0; i < input; ++i)
            {
                Console.Write("이름과 전화번호 (번호는 연속적으로 입력)");
                Console.WriteLine("ex) 홍길동 010-1234-5678");

                string[] info = Console.ReadLine().Split(' ');

                if (info.Length > 1)
                {
                    addressBooks.Add(new AddressBook(info[0], info[1]));
                }
            }
            Console.WriteLine("저장되었습니다... ");

            while (true)
            { 
                string search = null;

                Console.Write("전화번호로 검색은 1번, 이름으로 검색은 2번을 눌러주세요");
                Console.WriteLine("(종료를 원하시면 Esc 입력)");

                keys = Console.ReadKey(true);
                Console.Clear();


                if (keys.Key == ConsoleKey.D1)
                {
                    Console.WriteLine("검색할 전화번호 (010-1234-5678)");
                    search = Console.ReadLine();

                    Console.Write($"{search}을 사용하는 이름은 ");

                    foreach (AddressBook address in addressBooks)
                    {
                        address.SearchName(search);
                    }
                }
                else if (keys.Key == ConsoleKey.D2)
                {
                    Console.WriteLine("검색할 이름 (홍길동)");
                    search = Console.ReadLine();

                    Console.Write($"{search}의 전화번호는 ");

                    foreach (AddressBook address in addressBooks)
                    {
                        address.SearchTelephone(search);
                    }        
                }
                else if(keys.Key == ConsoleKey.Escape)
                {
                    break;
                }
            }
            Console.Clear();
        }

        public void Three()
        {
            ConsoleKeyInfo keys;

            List<Rect> rects = new List<Rect>();

            int input = 0;
            int sum = 0;

            Console.WriteLine("사각형의 개수를 입력해주세요");
            input = Convert.ToInt32(Console.ReadLine());

            for(int i = 0; i < input; ++i)
            {
                List<int> num;

                Console.WriteLine("가로, 세로값을 입력해주세요 ex)4 8");
                num = new List<int>(Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse));

                rects.Add(new Rect(num[0], num[1]));
            }

            foreach(Rect rect in rects)
            {
                sum += rect.GetArea();
            }
            Console.WriteLine($"모든 사각형의 합은: {sum}입니다");

        }
    }
}
