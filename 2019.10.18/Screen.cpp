#include "Screen.h"

//맵 생성 및 화면 초기화
Screen::Screen()
{
	CustomGraphic(0, 0, (Xmax * 2) + 2, Ymax + 1);
	for (int i = 0; i < Xmax; i++)
	{
		for (int j = 0; j < Ymax; j++)
		{
			map[i][j] = "■";
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

//몬스터들을 출력하기 위한 기본 함수
void Screen::draw(int x, int y, string val)
{
	map[x][y] = val;
	gotoxy((x * 2)+2, y + 1);
	cout << map[x][y];
}

//화면에서 출력하는 위치를 바꾸는 함수
void Screen::gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

//( x , y ) 위치를 공백으로 만들기
void Screen::clear(int x, int y)
{
	map[x][y] = "  ";
	gotoxy((x * 2) + 2, y + 1);
	cout <<  map[x][y];
}

//한 줄의 내용을 지우는 함수
void Screen::eraser(int y)
{
	gotoxy(0, y);
	cout << "                                              ";
}

void Screen::CustomGraphic(int x, int y, int height, int width)
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

//현재 맵의 무엇이 있는지 확인하는 함수
string Screen::nowThis(int x, int y)
{
	return map[x][y];
}


