#pragma once
#include "Monster.h"

using namespace std;

class VariousMonster : public Monster
{

public:
	//�پ��� ���� ������
	VariousMonster(int x, int y, string name, string shape) : Monster(x, y, name, shape) {}

	//������ �̸��� ��ȯ�ϴ� �Լ�
	string getName() { return name; }

	void variousMove(Screen &screen);

	void getItem(Screen &screen);

};
