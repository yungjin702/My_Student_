#include <iostream>

using namespace std;

int main()
{
	//입력받고 교활받을 변수 선언 
	int num , num1; 
	
	scanf("%d %d" , num, num1); 
	
	swap(num , num1);
	
	cout << num << " " << num1 << endl;
	
	return 0;
	
}

//두 변수의 값을 교환하는 함수 
void swap(int &a , int &b)
{
	int c;
	c = a;
	a = b;
	b = c;
	
}
