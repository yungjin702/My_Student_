#include <iostream>

using namespace std;

//인자로 전달된 변수의 값을 1씩 증가시키는 함수 
void FuncPlus(int &plus)
{
	plus += 1;  
}

//인자로 전달된 변수가 양수면 음수로 음수면 양수로 바꾸는 함수 
void FuncSign(int &Sign)
{
	if(Sign > 0)
	{
		Sign = -Sign;
	}
	else
	{
		Sign = -(Sign);
	}
	
}

int main()
{
	//입력받을 변수 선언 
	int input, input1 = 0;
	
	cin >> input;
	cin >> input1;
	
	FuncPlus(input);
	FuncSign(input1);
	
	//함수에 전달된 변수 출력 
	cout << input << endl;
	cout << input1 << endl;
	
	return 0;
 } 
