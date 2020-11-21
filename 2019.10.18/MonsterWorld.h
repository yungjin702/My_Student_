#pragma once
#include "VariousMonster.h"
#include "Screen.h"
#include <vector>

using namespace std;

class MonsterWorld
{
	//���͵��� ���� ����
	vector<VariousMonster>monsters;

	//���� ȭ�� �� ��
	Screen mainMap;

	//���� �����ִ� �����۰� ������ �� ��
	int nowItem, nTurn;

	//���� ���� ���忡 ���Ÿ��� �ִ��� Ȯ���ϴ� �Լ�
	bool ys;

	//�����ִ� �������� ������ Ȯ���ϴ� �Լ�
	bool isOver() { return nowItem == 0; }

public:
	//�ʱ�ȭ
	MonsterWorld() : nowItem{ Xmax * Ymax }, nTurn{ 0 }, ys{false} {}

	//���͵� �߰��ϱ�
	void add(VariousMonster &monster) { monsters.push_back(monster); nowItem -= 1; }

	//���� ������ ����
	void play(int wait, int turn);

	//��� ���͵��� �׾����� Ȯ���ϴ� �Լ�
	bool isAllDead();
};

