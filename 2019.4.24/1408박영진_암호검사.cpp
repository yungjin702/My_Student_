#include <iostream>
#include <string>

using namespace std;

int main()
{
	//��ȣ�� �Է¹��� ���ڿ� ���� ���� 
	string input; 
	
	//�빮��, �ҹ���, ���ڰ� �ִ��� Ȯ���� ���� ���� 
	bool upper, lower, number;
	
	//���ڿ��� ���̸� ������ ���� ���� 
	int length = 0;
	
	cin >> input;
	
	//������ �Է¹��� ���ڿ��� ���̸� ���� 
	length = input.size();
	
	//���ڿ��� �빮��, �ҹ���, ���ڰ� �ִ��� Ȯ�� 
	for( int i = 0; i < length; i++)
	{
		if( isupper(input[i]))
		{
			upper = 1;
			continue;
		}
		
		if( islower(input[i]))
		{
			lower = 1;
			continue;
		}
		
		if(  input[i] >= '0' || input[i] <= '9')
		{
			number = 1;
			continue;
		}
		
	}
	
	//���� ��ȣ�� ���̰� 8 �̻��̸�  
	if(	length > 7)
	{
		//�빮��, �ҹ���, ���ڰ� ��� ���ԵǾ������� ��� 
		if( upper + lower + number == 3)
		{
			cout << "������ ��ȣ�Դϴ�." << endl; 
		}
		
		//�׷��� ������ ��� 
		else
		{
			cout << "�� ���� ��ȣ�� �����϶�" << endl;
		}
	
	}
	
	//��ȣ�� ���̰� 7���ϸ� ��� 
	else
	{
		cout << "��ȣ�� ���̰� ª���ϴ�." << endl;	
	}
	
	return 0;
}
