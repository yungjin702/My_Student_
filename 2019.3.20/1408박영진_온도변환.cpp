#include <iostream>

using namespace std;

int main()
{
	//변수 선언 
	float sub;
	int hwa;
	
	//화씨 입력 
	cin >> hwa;
	
	//화씨에서 섭씨로 전환 
	sub = 5.0/9.0 * (hwa - 32);
	
	//섭씨 온도 출력 
	cout << sub << endl;
	
	return 0;
	
}
