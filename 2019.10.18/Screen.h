#pragma once
#include <iostream>
#include <string>
#include <Windows.h>

#define Xmax 20
#define Ymax 20

using namespace std;

class Screen
{
	//�� �迭
	string map[Xmax][Ymax];
public:
	//�� �غ� �� �ʱ�ȭ
	Screen();

	//���͵��� ����ϱ� ���� �⺻ �Լ�
	void draw(int x, int y, string val);

	//ȭ�鿡�� ����ϴ� ��ġ�� �ٲٴ� �Լ�
	void gotoxy(int x, int y);

	//( x , y ) ��ġ�� �������� �����
	void clear(int x, int y);

	//�� ���� ������ ����� �Լ�
	void eraser(int y);

	//x, y ��ġ�� (height) * (width) ũ���� �簢�� ����ϴ� �Լ�
	void CustomGraphic(int x, int y, int height, int width);

	//���� ���� ������ �ִ��� Ȯ���ϴ� �Լ�
	string nowThis(int x, int y);

};

