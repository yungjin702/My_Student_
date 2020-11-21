#pragma once
#include "Screen.h"
#include <stdlib.h>
#include <time.h>

class Monster
{
protected:

	//������ �̸�
	string name;

	//������ ���
	string shape;

	//������ ��ġ / ���� ������ �� / ���� ������
	int x, y, nItem, nEnergy;

	//�ڽ��� ���� �������� ��ġ ��ǥ
	int itemX, itemY;

public:
	//���� ������ ���� ������ �Լ�
	Monster(int x, int y, string name, string shape) :x{ x }, y{ y }, name{ name }, shape{ shape }, nItem{ 0 }, nEnergy{ 100 }, itemX{ rand() % (Xmax - 1) }, itemY{ rand() % (Ymax - 1) } {}

	//���͸� �����̴� �Լ�
	void move(Screen &screen);

	//���Ͱ� ������ �� �ִ� �� Ȯ���ϰ� �ٲٴ� �Լ�
	void canMove(int &xmove, int &ymove, Screen &screen);

	//���͸� ȭ���� ����ϴ� �Լ�
	void draw(Screen &screen) { screen.draw(x, y, shape); }

	//�ڽ��� ���� �������� ��ǥ�� �����ϴ� �Լ�
	void setItem(Screen &screen);

	//���Ͱ� �̵��ϴ� ��ġ�� �������� ������ �������� �Դ� �Լ�
	void getItem(Screen &screen);

	//���Ͱ� �̵��ϴ� ��ġ�� �������� �ִ��� Ȯ���ϴ� �Լ�
	bool isItem(Screen &screen);

	//���� X��ǥ�� ��ȯ�ϴ� �Լ�
	int getX() { return x; }

	//���� Y��ǥ�� ��ȯ�ϴ� �Լ�
	int getY() { return y; }

	//���� �������� ��ȯ�ϴ� �Լ�
	int getEnergy() { return nEnergy; }

	//������ ���¸� ��Ÿ���� �Լ�
	void print(){ cout << name << shape << " [" << nEnergy << "]" << " : " << nItem; }
};



