#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
	//난수 생성 
	srand(time(0));
	char secret = rand() % 26 + 97;
	//입력 받을 값 변수 생성 
	char input = 0;
	
	//입력 값 입력 
	cout << "a~z까지의 단어 중에서 비밀코드를 추측하시오: ";
	cin >> input;
	
	//비밀코드와 입력값이 같지 않을 경우 계속 반복 
	while(input != secret)
	{
		cout << "비밀코드와 맞지 않습니다 다시 입력해주세요" << endl;
		
		//비밀코드보다 작다면 뒤에 있다고 출력 
		if( input > 96 && input < secret)
		{
			cout << "비밀코드는 " << input << "보다 뒤에 있습니다." << endl;
		}
		//비밀코드보다 크다면 앞에 있다고 출력 
		else if( input < 123 && input > secret)
		{
			cout << "비밀코드는 " << input << "보다 앞에 있습니다." << endl; 
		}
		
		//비밀코드와 맞을 때 까지 계속 입력 
		cout << "비밀코드를 추측하시오: ";
		cin >> input; 
	}
	
	//다시 한번 비밀코드와 맞는지 확인 
	if( input == secret)
	{
		//비밀코드가 무엇이였는지 출력 
		cout << "맞았습니다! 비밀코드는 " << secret << "이였습니다!" ; 
	}
	
	return 0;
	
}
