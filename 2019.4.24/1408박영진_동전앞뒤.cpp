#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//동전의 앞뒤를 랜덤으로 반환할 함수 선언 
int Flip( int &coin)
{
	coin = rand() % 2;
}

int main()
{
	//동전의 앞, 뒤를 알려주는 변수, 앞면 , 뒷면이 나온 횟수를 저장할 변수 선언 
	int coins, back, front = 0;
	
	//시드값 설정 
	srand(time(0));
	
	//동전의 앞, 뒤면을 랜덤으로 받고 0 이면 뒷면 1 이면 앞면의 변수를 1씩 올린다. 
	for( int i = 0; i < 100; i++)
	{
		
		Flip(coins);
		
		if ( coins == 0)
		{ 
			++back;
		}
		
		else
		{
			++front;
		}
		
	}
	
	//뒷면과 앞면이 나온 횟수를 출력 
	cout << back << " " << front << endl;
	
	return 0;
}
