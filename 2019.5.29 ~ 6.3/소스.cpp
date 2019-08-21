#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>

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
	Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
}

void Circle::move()
{
	x += rand() % 50;
}

int Circle::XChack()
{
	return x;
}

void gotoxy(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


void GameStart();

void WinOrLose();

void Menu();

int main()
{
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.dwSize = 1;
	cursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);

	Menu();

	return 0;
}

void GameStart()
{
	
	srand(time(NULL));
	Circle c1, c2;

	c1.init(100, 100, 50);
	c2.init(100, 300, 50);

	int choice = 0;

	printf("1, 2번 원중 당신은 누구를 선택하실겁니까? : ");
	scanf("%d", &choice);
	system("cls");

	gotoxy(100, 1);
	for (int i = 0; i < 20; i++)
	{
		gotoxy(100, 1 + i);
		printf("|");
	}

	Sleep(2000);

	while (c1.XChack() != 800 && c1.XChack() < 800 && c2.XChack() != 800 && c2.XChack() < 800)
	{
		
		c1.draw();
		c2.draw();

		c1.move();
		c2.move();

		Sleep(1000);
	}

	if (choice == 1 && c1.XChack() >= 800 && c2.XChack() < 800)
	{
		gotoxy(30, 21);
		cout << "당신은 1번 원을 선택하여 이겼습니다!" << endl;
		win += 1;
	}
	else if (choice == 1 && c2.XChack() >= 800 && c1.XChack() < 800)
	{
		gotoxy(30, 21);
		cout << "당신은 1번 원을 선택하여 졌습니다!" << endl;
		lose += 1;
	}

	else if (choice == 2 && c2.XChack() >= 800 &&  c1.XChack() < 800)
	{
		gotoxy(30, 21);
		cout << "당신은 2번 원을 선택하여 이겼습니다!" << endl;
		win += 1;
	}
	else if (choice == 2 && c1.XChack() >= 800 && c2.XChack() < 800)
	{
		gotoxy(30, 21);
		cout << "당신은 2번 원을 선택하여 졌습니다!" << endl;
		lose += 1;
	}

	gotoxy(32, 22);
	cout << "메뉴로 가려면 Enter를 누르세요";

	while (_getch() != 13)
	{
		
	}

	system("cls");
	Menu();
}

void WinOrLose()
{
	
	cout << "승리: " << win << "판" << endl;
	cout << "패배: " << lose << "판" << endl;

	gotoxy(10, 4);
	cout << "메인으로 돌아가려면 1번을 누르세요";

	int select = 0;

	while (select != 49)
	{
		select = _getch();
	}
	system("cls");
	Menu();
}

void Menu()
{
	
	int select = 0;

	printf("1. 게임시작\n");
	printf("2. 승리, 패배 통계 확인\n");
	printf("3. 종료");

	select = _getch();

	switch (select)
	{
	case 49:
		system("cls");
		GameStart();
		break;

	case 50:
		system("cls");
		WinOrLose();
		break;

	case 51:
		system("cls");
		exit(0);
		break;
	}
}