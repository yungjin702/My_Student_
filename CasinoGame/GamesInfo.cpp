#include "GamesInfo.h"

//생성자 함수로 게임 정보를 저장하는 함수
GamesInfo::GamesInfo(const char* name, const char* file, int star)
{
	gamename = name;
	info = file;
	diffcult = star;
}

// 담아둔 게임 정보를 출력하는 함수
void GamesInfo::InfoGame()
{
	//파일에 담긴 내용을 담을 변수 선언
	string script;

	//입력받은 위치에 파일을 읽기용으로 실행
	//ifstream file("~~~~.txt")와 같은 맥락
	ifstream file(info);

	//줄바꿈을 위한 변수
	int i = 0;

	//화면 세팅
	ScreenGraphic();
	CustomGraphic(3, 2, 30, 4);

	//게임 제목 출력
	gotoxy(13, 4);
	cout << gamename;
	gotoxy(13, 10);

	//파일의 끝을 만나기 전까지 모든 내용을 한 줄씩 출력
	while (!file.eof())
	{
		gotoxy(13, 10 + i);
		getline(file, script);
		cout << script;
		i++;
	}
	
	//난의도에 따라서 별을 출력
	for (int i = 0; i < diffcult; i++)
	{
		cout << "★ ";
	}

	//파일 닫기
	file.close();
}

