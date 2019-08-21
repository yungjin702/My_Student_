#include <iostream>

// 이름 설정 
using namespace std;

int main()
{
	// 가지고 있는 돈 , 캔디의 가격, 최대로 살 수 있는 개수의 변수 
	int money;
	int candy;
	int max;
	
	//원하는 값을 입력해 달라고  출력하고 사용자가 입력하게 함 
	cout << "현재 가지고 있는 돈: " ;
	cin >> money ;
	cout << "캔디의 가격: " ;
	cin >> candy;
	
	// 가지고 있는 돈 / 캔디 가격 
	max = money / candy;
	
	//최대로 살 수 있는 캔디의 수를 출력 
	cout << "최대로 살 수 있는 캔디의 개수 = " << max << endl;
	
	// 캔디를 최대한 구매하고 남은 돈을 계산 
	money = money % candy;
	
	// 남은 돈 출력 
	cout << "캔디 구입 후 남은 돈 = " << money;

	return 0;
	
 } 
