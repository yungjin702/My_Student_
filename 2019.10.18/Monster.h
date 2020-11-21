#pragma once
#include "Screen.h"
#include <stdlib.h>
#include <time.h>

class Monster
{
protected:

	//몬스터의 이름
	string name;

	//몬스터의 모양
	string shape;

	//몬스터의 위치 / 먹은 아이템 수 / 현재 에너지
	int x, y, nItem, nEnergy;

	//자신이 먹을 아이템의 위치 좌표
	int itemX, itemY;

public:
	//몬스터 생성을 위한 생성자 함수
	Monster(int x, int y, string name, string shape) :x{ x }, y{ y }, name{ name }, shape{ shape }, nItem{ 0 }, nEnergy{ 100 }, itemX{ rand() % (Xmax - 1) }, itemY{ rand() % (Ymax - 1) } {}

	//몬스터를 움직이는 함수
	void move(Screen &screen);

	//몬스터가 움직일 수 있는 지 확인하고 바꾸는 함수
	void canMove(int &xmove, int &ymove, Screen &screen);

	//몬스터를 화면의 출력하는 함수
	void draw(Screen &screen) { screen.draw(x, y, shape); }

	//자신이 먹을 아이템의 목표를 설정하는 함수
	void setItem(Screen &screen);

	//몬스터가 이동하는 위치에 아이템이 있으면 아이템을 먹는 함수
	void getItem(Screen &screen);

	//몬스터가 이동하는 위치에 아이템이 있는지 확인하는 함수
	bool isItem(Screen &screen);

	//현재 X좌표를 반환하는 함수
	int getX() { return x; }

	//현재 Y좌표를 반환하는 함수
	int getY() { return y; }

	//현재 에너지를 반환하는 함수
	int getEnergy() { return nEnergy; }

	//몬스터의 상태를 나타내는 함수
	void print(){ cout << name << shape << " [" << nEnergy << "]" << " : " << nItem; }
};



