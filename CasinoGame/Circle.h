#pragma once

#include "all.h"

using namespace std;

//�� ���̽̿� ����� �� Ŭ����
class Circle
{
protected:
	int x, y, radius;

public:
	virtual void draw();
	void init(int xval, int yval, int r);
	void move();
	int XChack();
};

//������ �ٸ��� �� �� Ŭ����
class Circles : public Circle
{
public:
	virtual void draw();
};




