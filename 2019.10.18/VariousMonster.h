#pragma once
#include "Monster.h"

using namespace std;

class VariousMonster : public Monster
{

public:
	//다양한 몬스터 생성자
	VariousMonster(int x, int y, string name, string shape) : Monster(x, y, name, shape) {}

	//몬스터의 이름을 반환하는 함수
	string getName() { return name; }

	void variousMove(Screen &screen);

	void getItem(Screen &screen);

};
