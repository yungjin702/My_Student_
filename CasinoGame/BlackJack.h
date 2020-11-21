#pragma once

#include "all.h"

using namespace std;

//���迡�� ī�� ������ ������ �ϴ� Ŭ����
class Card
{
private:
	
public:
	vector<int> number;
	vector<char> patten;

	Card();
};

//���迡�� ������� ������ ���� Ŭ����
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

//���迡�� AI�� ������ ���� Ŭ����
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



