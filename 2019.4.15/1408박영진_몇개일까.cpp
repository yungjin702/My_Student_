#include <iostream>
#include <string>

using namespace std;

int main()
{
	//영문자를 입력받을 변수 선언 
	string input;
	//모음과 자음의 갯수를 저장할 변수 wowel conson 선언 
	int vowel, conson = 0;
	
	//영문자를 입력받음 
	cout << "영문자를 입력하고 콘트롤 z를 치세요.." << endl;
	cin >> input;

	//입력 받은 영문자가 콘트롤 z가 아니면 계속 진행 
	while( input != "^z" )
	{
		//입력 받은 영문자가 a, e, i, o, u 이면 모음에 1 더하기 
		if( input == "a" || input == "e" || input == "i" || input == "o" || input == "u" )
		{
			++vowel; 
		}
		
		//나머지는 자음에 1 더하기  
		else
		{
			++conson;
		}
		
		cin >> input;
	}
	
	//입력받은 알파벳의 자음과 모음은 각각 몇개 인지 출력 
	cout << "모음은 " << vowel << "개이고" << "자음은 " << conson << "개입니다." << endl;
	
	return 0; 
 } 
