#include <iostream>

using namespace std;

int main()
{
	//변수 선언 
	float pye;
	
	// 평수 입력 
	cout << "평: ";
	cin >> pye;
	// 평방미터로 전환해서 출력 
	cout << "환산한 결과는 " << pye * 3.3058 << " 평방미터 입니다.";
	
	return 0; 
}
