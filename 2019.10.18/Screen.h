#pragma once
#include <iostream>
#include <string>
#include <Windows.h>

#define Xmax 20
#define Ymax 20

using namespace std;

class Screen
{
	//맵 배열
	string map[Xmax][Ymax];
public:
	//맵 준비 및 초기화
	Screen();

	//몬스터들을 출력하기 위한 기본 함수
	void draw(int x, int y, string val);

	//화면에서 출력하는 위치를 바꾸는 함수
	void gotoxy(int x, int y);

	//( x , y ) 위치를 공백으로 만들기
	void clear(int x, int y);

	//한 줄의 내용을 지우는 함수
	void eraser(int y);

	//x, y 위치에 (height) * (width) 크기의 사각형 출력하는 함수
	void CustomGraphic(int x, int y, int height, int width);

	//현재 맵의 무엇이 있는지 확인하는 함수
	string nowThis(int x, int y);

};

