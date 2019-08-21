#include <iostream>
//시간 함수
#include <ctime>
//난수 생성 함수
#include <cstdlib>

using namespace std;

int main()
{
	//씨드값 선언(시간을 대입)
	srand(time(0));
	int a , b;
	
	//a 에 난수 대입
	a = rand() % 6 + 1;
	
	//a 의 값 대입 
	cout << "a 주사위의 값: " << a << endl;
	
	//b 에 난수 입력
	b = rand() % 6 + 1;
	
	//b 의 값, a + b 주사위 값 출력
	cout << "b 주사위의 값: " << b << endl;
	cout << "a , b 주사위의 합: " << a + b << endl;
	
	return 0;
	
}
 
