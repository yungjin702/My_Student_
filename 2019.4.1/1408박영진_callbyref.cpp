#include <iostream>

using namespace std;

//���ڷ� ���޵� ������ ���� 1�� ������Ű�� �Լ� 
void FuncPlus(int &plus)
{
	plus += 1;  
}

//���ڷ� ���޵� ������ ����� ������ ������ ����� �ٲٴ� �Լ� 
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
	//�Է¹��� ���� ���� 
	int input, input1 = 0;
	
	cin >> input;
	cin >> input1;
	
	FuncPlus(input);
	FuncSign(input1);
	
	//�Լ��� ���޵� ���� ��� 
	cout << input << endl;
	cout << input1 << endl;
	
	return 0;
 } 
