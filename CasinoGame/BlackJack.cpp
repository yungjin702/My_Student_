#include "BlackJack.h"

//������ �Լ��� ī�� ����
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

 //ī�� Ŭ�������� ī�� 1�� �������� ī�� Ŭ�������� ������ ī�带 ���ִ� �Լ� (�����)
void Players::CardDraw( Card *card )
{
	this->mydect.push_back(card->number.back());
	card->number.pop_back();
	this->mypatten.push_back(card->patten.back());
	card->patten.pop_back();
}

 //ī�� Ŭ�������� ī�� 1�� �������� ī�� Ŭ�������� ������ ī�带 ���ִ� �Լ� (AI)
void AI::CardDraw(Card *card)
{
	this->mydect.push_back(card->number.back());
	card->number.pop_back();
	this->mypatten.push_back(card->patten.back());
	card->patten.pop_back();
}

 //������ �ִ� ī�带 ����ϴ� �Լ� (�����)
 void Players::ShowCard()
 {
	 CustomGraphic(40 + cardloc, 20, 10, 8);

	 gotoxy(30, 21);

	 gotoxy(42 + cardloc , 21);

	 //�ڽ��� ���� ī���� ��ȣ�� 1���̸� A�� ���
	 if (mydect[loc] == 1)
	 {
		 cout << "A";
	 }

	 //�ڽ��� ���� ī���� ��ȣ�� 2 ~ 10���̸� 2 ~ 10�� ���
	 if (mydect[loc] > 1 && mydect[loc] < 11)
	 {
		 cout << mydect[loc];
	 }

	 //�ڽ��� ���� ī���� ��ȣ�� 11 ~ 13�̸� J, Q, K�� ���
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

	 //�ڽ��� ���� ī���� ������ ��ȣ�� ����
	 switch (mypatten[loc])
	 {
	 case 1: // ��ȣ�� 1���̸�
		 cout << "��";
		 break;
		 
	 case 2: //��ȣ�� 2���̸�
		 cout << "��";
		 break;

	 case 3: //��ȣ�� 3���̸�
		 cout << "��";
		 break;

	 case 4: //��ȣ�� 4���̸�
		 cout << "��";
		 break;
	 }

	 //��ġ�� ī�带 ����ϴ� ��ġ�� �̵�
	 ++loc;
	 cardloc += 4;
	
 }

 //������ �ִ� ī�带 ����ϴ� �Լ� (AI)
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
		 cout << "��";
		 break;

	 case 2:
		 cout << "��";
		 break;

	 case 3:
		 cout << "��";
		 break;

	 case 4:
		 cout << "��";
		 break;
	 }

	 ++loc;
	 cardloc += 4;
 }

 // ������ �ִ� ī���� ������ �����ϴ� �Լ� (�����)
 int Players::ScoreChack()
 {
	 int temp = 0;
	 int i = 0;

	 //�ڽ��� ���� ī���� ������ temp �� ����
	 for (i = 0; i < mydect.size(); i++)
	 {
		 // ������ �ִ� ī�尡 A���
		 if (mydect.at(i) == 1)
		 {
			 //���� ���� + A�� 11������ ���� �� ���� > 21�� �ѱ�� 1������ ���
			 if (temp + 11 > 21)
			 {
				 temp += 1;
			 }
			 //�׷��� ������ 11�� ���
			 else
			 {
				 temp += 11;
			 }
		 
		 // 2 ~ 10 ī���� 2 ~ 10���� ���
		 }
		 else if (mydect.at(i) > 1 && mydect.at(i) < 11)
		 {
			 temp += mydect.at(i);
		 }
		 // J, Q, K�� 10���� ���
		 else
		 {
			 temp += 10;
		 }
		
	 }

	 //ī���� �հ踦 ��ȯ
	 return temp;
	 
 }

 // ������ �ִ� ī���� ������ �����ϴ� �Լ� (AI)
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

 //AI�� ī�带 �� �� ������ �ִ��� ��ȯ�ϴ� �Լ�
 int AI::DectSize()
 {
	 return mydect.size();
 }






