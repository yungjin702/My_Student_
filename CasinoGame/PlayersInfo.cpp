#include "PlayersInfo.h"

//승리시 배팅의 0.5배를 주는 함수
void PlayersInfo::GetMoney( int batting )
{
	money += batting * 0.5;
}

//패배시 배팅한 만큼 돈을 잃는 함수
void PlayersInfo::LoseMoney(int batting)
{
	money -= batting;
}

//원 레이싱에 승리하면 1승 올려주는 함수
void PlayersInfo::CircleWinCount()
{
	circlewin += 1;
}

//원 레이싱에 패배하면 1패 올려주는 함수
void PlayersInfo::CircleLoseCount()
{
	circlelose += 1;
}

//블랙잭에서 승리하면 1승 올려주는 함수
void PlayersInfo::BlackWinCount()
{
	blackwin += 1;
}

//블랙잭에서 패배하면 1패 올려주는 함수
void PlayersInfo::BlackLoseCount()
{
	blacklose += 1;
}

//사용자의 정보를 Save.txt 파일에 저장하는 함수
void PlayersInfo::Save()
{
		char strPath[] = { "Save.txt" };
		remove(strPath);
		ofstream file("Save.txt");
		file << circlewin << ' ';
		file << circlelose << ' ';
		file << blackwin << ' ';
		file << blacklose << ' ';
		file << money << ' ';
		file.close(); 
}

void PlayersInfo::Loading()
{
	ifstream file("Save.txt");
	if (file.is_open())
	{
		file >> circlewin;
		file >> circlelose;
		file >> blackwin;
		file >> blacklose;
		file >> money;
		file.close();
	}
}

void PlayersInfo::PlayerInfo()
{
	gotoxy(45, 13);
	cout << "원 레이싱 승리: " << circlewin << "판 " << "패배: " << circlelose << "판";
	gotoxy(45, 15);
	cout << "   블랙잭 승리: " << blackwin << "판 " << "패배: " << blacklose << "판";
	gotoxy(45, 17);
	cout << "돈: " << money;
}
