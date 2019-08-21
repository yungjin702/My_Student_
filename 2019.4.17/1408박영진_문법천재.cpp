#include <iostream>
#include <string>

using namespace std;

int main()
{
	//문자열을 입력받을 문자열 변수 선언 
	string str;
	
	//공백을 포함한 문자열을 입력받음 
	getline(cin , str);
	
	//문자열의 길이를 저장할 변수를 선언하고 입력받은 문자열의 길이를 저장 
	int length = str.size() - 1;
	
	//만약 맨앞의 문자가 소문자라면 대문자로 변환 
	if( islower(str[0]))
	{
		str[0] = toupper(str[0]);
	}
	
	//만약 맨뒤의 문자에 . 이 없다면 그 뒤에 . 을 추가 
	if( str[length] != '.')
	{
		str.insert( length + 1 , ".");
	} 

	//교정된 문자열을 출력 
	cout << str << endl;
	
	return 0;
}
