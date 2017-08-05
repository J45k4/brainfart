using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace brainfart
{
    class Program
    {
        static void Main(string[] args)
        {
            int? maxCapacity = 60;
            int? minCapacity = 60;
            int? kapasiteetti = 100;

            var first = minCapacity != null && kapasiteetti != null ? kapasiteetti >= minCapacity : true;
            var last = maxCapacity != null && kapasiteetti != null ? kapasiteetti <= maxCapacity : true;

            Console.WriteLine(first);
            Console.WriteLine(last);
            Console.WriteLine(first && last);
            Console.WriteLine(
                (minCapacity != null && kapasiteetti != null ? kapasiteetti >= minCapacity : true) &&
                (maxCapacity != null && kapasiteetti != null ? kapasiteetti <= maxCapacity : true)
            );
        }
    }
}
