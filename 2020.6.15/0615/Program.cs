using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace _0615
{
    class Program
    {
        static void Main(string[] args)
        {
            int option = 0;
            var sales = new SalesCount(System.Environment.CurrentDirectory + "\\sales.csv");

            Console.WriteLine("[1. 매장 별 매출액], [2. 상품 별 매출액], [3. 매장 별 상품 매출액]");
            option = Convert.ToInt32(Console.ReadLine());

            if (option == 1)
            {
                Dictionary<string, int> amountEachStore = sales.GetEachStoreSales();

                foreach (KeyValuePair<string, int> obj in amountEachStore)
                {
                    Console.WriteLine($"{obj.Key} - 매출액: {obj.Value:N0}");
                }
            }
            else if (option == 2)
            {
                Dictionary<string, int> amountEachProduct = sales.GetEachProductSales();

                foreach (KeyValuePair<string, int> obj in amountEachProduct)
                {
                    Console.WriteLine($"{obj.Key} - 매출액: {obj.Value:N0}");
                }
            }
            else if (option == 3)
            {
                Dictionary<string, Dictionary<string, int>> amountEachProduct = sales.GetEachProductSales("a");

                foreach (KeyValuePair<string, Dictionary<string, int>> obj in amountEachProduct)
                {
                    Console.WriteLine($"{obj.Key}");

                    foreach (KeyValuePair<string, int> product in obj.Value)
                    {
                        Console.WriteLine($"{product.Key} - 매출액: {product.Value}");
                    }

                    Console.WriteLine();
                }
            }
        }
    }
}
