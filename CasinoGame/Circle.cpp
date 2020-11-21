#include "Circle.h"

//원의 시작 위치 + 원의 넓이를 저장하는 함수
void Circle::init(int xval, int yval, int r)
{
	x = xval;
	y = yval;
	radius = r;
}

//cmd창에서 원을 출력해주는 함수 ( 빨간색 )
void Circle::draw()
{
	HDC hdc = GetWindowDC(GetForegroundWindow());
	HBRUSH myBrush = (HBRUSH)CreateSolidBrush(RGB(255, 0, 0));

	HBRUSH oldBrush = (HBRUSH)SelectObject(hdc, myBrush);
	Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
}

//x축 방향으로 랜덤하게 움직이게 하는 함수
void Circle::move()
{
	x += rand() % 50;
}

//지금 원의 위치가 어디인지 확인하는 함수
int Circle::XChack()
{
	return x;
}

//원을 그리는 함수 ( 초록색 )
void Circles::draw()
{
	HDC hdc = GetWindowDC(GetForegroundWindow());
	HBRUSH myBrush = (HBRUSH)CreateSolidBrush(RGB(0, 255, 0));

	HBRUSH oldBrush = (HBRUSH)SelectObject(hdc, myBrush);
	Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
}