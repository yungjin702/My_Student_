#include <iostream>

// �̸� ���� 
using namespace std;

int main()
{
	// ������ �ִ� �� , ĵ���� ����, �ִ�� �� �� �ִ� ������ ���� 
	int money;
	int candy;
	int max;
	
	//���ϴ� ���� �Է��� �޶��  ����ϰ� ����ڰ� �Է��ϰ� �� 
	cout << "���� ������ �ִ� ��: " ;
	cin >> money ;
	cout << "ĵ���� ����: " ;
	cin >> candy;
	
	// ������ �ִ� �� / ĵ�� ���� 
	max = money / candy;
	
	//�ִ�� �� �� �ִ� ĵ���� ���� ��� 
	cout << "�ִ�� �� �� �ִ� ĵ���� ���� = " << max << endl;
	
	// ĵ�� �ִ��� �����ϰ� ���� ���� ��� 
	money = money % candy;
	
	// ���� �� ��� 
	cout << "ĵ�� ���� �� ���� �� = " << money;

	return 0;
	
 } 
