#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int length[2];\
	int hyp; 
	
	cout << "첫 번쨰 변의 길이: ";
	cin >> length[0];
	cout << "두 번쨰 변의 길이: ";
	cin >> length[1];
	
	hyp = sqrt(pow(length[0] , 2) + pow(length[1] , 2) );
	
	cout << "빗변의 길이는 " << hyp << "입니다.";
}
