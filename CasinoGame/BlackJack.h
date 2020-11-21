#pragma once

#include "all.h"

using namespace std;

//블랙잭에서 카드 더미의 역할을 하는 클래스
class Card
{
private:
	
public:
	vector<int> number;
	vector<char> patten;

	Card();
};

//블랙잭에서 사용자의 정보를 담을 클래스
class Players 
{
private:
	vector<int> mydect;
	vector<char> mypatten;

	int loc = 0;
	int cardloc = 0;

public:
	void CardDraw( Card *card );
	void ShowCard();
	int ScoreChack();
};

//블랙잭에서 AI의 정보를 담을 클래스
class AI
{
private:
	vector<int> mydect;
	vector<char> mypatten;

	int loc = 0;
	int cardloc = 0;

public:
	void CardDraw( Card *card);
	void ShowCard();
	int ScoreChack();
	int DectSize();
};



