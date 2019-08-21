#include <iostream>
#include <string>

using namespace std;

int main()
{
	//암호를 입력받을 문자열 변수 선언 
	string input; 
	
	//대문자, 소문자, 숫자가 있는지 확인할 변수 선언 
	bool upper, lower, number;
	
	//문자열의 길이를 저장할 변수 선언 
	int length = 0;
	
	cin >> input;
	
	//변수에 입력받은 문자열의 길이를 저장 
	length = input.size();
	
	//문자열에 대문자, 소문자, 숫자가 있는지 확인 
	for( int i = 0; i < length; i++)
	{
		if( isupper(input[i]))
		{
			upper = 1;
			continue;
		}
		
		if( islower(input[i]))
		{
			lower = 1;
			continue;
		}
		
		if(  input[i] >= '0' || input[i] <= '9')
		{
			number = 1;
			continue;
		}
		
	}
	
	//만약 암호의 길이가 8 이상이면  
	if(	length > 7)
	{
		//대문자, 소문자, 숫자가 모두 포함되어있으면 출력 
		if( upper + lower + number == 3)
		{
			cout << "안전한 암호입니다." << endl; 
		}
		
		//그렇지 않으면 출력 
		else
		{
			cout << "더 강한 암호를 설정하라" << endl;
		}
	
	}
	
	//암호의 길이가 7이하면 출력 
	else
	{
		cout << "암호의 길이가 짧습니다." << endl;	
	}
	
	return 0;
}
