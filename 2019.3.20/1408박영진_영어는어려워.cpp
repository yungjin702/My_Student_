#include <iostream>
#include <string>

using namespace std;
	
int main()
{
	//문자열 배열 (주어, 동사, 목적어) 
	string str[3];
	
	//주어, 동사, 목적어 입력 
	cout << "주어: ";
	getline(cin, str[0]);
	cout << "동사: ";
	getline(cin, str[1]);
	cout << "목적어: ";
	getline(cin, str[2]);
	
	//문자로 표현 
	cout << str[0] << str[1] << "a " << str[2];
	
	return 0;
	
}
