#include <iostream>

using namespace std;

//hello를 인수의 값에 따라 출력하는 함수 
void sayHello ( int n = 1)
{
	for( int j = 0; j < n; j++ )
	{
		cout << "Hello" << endl;
	}
}

int main()
{
	int n = 0;
	
	sayHello(n);
	
	return 0;
}
