#include <iostream>
//�ð� �Լ�
#include <ctime>
//���� ���� �Լ�
#include <cstdlib>

using namespace std;

int main()
{
	//���尪 ����(�ð��� ����)
	srand(time(0));
	int a , b;
	
	//a �� ���� ����
	a = rand() % 6 + 1;
	
	//a �� �� ���� 
	cout << "a �ֻ����� ��: " << a << endl;
	
	//b �� ���� �Է�
	b = rand() % 6 + 1;
	
	//b �� ��, a + b �ֻ��� �� ���
	cout << "b �ֻ����� ��: " << b << endl;
	cout << "a , b �ֻ����� ��: " << a + b << endl;
	
	return 0;
	
}
 
