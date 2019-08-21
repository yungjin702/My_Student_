#include <iostream>

using namespace std;

int main()
{
	//입력 받을 값, 가장 큰 값을 저장할 변수 선언 
	int input, max = 0;

	//3번 반복 
	for( int i = 0; i < 3; i++)
	{
		//input 변수에 입력 받기 
		cin >> input;
		//input 값이 max의 값보다 크면 max에 저장 
		if( input > max)
		{
			max = input;
		}
	}
	
	//가장 큰 값 출력 
	cout << "3개의 정수 중 가장 큰 정수는 " << max << "입니다";
	
	return 0; 
}
