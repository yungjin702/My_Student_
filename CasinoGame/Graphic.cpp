#include "Graphic.h"

//cmd 창에서 (x, y) 위치로 이동시키는 함수
void gotoxy(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

//화면 배경을 만드는 함수
void ScreenGraphic()
{
	//윗부분
	gotoxy(0, 0);
	printf("┏");
	gotoxy(1, 0);
	for (int i = 1; i < HEIGHT; i++)
	{
		printf("━");
	}
	printf("┓");

	printf("\n");

	//사이드 부분
	for (int i = 0; i < WIDTH; i++)
	{
		gotoxy(0, 1 + i);
		printf("┃");
		gotoxy(HEIGHT, 1 + i);
		printf("┃");
	}
	printf("\n");

	//아랫부분
	printf("┗");
	for (int i = 1; i < HEIGHT; i++)
	{
		printf("━");
	}
	printf("┛");
}

//x, y 위치에 (height) * (width) 크기의 사각형 출력하는 함수
void CustomGraphic(int x, int y, int height, int width)
{
	//윗부분
	gotoxy(x, y);
	printf("┏");
	gotoxy(x + 1, y);
	for (int i = 1; i < height; i++)
	{
		printf("━");
	}
	printf("┓");

	printf("\n");

	//사이드 + 중앙부분
	for (int i = 0; i < width; i++)
	{
		gotoxy(x, y + 1 + i);
		printf("┃");
		for (int j = 0; j < height - 2; j++)
		{
			cout << " ";
		}
		gotoxy(x + height, y + 1 + i);
		printf("┃");
	}
	printf("\n");

	//아랫부분
	gotoxy(x, y + width);
	printf("┗");
	for (int i = 1; i < height; i++)
	{
		printf("━");
	}
	printf("┛");
}

//x, y 위치에 (height) * (width) 크기의 그림, 글자를 삭제하는 함수
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