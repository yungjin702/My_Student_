#include <iostream>

using namespace std;

int main()
{
	//�Է� ���� ��, ���� ū ���� ������ ���� ���� 
	int input, max = 0;

	//3�� �ݺ� 
	for( int i = 0; i < 3; i++)
	{
		//input ������ �Է� �ޱ� 
		cin >> input;
		//input ���� max�� ������ ũ�� max�� ���� 
		if( input > max)
		{
			max = input;
		}
	}
	
	//���� ū �� ��� 
	cout << "3���� ���� �� ���� ū ������ " << max << "�Դϴ�";
	
	return 0; 
}
