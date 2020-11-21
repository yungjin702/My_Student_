#include "MonsterWorld.h"

using namespace std;

int main()
{
	//난수 초기화
	srand(time(NULL));

	//커서 없애기
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.dwSize = 1;
	cursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);

	//월드 생성 및 몬스터 생성
	MonsterWorld main;
	VariousMonster m(rand() & (Xmax - 1), rand() % (Ymax - 1), "강시", "★");
	VariousMonster m1(rand() & (Xmax - 1), rand() % (Ymax - 1), "귀신", "☆");
	VariousMonster m2(rand() & (Xmax - 1), rand() % (Ymax - 1), "정령", "◇");
	//VariousMonster m3(rand() & (Xmax - 1), rand() % (Ymax - 1), "유신몬", "＠");

	//몬스터를 월드에 넣기
	main.add(m);
	main.add(m1);
	main.add(m2);
	//main.add(m3);

	//몬스터 월드 실행
	main.play(1, 500);

	system("pause");

	return 0;
}