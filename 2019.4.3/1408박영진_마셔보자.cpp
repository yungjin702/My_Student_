#include <iostream>

using namespace std;

int main()
{
	// 컵 사이즈 변수 선언 
	int size = 0;
	
	// 컵 사이즈 입력  
	cout << "컵의 사이즈를 입력하세요(단위는 ml 입니다): ";
	cin >> size;
	
	//200ml 보다 크면 large 
	if( size >= 200)
	{
		cout << "lerge";
	}
	//200ml 보다 작고 100 ml 이상이면 medium 
	else if (size < 200 && size >= 100)
	{
		cout << "medium";
	}
	//0ml보다 크고 100ml보다 작으면 small 
	else if (size < 100 && size > 0)
	{
		cout << "small";
	}
	//그 외 값이 나올 경우 출력 
	else
	{
		cout << "잘못된 값을 입력하셨습니다."; 
	}
	
		return 0;
 } 
