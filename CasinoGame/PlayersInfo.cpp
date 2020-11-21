#include "PlayersInfo.h"

//�¸��� ������ 0.5�踦 �ִ� �Լ�
void PlayersInfo::GetMoney( int batting )
{
	money += batting * 0.5;
}

//�й�� ������ ��ŭ ���� �Ҵ� �Լ�
void PlayersInfo::LoseMoney(int batting)
{
	money -= batting;
}

//�� ���̽̿� �¸��ϸ� 1�� �÷��ִ� �Լ�
void PlayersInfo::CircleWinCount()
{
	circlewin += 1;
}

//�� ���̽̿� �й��ϸ� 1�� �÷��ִ� �Լ�
void PlayersInfo::CircleLoseCount()
{
	circlelose += 1;
}

//���迡�� �¸��ϸ� 1�� �÷��ִ� �Լ�
void PlayersInfo::BlackWinCount()
{
	blackwin += 1;
}

//���迡�� �й��ϸ� 1�� �÷��ִ� �Լ�
void PlayersInfo::BlackLoseCount()
{
	blacklose += 1;
}

//������� ������ Save.txt ���Ͽ� �����ϴ� �Լ�
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
	cout << "�� ���̽� �¸�: " << circlewin << "�� " << "�й�: " << circlelose << "��";
	gotoxy(45, 15);
	cout << "   ���� �¸�: " << blackwin << "�� " << "�й�: " << blacklose << "��";
	gotoxy(45, 17);
	cout << "��: " << money;
}
