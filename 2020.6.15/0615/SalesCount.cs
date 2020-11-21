using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace _0615
{
    class SalesCount
    {
        private List<Sale> _sales;

        public SalesCount(string filePath)
        {
            List<Sale> sales = new List<Sale>();
            string[] lines = File.ReadAllLines(filePath);
            foreach (string line in lines)
            {
                string[] items = line.Split(',');
                Sale sale = new Sale
                { 
                    ShopName = items[0],
                    ProductCategory = items[1],
                    Amount = int.Parse(items[2])
                };

                sales.Add(sale);
            }
            _sales = sales;
        }

        public Dictionary<string, int> GetEachStoreSales()
        {
            var dict = new Dictionary<string, int>();

            foreach (Sale sale in _sales)
            {
                if (dict.ContainsKey(sale.ShopName))
                {
                    dict[sale.ShopName] += sale.Amount;
                }
                else
                {
                    dict[sale.ShopName] = sale.Amount;
                }
            }
            return dict;
        }

        public Dictionary<string, int> GetEachProductSales()
        {
            var dict = new Dictionary<string, int>();

            foreach (Sale sale in _sales)
            {
                if (dict.ContainsKey(sale.ProductCategory))
                {
                    dict[sale.ProductCategory] += sale.Amount;
                }
                else
                {
                    dict[sale.ProductCategory] = sale.Amount;
                }
            }
            return dict;
        }

        public Dictionary<string, Dictionary<string, int>> GetEachProductSales(string a)
        {
            var dict = new Dictionary<string, Dictionary<string, int>>();

            foreach(Sale sale in _sales)
            {
                if(dict.ContainsKey(sale.ShopName))
                {
                    if(dict[sale.ShopName].ContainsKey(sale.ProductCategory))
                    {
                        dict[sale.ShopName][sale.ProductCategory] += sale.Amount;
                    }
                    else
                    {
                        dict[sale.ShopName][sale.ProductCategory] = sale.Amount;
                    }
                }
                else
                {
                    dict[sale.ShopName] = new Dictionary<string, int>();
                    dict[sale.ShopName][sale.ProductCategory] = sale.Amount;
                }
            }
            return dict;
        }
    }
}
