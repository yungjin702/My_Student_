#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//������ �յڸ� �������� ��ȯ�� �Լ� ���� 
int Flip( int &coin)
{
	coin = rand() % 2;
}

int main()
{
	//������ ��, �ڸ� �˷��ִ� ����, �ո� , �޸��� ���� Ƚ���� ������ ���� ���� 
	int coins, back, front = 0;
	
	//�õ尪 ���� 
	srand(time(0));
	
	//������ ��, �ڸ��� �������� �ް� 0 �̸� �޸� 1 �̸� �ո��� ������ 1�� �ø���. 
	for( int i = 0; i < 100; i++)
	{
		
		Flip(coins);
		
		if ( coins == 0)
		{ 
			++back;
		}
		
		else
		{
			++front;
		}
		
	}
	
	//�޸�� �ո��� ���� Ƚ���� ��� 
	cout << back << " " << front << endl;
	
	return 0;
}
