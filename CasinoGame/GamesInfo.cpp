#include "GamesInfo.h"

//������ �Լ��� ���� ������ �����ϴ� �Լ�
GamesInfo::GamesInfo(const char* name, const char* file, int star)
{
	gamename = name;
	info = file;
	diffcult = star;
}

// ��Ƶ� ���� ������ ����ϴ� �Լ�
void GamesInfo::InfoGame()
{
	//���Ͽ� ��� ������ ���� ���� ����
	string script;

	//�Է¹��� ��ġ�� ������ �б������ ����
	//ifstream file("~~~~.txt")�� ���� �ƶ�
	ifstream file(info);

	//�ٹٲ��� ���� ����
	int i = 0;

	//ȭ�� ����
	ScreenGraphic();
	CustomGraphic(3, 2, 30, 4);

	//���� ���� ���
	gotoxy(13, 4);
	cout << gamename;
	gotoxy(13, 10);

	//������ ���� ������ ������ ��� ������ �� �پ� ���
	while (!file.eof())
	{
		gotoxy(13, 10 + i);
		getline(file, script);
		cout << script;
		i++;
	}
	
	//���ǵ��� ���� ���� ���
	for (int i = 0; i < diffcult; i++)
	{
		cout << "�� ";
	}

	//���� �ݱ�
	file.close();
}

