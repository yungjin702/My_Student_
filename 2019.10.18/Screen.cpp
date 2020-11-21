#include "Screen.h"

//�� ���� �� ȭ�� �ʱ�ȭ
Screen::Screen()
{
	CustomGraphic(0, 0, (Xmax * 2) + 2, Ymax + 1);
	for (int i = 0; i < Xmax; i++)
	{
		for (int j = 0; j < Ymax; j++)
		{
			map[i][j] = "��";
		}
	}

	for (int i = 0; i < Xmax; i++)
	{
		gotoxy(2, 1 + i);
		for (int j = 0; j < Ymax; j++)
		{
			cout << map[i][j];
		}
		cout << "\n";
	}
}

//���͵��� ����ϱ� ���� �⺻ �Լ�
void Screen::draw(int x, int y, string val)
{
	map[x][y] = val;
	gotoxy((x * 2)+2, y + 1);
	cout << map[x][y];
}

//ȭ�鿡�� ����ϴ� ��ġ�� �ٲٴ� �Լ�
void Screen::gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

//( x , y ) ��ġ�� �������� �����
void Screen::clear(int x, int y)
{
	map[x][y] = "  ";
	gotoxy((x * 2) + 2, y + 1);
	cout <<  map[x][y];
}

//�� ���� ������ ����� �Լ�
void Screen::eraser(int y)
{
	gotoxy(0, y);
	cout << "                                              ";
}

void Screen::CustomGraphic(int x, int y, int height, int width)
{
	//���κ�
	gotoxy(x, y);
	printf("��");
	gotoxy(x + 1, y);
	for (int i = 1; i < height; i++)
	{
		printf("��");
	}
	printf("��");

	printf("\n");

	//���̵� + �߾Ӻκ�
	for (int i = 0; i < width; i++)
	{
		gotoxy(x, y + 1 + i);
		printf("��");
		for (int j = 0; j < height - 2; j++)
		{
			cout << " ";
		}
		gotoxy(x + height, y + 1 + i);
		printf("��");
	}
	printf("\n");

	//�Ʒ��κ�
	gotoxy(x, y + width);
	printf("��");
	for (int i = 1; i < height; i++)
	{
		printf("��");
	}
	printf("��");
}

//���� ���� ������ �ִ��� Ȯ���ϴ� �Լ�
string Screen::nowThis(int x, int y)
{
	return map[x][y];
}


