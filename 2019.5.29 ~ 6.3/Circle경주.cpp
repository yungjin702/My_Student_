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
	 
	printf(" 1, 2번 원중 당신은 누구를 선택하실겁니까? : "); 
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
	cout << "승리: " << win << "판" << endl;
	cout << "패배: " << lose << "판" << endl;
	
	gotoxy( 10, 4);
	cout << "메인으로 돌아가려면 1번을 누르세요";
	
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
	
	printf("1. 게임시작\n");
	printf("2. 승리, 패배 통계 확인\n");
	printf("3. 종료");
	
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
