#include "Circle.h"

//���� ���� ��ġ + ���� ���̸� �����ϴ� �Լ�
void Circle::init(int xval, int yval, int r)
{
	x = xval;
	y = yval;
	radius = r;
}

//cmdâ���� ���� ������ִ� �Լ� ( ������ )
void Circle::draw()
{
	HDC hdc = GetWindowDC(GetForegroundWindow());
	HBRUSH myBrush = (HBRUSH)CreateSolidBrush(RGB(255, 0, 0));

	HBRUSH oldBrush = (HBRUSH)SelectObject(hdc, myBrush);
	Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
}

//x�� �������� �����ϰ� �����̰� �ϴ� �Լ�
void Circle::move()
{
	x += rand() % 50;
}

//���� ���� ��ġ�� ������� Ȯ���ϴ� �Լ�
int Circle::XChack()
{
	return x;
}

//���� �׸��� �Լ� ( �ʷϻ� )
void Circles::draw()
{
	HDC hdc = GetWindowDC(GetForegroundWindow());
	HBRUSH myBrush = (HBRUSH)CreateSolidBrush(RGB(0, 255, 0));

	HBRUSH oldBrush = (HBRUSH)SelectObject(hdc, myBrush);
	Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
}