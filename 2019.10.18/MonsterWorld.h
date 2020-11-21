#pragma once
#include "VariousMonster.h"
#include "Screen.h"
#include <vector>

using namespace std;

class MonsterWorld
{
	//몬스터들을 담을 변수
	vector<VariousMonster>monsters;

	//메인 화면 및 맵
	Screen mainMap;

	//지금 남아있는 아이템과 진행한 턴 수
	int nowItem, nTurn;

	//지금 몬스터 월드에 유신몬이 있는지 확인하는 함수
	bool ys;

	//남아있는 아이템이 없는지 확인하는 함수
	bool isOver() { return nowItem == 0; }

public:
	//초기화
	MonsterWorld() : nowItem{ Xmax * Ymax }, nTurn{ 0 }, ys{false} {}

	//몬스터들 추가하기
	void add(VariousMonster &monster) { monsters.push_back(monster); nowItem -= 1; }

	//몬스터 월드의 메인
	void play(int wait, int turn);

	//모든 몬스터들이 죽었는지 확인하는 함수
	bool isAllDead();
};

