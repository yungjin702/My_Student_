#include <iostream>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>

class Circle
{
	public:
		int x, y;
		int radius;
		
		Circle() : x{0}, y{0}, radius{0} {}
		
		void draw()
		{
			int r = radius / 2;
			HDC hdc = GetWindowDC(GetForegroundWindow());
			Ellipse(hdc, x-r, y-r, x+r, y+r);
		}
};

int main()
{
	srand(time(NULL));
	
	Circle Circles[10];
	int input = 0;
	
	while( input != 113)
	{
		input = _getch();
		
		if( input == 99)
		{
			for(Circle& c : Circles)
			{
				c.x = rand() % 500;
				c.y = rand() % 300;
				c.radius = rand() % 100;
			}
			
			for(Circle& c : Circles)
			{
				c.draw();
			}
		}
	}
	
	return 0;
}
  
