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

int Circle::XChack()
{
	return x;
}

void gotoxy( int x, int y)
{
	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , pos);
}


void GameStart()
{
	Circle c1, c2;
	
	c1.init(100, 100, 50);
	c2.init(100, 300, 50);
	
	int choice = 0;
	 
	printf(" 1, 2�� ���� ����� ������ �����Ͻǰ̴ϱ�? : "); 
	scanf("%d" , &choice);
	system("cls");
	
	gotoxy( 10, 3);
	for ( int i = 0;  i < 8; i++)
	{
		gotoxy( 10 , 3+i);
		printf("|");
	}
	
	while( c1.XChack() != 300 || c1.XChack() >= 300 || c2.XChack() != 300 || c2.XChack() >= 300)
	{
		c1.move();
		c2.move();
		
		c1.draw();
		c2.draw();
		
		Sleep(1000);
	} 
	
	
}

void WinOrLose();

void Menu();

int main()
{
	Menu();
}

void WinOrLose()
{
	cout << "�¸�: " << win << "��" << endl;
	cout << "�й�: " << lose << "��" << endl;
	
	gotoxy( 10, 4);
	cout << "�������� ���ư����� 1���� ��������";
	
	int select = 0;
	
	while( select != 49)
	{
		select = getch();	
	}
	
	Menu();
}

void Menu()
{
	int select = 0;
	
	printf("1. ���ӽ���\n");
	printf("2. �¸�, �й� ��� Ȯ��\n");
	printf("3. ����");
	
	select = getch();
	
	switch( select )
	{
		case 49:
			GameStart();
			break;
			
		case 50:
			WinOrLose();
			break;
			
		case 51:
			exit(0);
			break; 
	}
}
