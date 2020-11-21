#pragma once

#include "all.h"

using namespace std;

//게임 전체의 사용자 정보를 담을 클래스
class PlayersInfo
{
private:
	
public:
	int circlewin = 0;
	int circlelose = 0;
	int blackwin = 0;
	int blacklose = 0;
	int money = 10000;

	void GetMoney(int batting);
	void LoseMoney(int batting);
	void CircleWinCount();
	void CircleLoseCount();
	void BlackWinCount();
	void BlackLoseCount();
	void Save();
	void Loading();
	void PlayerInfo();
};


