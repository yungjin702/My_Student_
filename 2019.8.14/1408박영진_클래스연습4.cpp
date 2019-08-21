#include <iostream>

using namespace std;

typedef class character
{
	private:
		int x;
		int y;
		int hp = 100;
		
	public:
		
		charactor()
		{
			x = 0;
			y = 0;
		}
		
		void sestX()
		{
			x += 10;
		}
		
		void print()
		{
			cout << "x: " << x << " y: " << y << " HP: " << hp << endl;
		}
			
}chara;

int main()
{
	chara a;
	int i;
	
	cout << "Ä³¸¯ÅÍ #1" << endl;
	
	for( i = 0; i < 10; ++i)
	{
		a.print();
		a.sestX();
	}
	
	return 0;
}
