#pragma once

#include "all.h"

using namespace std;

//원 레이싱에 사용할 원 클래스
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

//색깔을 다르게 한 원 클래스
class Circles : public Circle
{
public:
	virtual void draw();
};




