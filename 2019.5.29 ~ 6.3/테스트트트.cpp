#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int win, lose = 0;

class Circle
{
	public:
		void init(int xval, int yval, int r);
		void draw();
		void move();
		int XChack();
	
	private:
		int x, y, radius;
};

void Circle::init(int xval, int yval, int r)
{
	x = xval;
	y = yval;
	radius = r;
}

void Circle::draw()
{
	HDC hdc = GetWindowDC(GetForegroundWindow());
	Ellipse(hdc, x - radius, y - radius, x + radius, y + radius );
}

void Circle::move()
{
	x += rand() % 50;
}

int main()
{
	Circle c1;
	
	c1.init(100, 100, 50);
	
	c1.move();
	c1.draw();
	
	return 0;
}
