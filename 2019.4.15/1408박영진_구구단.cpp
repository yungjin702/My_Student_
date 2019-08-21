#include <iostream>

using namespace std;

int main()
{
	int input = 0;
	
	cout << "구구단 중에서 배우고 싶은 단을 입력하세요: ";
	cin >> input;
	
	for ( int i = 1; i <= 10; i++)
	{
		cout << input << " * " << i << " = " << input * i << endl;
	}
	
	return 0; 
}
