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

//프로그램의 메인
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

//사용자의 입력에 따라 그에 맞는 함수로 이동시키는 메뉴 함수
void Menu( PlayersInfo Player )
{
	//가지고 있는 돈이 0원이라면 배드엔딩 함수 실행
	if (Player.money == 0)
	{
		BadEnding();
	}

	//사용자의 입력을 받는 변수
	int select = 0;

	//테두리 화면 출력
	ScreenGraphic();

	//메뉴 출력
	gotoxy(47, 11);
	cout << "1. 게임선택";
	gotoxy(47, 13);
	cout << "2. 플레이어 정보 확인하기";
	gotoxy(47, 15);
	cout << "3. 게임 정보";
	gotoxy(47, 17);
	cout << "4. 불러오기";
	gotoxy(47, 19);
	cout << "5. 종료";

	//돈이 100만원 이상이면 엔딩 언락
	if (Player.money >= 1000000)
	{
		gotoxy(47, 21);
		cout << "6. 엔딩";
	}

	//사용자의 입력을 select에 저장
	select = _getch();

	//100만원 이상이면 엔딩 함수가 언락
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

	//그게 아니면 엔딩 함수는 호출 불가
	else
	{
		switch (select)
		{
		case 49: // 49 == 키보드 1번
			system("cls");
			GameSelect(Player);
			break;

		case 50: // 50 == 키보드 2번
			system("cls");
			PlayerInfo(Player);
			break;

		case 51: // 51 == 키보드 3번
			system("cls");
			GameInfo(Player);
			break;

		case 52: // 52 == 키보드 4번
			system("cls");
			Player.Loading();
			Menu(Player);
			break;

		case 53: // 53 == 키보드 5번
			system("cls");
			exit(0);
			break;

		default: //다른 입력은 무시
			Menu(Player);
			break;
		}
	}
}

//게임시작을 누르면 실행되는 함수 ( 개임을 선택하는 함수 )
void GameSelect( PlayersInfo Player )
{
	//만약 사용자의 돈이 0원이라면 배드엔딩 함수 실행
	if (Player.money == 0 )
	{
		system("cls");
		BadEnding();
	}

	ScreenGraphic();

	CustomGraphic(46, 9, 20, 2);
	gotoxy(48, 10);
	cout << "돈: " << Player.money;

	CustomGraphic(40, 12, 15, 2);
	gotoxy(42, 13);
	cout << "1. 원 레이싱";

	CustomGraphic(58, 12, 15, 2);
	gotoxy(62, 13);
	cout << "2. 블랙잭";

	CustomGraphic(38, 16, 37, 2);
	gotoxy(40, 17);
	cout << "메인으로 돌아가려면 ESC를 누르세요";

	int selcet = 0;

	selcet = _getch();

	//사용자가 어느 버튼을 누르는지에 따라 다른 게임을 실행 OR 메인메뉴로
	switch (selcet)
	{
	case 27: // 27 == 키보드 ESC키
		system("cls");
		Menu(Player);
		break;

	case 49: // 49 == 키보드 1번
		system("cls");
		CircleRace(Player);
		break;

	case 50: // 50 == 키보드 2번
		system("cls");
		BlackJack(Player);
		break;

	default: // 나머지키들은 무시
		GameSelect(Player);
	}

}

//게임에 대한 정보를 출력하는 함수
void GameInfo( PlayersInfo Player )
{
	//게임 정보를 담을 클래스 배열 선언
	GamesInfo Game[2] = { {"원 레이싱" , "Game\\CircleRace.txt" , 2},
						  { "블랙잭" , "Game\\BlackJack.txt" , 4 } };

	//위치를 나타낼 변수 선언
	int order = 0;

	//1번째 위치에 게임 정보 출력
	Game[order].InfoGame();
	gotoxy(70, 27);
	cout << "메인으로 돌아가려면 ESC를 누르세요";

	int input = 0;

	// ESC 키를 누르면 메인메뉴로 나간다.
	while (input != 27)
	{
		input = _getch();

		// 키보드 왼쪽 키를 누르면 왼쪽 게임 정보를 출력
		if (input == 75)
		{
			//지금 위치가 첫 페이지이면 아무 행동도 않함
			if (order == 0)
			{

			}
			//첫 페이지가 아니면 이전 페이지로 넘김
			else
			{
				system("cls");
				--order;
				Game[order].InfoGame();
				gotoxy(70, 27);
				cout << "메인으로 돌아가려면 ESC를 누르세요";
			} 
		}

		// 키보드 오른쪽 키를 누르면 오른쪽 게임 정보를 출력
		if (input == 77)
		{
			//지금 위치가 마지막 페이지라면 아무 행동 않함
			if (order == 1)
			{

			}
			//마지막 페이지가 아니면 다음 페이지로 넘김
			else
			{
				system("cls");
				++order;
				Game[order].InfoGame();
				gotoxy(70, 27);
				cout << "메인으로 돌아가려면 ESC를 누르세요";
			}
		}
	}

	system("cls");
	Menu( Player );
}

// 사용자의 정보를 출력하는 함수
void PlayerInfo(PlayersInfo Player)
{
	ScreenGraphic();
	CustomGraphic(40, 11, 38, 9);

	// 사용자의 정보 출력
	Player.PlayerInfo();
	gotoxy(43, 10);
	cout << "메인으로 돌아가려면 ESC를 누르세요";

	int select = 0;

	//ESC 키를 누르면 메인메뉴로 이동
	while (select != 27)
	{
		select = _getch();
	}
	system("cls");
	Menu(Player);
}

// 사용자가 가지고 있는 돈이 100만원 이상이면 볼 수 있는 짧은 엔딩 함수
void Ending( PlayersInfo Player )
{
	ScreenGraphic();

	// Ending.txt 파일을 받아온다.
	FILE *file = _wfopen(L"Ending\\Ending.txt", L"r+");

	// 한글 텍스트를 담을 wchar 변수 선언
	wchar_t script[60] = { 0 };

	// 문자의 끝을 만나지 않는 다면 끝을 만날 때 까지 한 줄씩 출력
	while (!feof(file))
	{
		ScreenGraphic();
		CustomGraphic(9, 13, 100, 14);
		int select = 0;
		fgetws(script, 60, file);
		gotoxy(20, 17);
		wprintf(L"%s", script);

		gotoxy(80, 24);
		cout << "Enter를 누르세요....";

		//키보드 Enter 키를 누르면 다음 텍스트를 출력
		while (select != 13)
		{
			select = _getch();
		}
		system("cls");
	}

	Menu(Player);
}


// 사용자가 가지고 있는 돈이 0원이라면 실행되는 함수
void BadEnding()
{
	ScreenGraphic();

	// BadEnding.txt 파일을 받아온다.
	FILE *file = _wfopen(L"Ending\\BadEnding.txt", L"r+");

	// 한글 텍스트를 담을 wchar 변수 선언
	wchar_t script[60] = { 0 };

	// 문자의 끝을 만나지 않는 다면 끝을 만날 때 까지 한 줄씩 출력
	while (!feof(file))
	{
		ScreenGraphic();
		CustomGraphic(9, 13, 100, 14);
		int select = 0;
		fgetws(script, 60, file);
		gotoxy(20, 17);
		wprintf(L"%s", script);

		gotoxy(80, 24);
		cout << "Enter를 누르세요....";

		//키보드 Enter 키를 누르면 다음 텍스트를 출력
		while (select != 13)
		{
			select = _getch();
		}
		system("cls");
	}

	exit(0);
}


// 원 레이싱 게임 함수
void CircleRace(PlayersInfo Player)
{
	// 랜덤 함수를 사용하기 위한 시드 값 설정
	srand(time(NULL));

	// 2개의 원 클래스 선언
	Circle c1;
	Circles c2;

	// 2개의 클래스에 x, y, r 입력
	c1.init(100, 140, 50);
	c2.init(100, 330, 50);

	//어떤 원을 고를 지, 얼마나 배팅할 지를 저장할 변수 선언
	int choice = 0;
	int batting = 0;

	//결승점 위치를 저장할 변수 선언
	int goal = 760;

	//선택 단계 ( 원 )
	ScreenGraphic();
	gotoxy(35, 10);
	cout << "1, 2번 원중 당신은 누구를 선택하실 겁니까?: ";
	cin >> choice;
	while (choice > 2 || choice <= 0)
	{
		gotoxy(35, 10);
		cout << "                                                 ";
		gotoxy(35, 10);
		cout << "잘못 입력하셨습니다. 다시 선택해주세요: ";
		gotoxy(59, 10);
		cout << "           ";
		gotoxy(59, 10);
		cin >> choice;
	}

	//선택 단계 ( 배팅 )
	gotoxy(35, 12);
	cout << "배팅할 돈 액수를 입력하세요: ";
	cin >> batting;

	while (batting > Player.money || batting == 0 || batting % 500 != 0)
	{
		// 배팅한 금액이 가지고 있는 돈보다 많다면 출력
		if (batting > Player.money)
		{
			gotoxy(35, 11);
			cout << "                                                         ";
			gotoxy(40, 12);
			cout << "                                                         ";
			gotoxy(40, 12);
			cout << "배팅한 금액이 가지고 있는 돈보다 많습니다";
			gotoxy(44, 14);
			cout << "다시 입력하세요: ";
			gotoxy(61, 14);
			cout << "                                ";
			gotoxy(61, 14);
			cin >> batting;
		}

		// 배팅한 금액이 0원이면 출력
		else if (batting == 0)
		{
			gotoxy(35, 11);
			cout << "                                                         ";
			gotoxy(40, 12);
			cout << "                                                         ";
			gotoxy(42, 12);
			cout << "0원은 입력할 수 없는 금액입니다";
			gotoxy(44, 14);
			cout << "다시 입력하세요: ";
			gotoxy(61, 14);
			cout << "                                ";
			gotoxy(61, 14);
			cin >> batting;
		}

		// 배팅한 금액이 500원 단위가 아니면 출력
		else if (batting % 500 != 0)
		{
			gotoxy(35, 11);
			cout << "                                                         ";
			gotoxy(35, 12);
			cout << "                                                         ";
			gotoxy(42, 12);
			cout << "최소 단위, 단위는 500원입니다.";
			gotoxy(44, 14);
			cout << "다시 입력하세요: ";
			gotoxy(61, 14);
			cout << "                                ";
			gotoxy(61, 14);
			cin >> batting;
		}

	}

	//화면 세팅
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

	// 1번째 원 , 2번째 원의 x축이 일정 값에 도달할 때까지 반복
	while ( c1.XChack() < goal &&  c2.XChack() < goal )
	{
		c1.move();
		c2.move();

		c1.draw();
		c2.draw();

		Sleep(1000);
	}

	// 경주가 끝나면 이겼는지, 졌는지를 출력
	CustomGraphic(40, 24, 40, 4);
	if (choice == 1 && c1.XChack() > goal && c2.XChack() < goal)
	{
		gotoxy(43, 25);
		cout << "당신은 1번 원을 선택하여 이겼습니다!" << endl;

		CustomGraphic(84, 25, 30, 2);
		gotoxy(86, 26);
		cout << "+" << (batting * 0.5);

		Player.CircleWinCount();
		Player.GetMoney(batting);

	}

	else if (choice == 1 && c1.XChack() < goal && c2.XChack() > goal)
	{
		gotoxy(43, 25);
		cout << "당신은 1번 원을 선택하여 졌습니다!" << endl;

		CustomGraphic(84, 25, 30, 2);
		gotoxy(86, 26);
		cout << "-" << batting;

		Player.CircleLoseCount();
		Player.LoseMoney(batting);
	}

	else if (choice == 2 && c1.XChack() < goal && c2.XChack() > goal)
	{
		gotoxy(43, 25);
		cout << "당신은 2번 원을 선택하여 이겼습니다!" << endl;

		CustomGraphic(84, 25, 30, 2);
		gotoxy(86, 26);
		cout << "+" << (batting * 0.5);

		Player.CircleWinCount();
		Player.GetMoney(batting);
	}

	else if (choice == 2 && c1.XChack() > goal && c2.XChack() < goal)
	{
		gotoxy(43, 25);
		cout << "당신은 2번 원을 선택하여 졌습니다!" << endl;

		CustomGraphic(84, 25, 30, 2);
		gotoxy(86, 26);
		cout << "-" << batting;

		Player.CircleLoseCount();
		Player.LoseMoney(batting);
	}

	else
	{
		gotoxy(53, 25);
		cout << "무승부 입니다";
	}

	gotoxy(42, 27);
	cout << "게임선택창으로 가려면 Enter를 누르세요";

	// Enter 키를 누르면 게임 선택 창으로 이동
	while (_getch() != 13)
	{

	}

	system("cls");
	Player.Save();
	GameSelect(Player);
}

void BlackJack(PlayersInfo Player)
{
	//카드, 사용자, AI의 정보를 담을 클래스 동적 할당
	Card *card = new Card;
	Players *player = new Players;
	AI *ai = new AI;

	// 배팅한 금액, 사용자의 입력을 담을 변수 선언
	int batting = 0;
	int input = 0;

	//AI 카드의 위치를 움직일 변수 선언
	int loc = 4;

	//카드를 섞기 위해 시드 값 설정
	srand(time(NULL));

	//선택 단계 ( 배팅 )
	ScreenGraphic();

	gotoxy(40, 11);
	cout << "배팅할 돈 액수를 입력하세요: ";
	cin >> batting;

	while (batting > Player.money || batting == 0 || batting % 500 != 0)
	{
		// 배팅한 금액이 가지고 있는 돈보다 많다면 출력
		if (batting > Player.money)
		{
			gotoxy(35, 11);
			cout << "                                                         ";
			gotoxy(40, 12);
			cout << "                                                         ";
			gotoxy(40, 12);
			cout << "배팅한 금액이 가지고 있는 돈보다 많습니다";
			gotoxy(44, 14);
			cout << "다시 입력하세요: ";
			gotoxy(61, 14);
			cout << "                                ";
			gotoxy(61, 14);
			cin >> batting;
		}

		// 배팅한 금액이 0원이면 출력
		else if (batting == 0)
		{
			gotoxy(35, 11);
			cout << "                                                         ";
			gotoxy(40, 12);
			cout << "                                                         ";
			gotoxy(42, 12);
			cout << "0원은 입력할 수 없는 금액입니다";
			gotoxy(44, 14);
			cout << "다시 입력하세요: ";
			gotoxy(61, 14);
			cout << "                                ";
			gotoxy(61, 14);
			cin >> batting;
		}

		// 배팅한 금액이 500원 단위가 아니면 출력
		else if (batting % 500 != 0)
		{
			gotoxy(35, 11);
			cout << "                                                         ";
			gotoxy(35, 12);
			cout << "                                                         ";
			gotoxy(42, 12);
			cout << "최소 단위, 단위는 500원입니다.";
			gotoxy(44, 14);
			cout << "다시 입력하세요: ";
			gotoxy(61, 14);
			cout << "                                ";
			gotoxy(61, 14);
			cin >> batting;
		}

	}

	//화면 세팅및 카드 섞기
	system("cls");

	ScreenGraphic();

	random_shuffle(card->number.begin(), card->number.end());
	random_shuffle(card->patten.begin(), card->patten.end());

	//사용자, AI에게 2장씩 카드를 준다
	player->CardDraw(card);
	player->CardDraw(card);

	ai->CardDraw(card);
	ai->CardDraw(card);
	
	// 1초 간격으로 사용자, AI 카드를 출력한다 ( ai카드는 1장만 출력한다 )
	player->ShowCard();
	Sleep(1000);
	ai->ShowCard();
	Sleep(1000);
	player->ShowCard();
	Sleep(1000);

	//AI 카드 1장은 뒷면으로 출력
	CustomGraphic(44, 1, 10, 8);
	Sleep(1000);

	// 사용자가 세팅 후 블랙잭( A 카드와 10의 카드 )이 나오면 바로 승리 
	if ( player->ScoreChack() == 21)
	{
		CustomGraphic(42, 13, 30, 2);
		gotoxy(45, 14);
		cout << "블랙잭! 당신이 이겼습니다! ";

		CustomGraphic(82, 14, 28, 2);
		gotoxy(84, 15);
		cout << "+" << (batting * 0.5);

		Player.GetMoney(batting);
		Player.BlackWinCount();

		CustomGraphic(40, 16, 40, 2);
		gotoxy(42, 17);
		cout << "게임선택창으로 가려면 Enter를 누르세요";

		while (_getch() != 13)
		{

		}

		system("cls");
		Player.Save();
		GameSelect(Player);
	}

	// AI가 세팅 후 블랙잭( A 카드와 10의 카드 )이 나오면 바로 승리 
	if (ai->ScoreChack() == 21)
	{
		ai->ShowCard();

		CustomGraphic(42, 13, 30, 2);
		gotoxy(48, 14);
		cout << "블랙잭! AI이 이겼습니다! ";

		CustomGraphic(82, 14, 28, 2);
		gotoxy(84, 15);
		cout << "-" << batting;

		Player.LoseMoney(batting);
		Player.BlackLoseCount();

		CustomGraphic(40, 16, 40, 2);
		gotoxy(42, 17);
		cout << "게임선택창으로 가려면 Enter를 누르세요";

		while (_getch() != 13)
		{

		}

		system("cls");
		Player.Save();
		GameSelect(Player);
	}

	//극악의 확률이지만 둘 다 블랙잭이면 둘 다 승리
	if (player->ScoreChack() == 21 && ai->ScoreChack() == 21)
	{
		Eraser(40, 13, 34, 3);
		CustomGraphic(46, 13, 28, 2);
		gotoxy(49, 14);
		cout << "블랙잭! 둘다 승리입니다! ";

		CustomGraphic(40, 16, 40, 2);
		gotoxy(42, 17);
		cout << "게임선택창으로 가려면 Enter를 누르세요";

		while (_getch() != 13)
		{

		}

		system("cls");
		Player.Save();
		GameSelect(Player);
	}

	// 가지고 있는 카드의 합이 21이 넘지 않을 때 까지 진행
	while (!(player->ScoreChack() > 21) && player->ScoreChack() > 0)
	{
		//입력한 키를 초기화
		input = 0;

		//카드를 더 뽑을 지 사용자에게 출력
		CustomGraphic(40, 13, 34, 2);
		gotoxy(43, 14);
		cout << "카드를 더 뽑으시겠습니까? Y/N";

		// Y, N 키를 입력할 때 까지 계속 반복
		while (input != 89 && input != 121 && input != 78 && input != 110)
		{
			input = _getch();
		}
		
		// Y키를 누르면 1장 더 뽑고 AI도 가지고 있는 카드의 총합 + 10이 21을 넘기지 않는다면 1장 뽑기
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

		// N키를 누르면 결과 창 출력
		else
		{
			//AI가 가지고 있는 카드의 총합 + 10을 넘기지 않을 때 까지 카드 뽑기
			while (ai->ScoreChack() + 10 <= 21)
			{
				ai->CardDraw(card);

				//1초씩 뒷면으로 출력
				CustomGraphic(44 + loc, 1, 10, 8);
				loc += 4;

				Sleep(1000);
			}
			
			//
			for (int i = 0; i < ai->DectSize() - 1; i++)
			{
				//1초씩 AI의 카드를 출력
				ai->ShowCard();

				Sleep(1000);
			}

			// 카드의 총합이 사용자가 21에 가까우면 승리
			if (player->ScoreChack() > ai->ScoreChack())
			{
				Eraser(40, 13, 34, 3);
				CustomGraphic(48, 13, 22, 2);
				gotoxy(51, 14);
				cout << "당신이 이겼습니다! ";

				CustomGraphic(82, 14, 28, 2);
				gotoxy(84, 15);
				cout << "+" << (batting * 0.5);

				Player.GetMoney(batting);
				Player.BlackWinCount();

				CustomGraphic(40, 16, 40, 2);
				gotoxy(42, 17);
				cout << "게임선택창으로 가려면 Enter를 누르세요";

				while (_getch() != 13)
				{

				}

				system("cls");
				Player.Save();
				GameSelect(Player);

			}

			// 카드의 총합이 AI가 21에 가까우면 승리
			else if( player->ScoreChack() < ai->ScoreChack())
			{
				Eraser(40, 13, 34, 3);
				CustomGraphic(49, 13, 20, 2);
				gotoxy(52, 14);
				cout << "당신이 졌습니다! ";

				CustomGraphic(82, 14, 28, 2);
				gotoxy(84, 15);
				cout << "-" << batting;

				Player.LoseMoney(batting);
				Player.BlackLoseCount();

				CustomGraphic(40, 16, 40, 2);
				gotoxy(42, 17);
				cout << "게임선택창으로 가려면 Enter를 누르세요";

				while (_getch() != 13)
				{

				}

				system("cls");
				Player.Save();
				GameSelect(Player);
			}

			// 카드의 총합이 둘 다 똑같으면 무승부
			else if (player->ScoreChack() == ai->ScoreChack())
			{
				Eraser(40, 13, 34, 3);
				CustomGraphic(49, 13, 20, 2);
				gotoxy(52, 14);
				cout << " 무승부 입니다  ";

				CustomGraphic(40, 16, 40, 2);
				gotoxy(42, 17);
				cout << "게임선택창으로 가려면 Enter를 누르세요";

				while (_getch() != 13)
				{

				}

				system("cls");
				Player.Save();
				GameSelect(Player);
			}
		}
	}

	//사용자가 카드를 뽑았는데 21을 넘기면 패배
	Eraser(40, 13, 34, 3);
	CustomGraphic(40, 13, 40, 2);
	gotoxy(44, 14);
	cout << "21을 넘기셨습니다. 당신은 졌습니다";

	CustomGraphic(82, 14, 28, 2);
	gotoxy(84, 15);
	cout << "-" << batting;

	Player.LoseMoney(batting);
	Player.BlackLoseCount();

	CustomGraphic(40, 16, 40, 2);
	gotoxy(42, 17);
	cout << "게임선택창으로 가려면 Enter를 누르세요";

	//Enter 키를 누르면 게임 선택 창으로 이동
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
 


