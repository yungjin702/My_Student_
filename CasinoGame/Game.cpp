#define _CRT_SECURE_NO_WARNINGS

#include "BlackJack.h"
#include "Circle.h"
#include "PlayersInfo.h"
#include "GamesInfo.h"

using namespace std;

void Menu( PlayersInfo );

void GameSelect( PlayersInfo );

void CircleRace(PlayersInfo);

void BlackJack(PlayersInfo);

void PlayerInfo( PlayersInfo );

void GameInfo( PlayersInfo );

void Ending( PlayersInfo );

void BadEnding();

//���α׷��� ����
int main()
{
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.dwSize = 1;
	cursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);

	PlayersInfo PInfo;

	Menu( PInfo );

	return 0;
}

//������� �Է¿� ���� �׿� �´� �Լ��� �̵���Ű�� �޴� �Լ�
void Menu( PlayersInfo Player )
{
	//������ �ִ� ���� 0���̶�� ��忣�� �Լ� ����
	if (Player.money == 0)
	{
		BadEnding();
	}

	//������� �Է��� �޴� ����
	int select = 0;

	//�׵θ� ȭ�� ���
	ScreenGraphic();

	//�޴� ���
	gotoxy(47, 11);
	cout << "1. ���Ӽ���";
	gotoxy(47, 13);
	cout << "2. �÷��̾� ���� Ȯ���ϱ�";
	gotoxy(47, 15);
	cout << "3. ���� ����";
	gotoxy(47, 17);
	cout << "4. �ҷ�����";
	gotoxy(47, 19);
	cout << "5. ����";

	//���� 100���� �̻��̸� ���� ���
	if (Player.money >= 1000000)
	{
		gotoxy(47, 21);
		cout << "6. ����";
	}

	//������� �Է��� select�� ����
	select = _getch();

	//100���� �̻��̸� ���� �Լ��� ���
	if (Player.money >= 1000000)
	{
		switch (select)
		{
		case 49:
			system("cls");
			GameSelect(Player);
			break;

		case 50:
			system("cls");
			PlayerInfo(Player);
			break;

		case 51:
			system("cls");
			GameInfo(Player);
			break;

		case 52:
			system("cls");
			Player.Loading();
			break;

		case 53:
			system("cls");
			exit(0);
			break;

		case 54:
			system("cls");
			Ending( Player );
			break;

		default:
			Menu(Player);
			break;
		}

	}

	//�װ� �ƴϸ� ���� �Լ��� ȣ�� �Ұ�
	else
	{
		switch (select)
		{
		case 49: // 49 == Ű���� 1��
			system("cls");
			GameSelect(Player);
			break;

		case 50: // 50 == Ű���� 2��
			system("cls");
			PlayerInfo(Player);
			break;

		case 51: // 51 == Ű���� 3��
			system("cls");
			GameInfo(Player);
			break;

		case 52: // 52 == Ű���� 4��
			system("cls");
			Player.Loading();
			Menu(Player);
			break;

		case 53: // 53 == Ű���� 5��
			system("cls");
			exit(0);
			break;

		default: //�ٸ� �Է��� ����
			Menu(Player);
			break;
		}
	}
}

//���ӽ����� ������ ����Ǵ� �Լ� ( ������ �����ϴ� �Լ� )
void GameSelect( PlayersInfo Player )
{
	//���� ������� ���� 0���̶�� ��忣�� �Լ� ����
	if (Player.money == 0 )
	{
		system("cls");
		BadEnding();
	}

	ScreenGraphic();

	CustomGraphic(46, 9, 20, 2);
	gotoxy(48, 10);
	cout << "��: " << Player.money;

	CustomGraphic(40, 12, 15, 2);
	gotoxy(42, 13);
	cout << "1. �� ���̽�";

	CustomGraphic(58, 12, 15, 2);
	gotoxy(62, 13);
	cout << "2. ����";

	CustomGraphic(38, 16, 37, 2);
	gotoxy(40, 17);
	cout << "�������� ���ư����� ESC�� ��������";

	int selcet = 0;

	selcet = _getch();

	//����ڰ� ��� ��ư�� ���������� ���� �ٸ� ������ ���� OR ���θ޴���
	switch (selcet)
	{
	case 27: // 27 == Ű���� ESCŰ
		system("cls");
		Menu(Player);
		break;

	case 49: // 49 == Ű���� 1��
		system("cls");
		CircleRace(Player);
		break;

	case 50: // 50 == Ű���� 2��
		system("cls");
		BlackJack(Player);
		break;

	default: // ������Ű���� ����
		GameSelect(Player);
	}

}

//���ӿ� ���� ������ ����ϴ� �Լ�
void GameInfo( PlayersInfo Player )
{
	//���� ������ ���� Ŭ���� �迭 ����
	GamesInfo Game[2] = { {"�� ���̽�" , "Game\\CircleRace.txt" , 2},
						  { "����" , "Game\\BlackJack.txt" , 4 } };

	//��ġ�� ��Ÿ�� ���� ����
	int order = 0;

	//1��° ��ġ�� ���� ���� ���
	Game[order].InfoGame();
	gotoxy(70, 27);
	cout << "�������� ���ư����� ESC�� ��������";

	int input = 0;

	// ESC Ű�� ������ ���θ޴��� ������.
	while (input != 27)
	{
		input = _getch();

		// Ű���� ���� Ű�� ������ ���� ���� ������ ���
		if (input == 75)
		{
			//���� ��ġ�� ù �������̸� �ƹ� �ൿ�� ����
			if (order == 0)
			{

			}
			//ù �������� �ƴϸ� ���� �������� �ѱ�
			else
			{
				system("cls");
				--order;
				Game[order].InfoGame();
				gotoxy(70, 27);
				cout << "�������� ���ư����� ESC�� ��������";
			} 
		}

		// Ű���� ������ Ű�� ������ ������ ���� ������ ���
		if (input == 77)
		{
			//���� ��ġ�� ������ ��������� �ƹ� �ൿ ����
			if (order == 1)
			{

			}
			//������ �������� �ƴϸ� ���� �������� �ѱ�
			else
			{
				system("cls");
				++order;
				Game[order].InfoGame();
				gotoxy(70, 27);
				cout << "�������� ���ư����� ESC�� ��������";
			}
		}
	}

	system("cls");
	Menu( Player );
}

// ������� ������ ����ϴ� �Լ�
void PlayerInfo(PlayersInfo Player)
{
	ScreenGraphic();
	CustomGraphic(40, 11, 38, 9);

	// ������� ���� ���
	Player.PlayerInfo();
	gotoxy(43, 10);
	cout << "�������� ���ư����� ESC�� ��������";

	int select = 0;

	//ESC Ű�� ������ ���θ޴��� �̵�
	while (select != 27)
	{
		select = _getch();
	}
	system("cls");
	Menu(Player);
}

// ����ڰ� ������ �ִ� ���� 100���� �̻��̸� �� �� �ִ� ª�� ���� �Լ�
void Ending( PlayersInfo Player )
{
	ScreenGraphic();

	// Ending.txt ������ �޾ƿ´�.
	FILE *file = _wfopen(L"Ending\\Ending.txt", L"r+");

	// �ѱ� �ؽ�Ʈ�� ���� wchar ���� ����
	wchar_t script[60] = { 0 };

	// ������ ���� ������ �ʴ� �ٸ� ���� ���� �� ���� �� �پ� ���
	while (!feof(file))
	{
		ScreenGraphic();
		CustomGraphic(9, 13, 100, 14);
		int select = 0;
		fgetws(script, 60, file);
		gotoxy(20, 17);
		wprintf(L"%s", script);

		gotoxy(80, 24);
		cout << "Enter�� ��������....";

		//Ű���� Enter Ű�� ������ ���� �ؽ�Ʈ�� ���
		while (select != 13)
		{
			select = _getch();
		}
		system("cls");
	}

	Menu(Player);
}


// ����ڰ� ������ �ִ� ���� 0���̶�� ����Ǵ� �Լ�
void BadEnding()
{
	ScreenGraphic();

	// BadEnding.txt ������ �޾ƿ´�.
	FILE *file = _wfopen(L"Ending\\BadEnding.txt", L"r+");

	// �ѱ� �ؽ�Ʈ�� ���� wchar ���� ����
	wchar_t script[60] = { 0 };

	// ������ ���� ������ �ʴ� �ٸ� ���� ���� �� ���� �� �پ� ���
	while (!feof(file))
	{
		ScreenGraphic();
		CustomGraphic(9, 13, 100, 14);
		int select = 0;
		fgetws(script, 60, file);
		gotoxy(20, 17);
		wprintf(L"%s", script);

		gotoxy(80, 24);
		cout << "Enter�� ��������....";

		//Ű���� Enter Ű�� ������ ���� �ؽ�Ʈ�� ���
		while (select != 13)
		{
			select = _getch();
		}
		system("cls");
	}

	exit(0);
}


// �� ���̽� ���� �Լ�
void CircleRace(PlayersInfo Player)
{
	// ���� �Լ��� ����ϱ� ���� �õ� �� ����
	srand(time(NULL));

	// 2���� �� Ŭ���� ����
	Circle c1;
	Circles c2;

	// 2���� Ŭ������ x, y, r �Է�
	c1.init(100, 140, 50);
	c2.init(100, 330, 50);

	//� ���� �� ��, �󸶳� ������ ���� ������ ���� ����
	int choice = 0;
	int batting = 0;

	//����� ��ġ�� ������ ���� ����
	int goal = 760;

	//���� �ܰ� ( �� )
	ScreenGraphic();
	gotoxy(35, 10);
	cout << "1, 2�� ���� ����� ������ �����Ͻ� �̴ϱ�?: ";
	cin >> choice;
	while (choice > 2 || choice <= 0)
	{
		gotoxy(35, 10);
		cout << "                                                 ";
		gotoxy(35, 10);
		cout << "�߸� �Է��ϼ̽��ϴ�. �ٽ� �������ּ���: ";
		gotoxy(59, 10);
		cout << "           ";
		gotoxy(59, 10);
		cin >> choice;
	}

	//���� �ܰ� ( ���� )
	gotoxy(35, 12);
	cout << "������ �� �׼��� �Է��ϼ���: ";
	cin >> batting;

	while (batting > Player.money || batting == 0 || batting % 500 != 0)
	{
		// ������ �ݾ��� ������ �ִ� ������ ���ٸ� ���
		if (batting > Player.money)
		{
			gotoxy(35, 11);
			cout << "                                                         ";
			gotoxy(40, 12);
			cout << "                                                         ";
			gotoxy(40, 12);
			cout << "������ �ݾ��� ������ �ִ� ������ �����ϴ�";
			gotoxy(44, 14);
			cout << "�ٽ� �Է��ϼ���: ";
			gotoxy(61, 14);
			cout << "                                ";
			gotoxy(61, 14);
			cin >> batting;
		}

		// ������ �ݾ��� 0���̸� ���
		else if (batting == 0)
		{
			gotoxy(35, 11);
			cout << "                                                         ";
			gotoxy(40, 12);
			cout << "                                                         ";
			gotoxy(42, 12);
			cout << "0���� �Է��� �� ���� �ݾ��Դϴ�";
			gotoxy(44, 14);
			cout << "�ٽ� �Է��ϼ���: ";
			gotoxy(61, 14);
			cout << "                                ";
			gotoxy(61, 14);
			cin >> batting;
		}

		// ������ �ݾ��� 500�� ������ �ƴϸ� ���
		else if (batting % 500 != 0)
		{
			gotoxy(35, 11);
			cout << "                                                         ";
			gotoxy(35, 12);
			cout << "                                                         ";
			gotoxy(42, 12);
			cout << "�ּ� ����, ������ 500���Դϴ�.";
			gotoxy(44, 14);
			cout << "�ٽ� �Է��ϼ���: ";
			gotoxy(61, 14);
			cout << "                                ";
			gotoxy(61, 14);
			cin >> batting;
		}

	}

	//ȭ�� ����
	system("cls");
	ScreenGraphic();

	for (int i = 0; i < 20; i++)
	{
		gotoxy(100, 3 + i);
		printf("|");
	}

	Sleep(2000);

	c1.draw();
	c2.draw();

	// 1��° �� , 2��° ���� x���� ���� ���� ������ ������ �ݺ�
	while ( c1.XChack() < goal &&  c2.XChack() < goal )
	{
		c1.move();
		c2.move();

		c1.draw();
		c2.draw();

		Sleep(1000);
	}

	// ���ְ� ������ �̰����, �������� ���
	CustomGraphic(40, 24, 40, 4);
	if (choice == 1 && c1.XChack() > goal && c2.XChack() < goal)
	{
		gotoxy(43, 25);
		cout << "����� 1�� ���� �����Ͽ� �̰���ϴ�!" << endl;

		CustomGraphic(84, 25, 30, 2);
		gotoxy(86, 26);
		cout << "+" << (batting * 0.5);

		Player.CircleWinCount();
		Player.GetMoney(batting);

	}

	else if (choice == 1 && c1.XChack() < goal && c2.XChack() > goal)
	{
		gotoxy(43, 25);
		cout << "����� 1�� ���� �����Ͽ� �����ϴ�!" << endl;

		CustomGraphic(84, 25, 30, 2);
		gotoxy(86, 26);
		cout << "-" << batting;

		Player.CircleLoseCount();
		Player.LoseMoney(batting);
	}

	else if (choice == 2 && c1.XChack() < goal && c2.XChack() > goal)
	{
		gotoxy(43, 25);
		cout << "����� 2�� ���� �����Ͽ� �̰���ϴ�!" << endl;

		CustomGraphic(84, 25, 30, 2);
		gotoxy(86, 26);
		cout << "+" << (batting * 0.5);

		Player.CircleWinCount();
		Player.GetMoney(batting);
	}

	else if (choice == 2 && c1.XChack() > goal && c2.XChack() < goal)
	{
		gotoxy(43, 25);
		cout << "����� 2�� ���� �����Ͽ� �����ϴ�!" << endl;

		CustomGraphic(84, 25, 30, 2);
		gotoxy(86, 26);
		cout << "-" << batting;

		Player.CircleLoseCount();
		Player.LoseMoney(batting);
	}

	else
	{
		gotoxy(53, 25);
		cout << "���º� �Դϴ�";
	}

	gotoxy(42, 27);
	cout << "���Ӽ���â���� ������ Enter�� ��������";

	// Enter Ű�� ������ ���� ���� â���� �̵�
	while (_getch() != 13)
	{

	}

	system("cls");
	Player.Save();
	GameSelect(Player);
}

void BlackJack(PlayersInfo Player)
{
	//ī��, �����, AI�� ������ ���� Ŭ���� ���� �Ҵ�
	Card *card = new Card;
	Players *player = new Players;
	AI *ai = new AI;

	// ������ �ݾ�, ������� �Է��� ���� ���� ����
	int batting = 0;
	int input = 0;

	//AI ī���� ��ġ�� ������ ���� ����
	int loc = 4;

	//ī�带 ���� ���� �õ� �� ����
	srand(time(NULL));

	//���� �ܰ� ( ���� )
	ScreenGraphic();

	gotoxy(40, 11);
	cout << "������ �� �׼��� �Է��ϼ���: ";
	cin >> batting;

	while (batting > Player.money || batting == 0 || batting % 500 != 0)
	{
		// ������ �ݾ��� ������ �ִ� ������ ���ٸ� ���
		if (batting > Player.money)
		{
			gotoxy(35, 11);
			cout << "                                                         ";
			gotoxy(40, 12);
			cout << "                                                         ";
			gotoxy(40, 12);
			cout << "������ �ݾ��� ������ �ִ� ������ �����ϴ�";
			gotoxy(44, 14);
			cout << "�ٽ� �Է��ϼ���: ";
			gotoxy(61, 14);
			cout << "                                ";
			gotoxy(61, 14);
			cin >> batting;
		}

		// ������ �ݾ��� 0���̸� ���
		else if (batting == 0)
		{
			gotoxy(35, 11);
			cout << "                                                         ";
			gotoxy(40, 12);
			cout << "                                                         ";
			gotoxy(42, 12);
			cout << "0���� �Է��� �� ���� �ݾ��Դϴ�";
			gotoxy(44, 14);
			cout << "�ٽ� �Է��ϼ���: ";
			gotoxy(61, 14);
			cout << "                                ";
			gotoxy(61, 14);
			cin >> batting;
		}

		// ������ �ݾ��� 500�� ������ �ƴϸ� ���
		else if (batting % 500 != 0)
		{
			gotoxy(35, 11);
			cout << "                                                         ";
			gotoxy(35, 12);
			cout << "                                                         ";
			gotoxy(42, 12);
			cout << "�ּ� ����, ������ 500���Դϴ�.";
			gotoxy(44, 14);
			cout << "�ٽ� �Է��ϼ���: ";
			gotoxy(61, 14);
			cout << "                                ";
			gotoxy(61, 14);
			cin >> batting;
		}

	}

	//ȭ�� ���ù� ī�� ����
	system("cls");

	ScreenGraphic();

	random_shuffle(card->number.begin(), card->number.end());
	random_shuffle(card->patten.begin(), card->patten.end());

	//�����, AI���� 2�徿 ī�带 �ش�
	player->CardDraw(card);
	player->CardDraw(card);

	ai->CardDraw(card);
	ai->CardDraw(card);
	
	// 1�� �������� �����, AI ī�带 ����Ѵ� ( aiī��� 1�常 ����Ѵ� )
	player->ShowCard();
	Sleep(1000);
	ai->ShowCard();
	Sleep(1000);
	player->ShowCard();
	Sleep(1000);

	//AI ī�� 1���� �޸����� ���
	CustomGraphic(44, 1, 10, 8);
	Sleep(1000);

	// ����ڰ� ���� �� ����( A ī��� 10�� ī�� )�� ������ �ٷ� �¸� 
	if ( player->ScoreChack() == 21)
	{
		CustomGraphic(42, 13, 30, 2);
		gotoxy(45, 14);
		cout << "����! ����� �̰���ϴ�! ";

		CustomGraphic(82, 14, 28, 2);
		gotoxy(84, 15);
		cout << "+" << (batting * 0.5);

		Player.GetMoney(batting);
		Player.BlackWinCount();

		CustomGraphic(40, 16, 40, 2);
		gotoxy(42, 17);
		cout << "���Ӽ���â���� ������ Enter�� ��������";

		while (_getch() != 13)
		{

		}

		system("cls");
		Player.Save();
		GameSelect(Player);
	}

	// AI�� ���� �� ����( A ī��� 10�� ī�� )�� ������ �ٷ� �¸� 
	if (ai->ScoreChack() == 21)
	{
		ai->ShowCard();

		CustomGraphic(42, 13, 30, 2);
		gotoxy(48, 14);
		cout << "����! AI�� �̰���ϴ�! ";

		CustomGraphic(82, 14, 28, 2);
		gotoxy(84, 15);
		cout << "-" << batting;

		Player.LoseMoney(batting);
		Player.BlackLoseCount();

		CustomGraphic(40, 16, 40, 2);
		gotoxy(42, 17);
		cout << "���Ӽ���â���� ������ Enter�� ��������";

		while (_getch() != 13)
		{

		}

		system("cls");
		Player.Save();
		GameSelect(Player);
	}

	//�ؾ��� Ȯ�������� �� �� �����̸� �� �� �¸�
	if (player->ScoreChack() == 21 && ai->ScoreChack() == 21)
	{
		Eraser(40, 13, 34, 3);
		CustomGraphic(46, 13, 28, 2);
		gotoxy(49, 14);
		cout << "����! �Ѵ� �¸��Դϴ�! ";

		CustomGraphic(40, 16, 40, 2);
		gotoxy(42, 17);
		cout << "���Ӽ���â���� ������ Enter�� ��������";

		while (_getch() != 13)
		{

		}

		system("cls");
		Player.Save();
		GameSelect(Player);
	}

	// ������ �ִ� ī���� ���� 21�� ���� ���� �� ���� ����
	while (!(player->ScoreChack() > 21) && player->ScoreChack() > 0)
	{
		//�Է��� Ű�� �ʱ�ȭ
		input = 0;

		//ī�带 �� ���� �� ����ڿ��� ���
		CustomGraphic(40, 13, 34, 2);
		gotoxy(43, 14);
		cout << "ī�带 �� �����ðڽ��ϱ�? Y/N";

		// Y, N Ű�� �Է��� �� ���� ��� �ݺ�
		while (input != 89 && input != 121 && input != 78 && input != 110)
		{
			input = _getch();
		}
		
		// YŰ�� ������ 1�� �� �̰� AI�� ������ �ִ� ī���� ���� + 10�� 21�� �ѱ��� �ʴ´ٸ� 1�� �̱�
		if (input == 89 || input == 121 )
		{
			player->CardDraw(card);
			player->ShowCard();

			Sleep(1000);

			if (ai->ScoreChack() + 10 <= 21)
			{
				ai->CardDraw(card);
				CustomGraphic(44 + loc, 1, 10, 8);
				loc += 4;
			}
		}

		// NŰ�� ������ ��� â ���
		else
		{
			//AI�� ������ �ִ� ī���� ���� + 10�� �ѱ��� ���� �� ���� ī�� �̱�
			while (ai->ScoreChack() + 10 <= 21)
			{
				ai->CardDraw(card);

				//1�ʾ� �޸����� ���
				CustomGraphic(44 + loc, 1, 10, 8);
				loc += 4;

				Sleep(1000);
			}
			
			//
			for (int i = 0; i < ai->DectSize() - 1; i++)
			{
				//1�ʾ� AI�� ī�带 ���
				ai->ShowCard();

				Sleep(1000);
			}

			// ī���� ������ ����ڰ� 21�� ������ �¸�
			if (player->ScoreChack() > ai->ScoreChack())
			{
				Eraser(40, 13, 34, 3);
				CustomGraphic(48, 13, 22, 2);
				gotoxy(51, 14);
				cout << "����� �̰���ϴ�! ";

				CustomGraphic(82, 14, 28, 2);
				gotoxy(84, 15);
				cout << "+" << (batting * 0.5);

				Player.GetMoney(batting);
				Player.BlackWinCount();

				CustomGraphic(40, 16, 40, 2);
				gotoxy(42, 17);
				cout << "���Ӽ���â���� ������ Enter�� ��������";

				while (_getch() != 13)
				{

				}

				system("cls");
				Player.Save();
				GameSelect(Player);

			}

			// ī���� ������ AI�� 21�� ������ �¸�
			else if( player->ScoreChack() < ai->ScoreChack())
			{
				Eraser(40, 13, 34, 3);
				CustomGraphic(49, 13, 20, 2);
				gotoxy(52, 14);
				cout << "����� �����ϴ�! ";

				CustomGraphic(82, 14, 28, 2);
				gotoxy(84, 15);
				cout << "-" << batting;

				Player.LoseMoney(batting);
				Player.BlackLoseCount();

				CustomGraphic(40, 16, 40, 2);
				gotoxy(42, 17);
				cout << "���Ӽ���â���� ������ Enter�� ��������";

				while (_getch() != 13)
				{

				}

				system("cls");
				Player.Save();
				GameSelect(Player);
			}

			// ī���� ������ �� �� �Ȱ����� ���º�
			else if (player->ScoreChack() == ai->ScoreChack())
			{
				Eraser(40, 13, 34, 3);
				CustomGraphic(49, 13, 20, 2);
				gotoxy(52, 14);
				cout << " ���º� �Դϴ�  ";

				CustomGraphic(40, 16, 40, 2);
				gotoxy(42, 17);
				cout << "���Ӽ���â���� ������ Enter�� ��������";

				while (_getch() != 13)
				{

				}

				system("cls");
				Player.Save();
				GameSelect(Player);
			}
		}
	}

	//����ڰ� ī�带 �̾Ҵµ� 21�� �ѱ�� �й�
	Eraser(40, 13, 34, 3);
	CustomGraphic(40, 13, 40, 2);
	gotoxy(44, 14);
	cout << "21�� �ѱ�̽��ϴ�. ����� �����ϴ�";

	CustomGraphic(82, 14, 28, 2);
	gotoxy(84, 15);
	cout << "-" << batting;

	Player.LoseMoney(batting);
	Player.BlackLoseCount();

	CustomGraphic(40, 16, 40, 2);
	gotoxy(42, 17);
	cout << "���Ӽ���â���� ������ Enter�� ��������";

	//Enter Ű�� ������ ���� ���� â���� �̵�
	while (_getch() != 13)
	{

	}

	system("cls");

	delete card;
	delete player;
	delete ai;
	
	Player.Save();
	GameSelect(Player);
}
 


