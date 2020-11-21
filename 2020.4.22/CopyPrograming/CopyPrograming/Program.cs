using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CopyPrograming
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Current OS: {0}", Environment.OSVersion);
            Console.WriteLine($"Current OS: {Environment.OSVersion}");

            Console.WriteLine($"Current OS: {Environment.CurrentDirectory}");
            string[] drives = Environment.GetLogicalDrives();

            for (int i = 0; i < drives.Length; i++)
            {
                Console.WriteLine($"Drive {i} : {drives[i]}");
            }

            Console.WriteLine($"Current Version of .NET : {Environment.Version}");
        }
    }
}
