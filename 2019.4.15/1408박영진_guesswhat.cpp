#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
	//���尪 ���� 
	srand(time(0));
	//secret ������ ���� �Է� 
	int secret = rand() % 100 + 1;
	
	//�Է¹��� ������ �õ��� ������ ������ ���� ���� 
	int input, turn = 0;
	
	
	do
	{
		//���� �Է¹ޱ� 
		cout << "���ڸ� ������ ������! ����� ������ ���ڴ�? " << endl; 
		cin >> input;
		//�õ� Ƚ�� ���� 
		++turn;
		
		//�Է��� ���� �������� �ٸ���� 
		if( input != secret)
		{
			//�Է��� ���� ���������� ũ�� ��� 
			if( input > secret)
			{
				cout << "��! ������ ������ �� ����~" << endl;
			}
			
			//�Է��� ���� ���������� ������ ���
			else if( input < secret)
			{
				cout << "�J! ������ ������ �� ����~" << endl;
			}
		}
		
		//�Է��� ���� �������� ���� ���  
		if( input == secret)
		{
			//������ ����ϰ� �õ��� Ƚ���� ��� 
			cout << "������! �����մϴ�. " << "����� �Ƹ��� õ�礻 �õ� Ƚ���� " << turn << "ȸ�Դϴ�.";
		}
		
	}while (input != secret); //�Է��� ���� �������� �ٸ� ��� ��� �ݺ� 
	
	return 0;
}
