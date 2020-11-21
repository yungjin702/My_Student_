using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Homework
{
    class Product
    {
        private int code;
        private string name;
        private int price;

        static void Main(string[] args)
        {
            Product koreanSnack = new Product(123, "약과", 1800);
            Product riceCake = new Product(123, "찹쌀떡", 1600);

            koreanSnack.ShowInformation();
            riceCake.ShowInformation();

            Console.WriteLine("Made by 2407");
        }

        public Product()
        {
            code = 0;
            name = "Null";
            price = 0;
        }

        public Product(int c, string n, int p)
        {
            code = c;
            name = n;
            price = p;
        }

        public int GetTax()
        {
            int tax = (int)(price * 0.08);
            return tax;
        }

        public int GetPriceIncludingTax()
        {
            return price + GetTax();
        }

        public void ShowInformation()
        {
            Console.WriteLine($"이름: {name}, 가격: {GetPriceIncludingTax()}");
        }

    }
}
