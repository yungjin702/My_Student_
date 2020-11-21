#include "BlackJack.h"

//생성자 함수로 카드 생성
 Card::Card()
{
	 int i = 0;
	 int j = 0;

	 for (i = 0; i < 4; i++)
	 {
		 for (j = 0; j < 13; j++)
		 {
			 number.push_back(j + 1);
			 patten.push_back(i + 1);
		 }
	 }

}

 //카드 클래스에서 카드 1장 가져오고 카드 클래스에서 가져간 카드를 없애는 함수 (사용자)
void Players::CardDraw( Card *card )
{
	this->mydect.push_back(card->number.back());
	card->number.pop_back();
	this->mypatten.push_back(card->patten.back());
	card->patten.pop_back();
}

 //카드 클래스에서 카드 1장 가져오고 카드 클래스에서 가져간 카드를 없애는 함수 (AI)
void AI::CardDraw(Card *card)
{
	this->mydect.push_back(card->number.back());
	card->number.pop_back();
	this->mypatten.push_back(card->patten.back());
	card->patten.pop_back();
}

 //가지고 있는 카드를 출력하는 함수 (사용자)
 void Players::ShowCard()
 {
	 CustomGraphic(40 + cardloc, 20, 10, 8);

	 gotoxy(30, 21);

	 gotoxy(42 + cardloc , 21);

	 //자신이 뽑은 카드의 번호가 1번이면 A를 출력
	 if (mydect[loc] == 1)
	 {
		 cout << "A";
	 }

	 //자신이 뽑은 카드의 번호가 2 ~ 10번이면 2 ~ 10을 출력
	 if (mydect[loc] > 1 && mydect[loc] < 11)
	 {
		 cout << mydect[loc];
	 }

	 //자신이 뽑은 카드의 번호가 11 ~ 13이면 J, Q, K을 출력
	 else if (mydect[loc] >= 11 && mydect[loc] <= 13)
	 {
		 switch (mydect[loc])
		 {
		 case 11:
			 cout << "J";
			 break;

		 case 12:
			 cout << "Q";
			 break;

		 case 13:
			 cout << "K";
			 break;
		 }
	 }
		
	 gotoxy(42 + cardloc, 22);

	 //자신이 뽑은 카드의 무늬의 번호를 받음
	 switch (mypatten[loc])
	 {
	 case 1: // 번호가 1번이면
		 cout << "♣";
		 break;
		 
	 case 2: //번호가 2번이면
		 cout << "◆";
		 break;

	 case 3: //번호가 3번이면
		 cout << "♥";
		 break;

	 case 4: //번호가 4번이면
		 cout << "♠";
		 break;
	 }

	 //위치와 카드를 출력하는 위치를 이동
	 ++loc;
	 cardloc += 4;
	
 }

 //가지고 있는 카드를 출력하는 함수 (AI)
 void AI::ShowCard()
 {
	 CustomGraphic(40 + cardloc, 1, 10, 8);

	 gotoxy(42 + cardloc, 2);

	 if (mydect[loc] == 1)
	 {
		 cout << "A";
	 }

	 if (mydect[loc] > 1 && mydect[loc] < 11)
	 {
		 cout << mydect[loc];
	 }

	 else
	 {
		 switch (mydect[loc])
		 {
		 case 11:
			 cout << "J";
			 break;

		 case 12:
			 cout << "Q";
			 break;

		 case 13:
			 cout << "K";
			 break;
		 }
	 }

	 gotoxy(42 + cardloc, 3);

	 switch (mypatten[loc])
	 {
	 case 1:
		 cout << "♣";
		 break;

	 case 2:
		 cout << "◆";
		 break;

	 case 3:
		 cout << "♥";
		 break;

	 case 4:
		 cout << "♠";
		 break;
	 }

	 ++loc;
	 cardloc += 4;
 }

 // 가지고 있는 카드의 총합을 리턴하는 함수 (사용자)
 int Players::ScoreChack()
 {
	 int temp = 0;
	 int i = 0;

	 //자신이 가진 카드의 점수를 temp 에 저장
	 for (i = 0; i < mydect.size(); i++)
	 {
		 // 가지고 있는 카드가 A라면
		 if (mydect.at(i) == 1)
		 {
			 //지금 점수 + A가 11점으로 사용될 때 점수 > 21을 넘기면 1점으로 계산
			 if (temp + 11 > 21)
			 {
				 temp += 1;
			 }
			 //그렇지 않으면 11로 계산
			 else
			 {
				 temp += 11;
			 }
		 
		 // 2 ~ 10 카드라면 2 ~ 10으로 계산
		 }
		 else if (mydect.at(i) > 1 && mydect.at(i) < 11)
		 {
			 temp += mydect.at(i);
		 }
		 // J, Q, K도 10으로 계산
		 else
		 {
			 temp += 10;
		 }
		
	 }

	 //카드의 합계를 반환
	 return temp;
	 
 }

 // 가지고 있는 카드의 총합을 리턴하는 함수 (AI)
 int AI::ScoreChack()
 {
	 int temp = 0;
	 int i = 0;

	 for (i = 0; i < mydect.size(); i++)
	 {
		 if (mydect.at(i) == 1)
		 {
			 if (temp + 11 > 21)
			 {
				 temp += 1;
			 }
			 else
			 {
				 temp += 11;
			 }
		 }
		 else if (mydect.at(i) > 1 && mydect.at(i) < 11)
		 {
			 temp += mydect.at(i);
		 }
		 else
		 {
			 temp += 10;
		 }

	 }

	 return temp;

 }

 //AI가 카드를 몇 개 가지고 있는지 반환하는 함수
 int AI::DectSize()
 {
	 return mydect.size();
 }






