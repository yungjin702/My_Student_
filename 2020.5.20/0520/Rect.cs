using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _0520
{
    class Rect
    {
        public int Width { get; set; }
        public int Height { get; set; }

        public Rect(int w, int h)
        {
            Width = w;
            Height = h;
        }

        public int GetArea()
        {
            return Width * Height;
        }
    }
}
