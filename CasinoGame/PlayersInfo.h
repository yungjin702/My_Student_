#pragma once

#include "all.h"

using namespace std;

//���� ��ü�� ����� ������ ���� Ŭ����
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


