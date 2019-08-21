#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
	//씨드값 설정 
	srand(time(0));
	//secret 변수에 난수 입력 
	int secret = rand() % 100 + 1;
	
	//입력받을 변수와 시도한 갯수를 저장할 변수 선언 
	int input, turn = 0;
	
	
	do
	{
		//숫자 입력받기 
		cout << "숫자를 추측해 보세요! 당신이 생각한 숫자는? " << endl; 
		cin >> input;
		//시도 횟수 증가 
		++turn;
		
		//입력한 값과 랜덤값과 다를경우 
		if( input != secret)
		{
			//입력한 값이 랜덤값보다 크면 출력 
			if( input > secret)
			{
				cout << "땡! 제시한 수보다 더 낫아~" << endl;
			}
			
			//입력한 값이 랜덤값보다 작으면 출력
			else if( input < secret)
			{
				cout << "똉! 제시한 수보다 더 높아~" << endl;
			}
		}
		
		//입력한 값과 랜덤값이 같을 경우  
		if( input == secret)
		{
			//정답을 출력하고 시도한 횟수를 출력 
			cout << "딩동댕! 축하합니다. " << "당신은 아마도 천재ㅋ 시도 횟수는 " << turn << "회입니다.";
		}
		
	}while (input != secret); //입력한 값과 랜덤값이 다를 경우 계속 반복 
	
	return 0;
}
