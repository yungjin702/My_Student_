#include "Graphic.h"

//cmd â���� (x, y) ��ġ�� �̵���Ű�� �Լ�
void gotoxy(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

//ȭ�� ����� ����� �Լ�
void ScreenGraphic()
{
	//���κ�
	gotoxy(0, 0);
	printf("��");
	gotoxy(1, 0);
	for (int i = 1; i < HEIGHT; i++)
	{
		printf("��");
	}
	printf("��");

	printf("\n");

	//���̵� �κ�
	for (int i = 0; i < WIDTH; i++)
	{
		gotoxy(0, 1 + i);
		printf("��");
		gotoxy(HEIGHT, 1 + i);
		printf("��");
	}
	printf("\n");

	//�Ʒ��κ�
	printf("��");
	for (int i = 1; i < HEIGHT; i++)
	{
		printf("��");
	}
	printf("��");
}

//x, y ��ġ�� (height) * (width) ũ���� �簢�� ����ϴ� �Լ�
void CustomGraphic(int x, int y, int height, int width)
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

//x, y ��ġ�� (height) * (width) ũ���� �׸�, ���ڸ� �����ϴ� �Լ�
void Eraser(int x, int y, int h, int w)
{
	int i, j;

	for (i = 0; i < w; i++)
	{
		gotoxy(x, y + i);
		for (j = 0; j < h + 2; j++)
		{
			cout << " ";
		}
	}
}