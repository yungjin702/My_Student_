#include "MonsterWorld.h"

using namespace std;

int main()
{
	//���� �ʱ�ȭ
	srand(time(NULL));

	//Ŀ�� ���ֱ�
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.dwSize = 1;
	cursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);

	//���� ���� �� ���� ����
	MonsterWorld main;
	VariousMonster m(rand() & (Xmax - 1), rand() % (Ymax - 1), "����", "��");
	VariousMonster m1(rand() & (Xmax - 1), rand() % (Ymax - 1), "�ͽ�", "��");
	VariousMonster m2(rand() & (Xmax - 1), rand() % (Ymax - 1), "����", "��");
	//VariousMonster m3(rand() & (Xmax - 1), rand() % (Ymax - 1), "���Ÿ�", "��");

	//���͸� ���忡 �ֱ�
	main.add(m);
	main.add(m1);
	main.add(m2);
	//main.add(m3);

	//���� ���� ����
	main.play(1, 500);

	system("pause");

	return 0;
}