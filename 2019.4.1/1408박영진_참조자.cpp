#include <iostream>

using namespace std;

int main()
{
	//�Է¹ް� ��Ȱ���� ���� ���� 
	int num , num1; 
	
	scanf("%d %d" , num, num1); 
	
	swap(num , num1);
	
	cout << num << " " << num1 << endl;
	
	return 0;
	
}

//�� ������ ���� ��ȯ�ϴ� �Լ� 
void swap(int &a , int &b)
{
	int c;
	c = a;
	a = b;
	b = c;
	
}
