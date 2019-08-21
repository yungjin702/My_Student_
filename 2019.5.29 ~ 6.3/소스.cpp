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

	printf("1, 2�� ���� ����� ������ �����Ͻǰ̴ϱ�? : ");
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
		cout << "����� 1�� ���� �����Ͽ� �̰���ϴ�!" << endl;
		win += 1;
	}
	else if (choice == 1 && c2.XChack() >= 800 && c1.XChack() < 800)
	{
		gotoxy(30, 21);
		cout << "����� 1�� ���� �����Ͽ� �����ϴ�!" << endl;
		lose += 1;
	}

	else if (choice == 2 && c2.XChack() >= 800 &&  c1.XChack() < 800)
	{
		gotoxy(30, 21);
		cout << "����� 2�� ���� �����Ͽ� �̰���ϴ�!" << endl;
		win += 1;
	}
	else if (choice == 2 && c1.XChack() >= 800 && c2.XChack() < 800)
	{
		gotoxy(30, 21);
		cout << "����� 2�� ���� �����Ͽ� �����ϴ�!" << endl;
		lose += 1;
	}

	gotoxy(32, 22);
	cout << "�޴��� ������ Enter�� ��������";

	while (_getch() != 13)
	{
		
	}

	system("cls");
	Menu();
}

void WinOrLose()
{
	
	cout << "�¸�: " << win << "��" << endl;
	cout << "�й�: " << lose << "��" << endl;

	gotoxy(10, 4);
	cout << "�������� ���ư����� 1���� ��������";

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

	printf("1. ���ӽ���\n");
	printf("2. �¸�, �й� ��� Ȯ��\n");
	printf("3. ����");

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