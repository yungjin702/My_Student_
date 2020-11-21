using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _0520
{
    class AddressBook
    {
        public string Name { get; set; }
        public string Telephone { get; set; }

        public AddressBook(string name, string telephone)
        {
            Name = name;
            Telephone = telephone;
        }

        public void SearchTelephone(string name)
        {
            if(this.Name.Equals(name))
            {
                Console.WriteLine(Telephone);
            }
        }

        public void SearchName(string telephone)
        {
            if (this.Telephone.Equals(telephone))
            {
                Console.WriteLine(Name);
            }
        }
    }
}
