#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
	//���� ���� 
	srand(time(0));
	char secret = rand() % 26 + 97;
	//�Է� ���� �� ���� ���� 
	char input = 0;
	
	//�Է� �� �Է� 
	cout << "a~z������ �ܾ� �߿��� ����ڵ带 �����Ͻÿ�: ";
	cin >> input;
	
	//����ڵ�� �Է°��� ���� ���� ��� ��� �ݺ� 
	while(input != secret)
	{
		cout << "����ڵ�� ���� �ʽ��ϴ� �ٽ� �Է����ּ���" << endl;
		
		//����ڵ庸�� �۴ٸ� �ڿ� �ִٰ� ��� 
		if( input > 96 && input < secret)
		{
			cout << "����ڵ�� " << input << "���� �ڿ� �ֽ��ϴ�." << endl;
		}
		//����ڵ庸�� ũ�ٸ� �տ� �ִٰ� ��� 
		else if( input < 123 && input > secret)
		{
			cout << "����ڵ�� " << input << "���� �տ� �ֽ��ϴ�." << endl; 
		}
		
		//����ڵ�� ���� �� ���� ��� �Է� 
		cout << "����ڵ带 �����Ͻÿ�: ";
		cin >> input; 
	}
	
	//�ٽ� �ѹ� ����ڵ�� �´��� Ȯ�� 
	if( input == secret)
	{
		//����ڵ尡 �����̿����� ��� 
		cout << "�¾ҽ��ϴ�! ����ڵ�� " << secret << "�̿����ϴ�!" ; 
	}
	
	return 0;
	
}
