#include <iostream>
#include <string>

using namespace std;

int main()
{
	//문자열 5개를 받을 배열 선언 
	string str[5];
	//가장긴 문자의 위치를 나타낼 변수 선언 
	int strlong = 0;
	//가장긴 문자열의 크기가 무엇인지 알려줄 변수 선언 
	int max = 0;
	
	//문자열을 입력받고 가장긴 문자열보다 길면 그 문자열의 위치와 그 문자열의 크기를 변수에 저장 
	for( int i = 0; i < 5; i++)
	{
		getline(cin , str[i]);

		if(str[i].size() > max)
		{
			max = str[i].size();
			strlong = i; 
		}
	}
	
	//가장 큰 문자열을 출력 
	cout << str[strlong] << endl;
	
	return 0;
}
