#include <iostream>

using namespace std;

int main()
{
	// �� ������ ���� ���� 
	int size = 0;
	
	// �� ������ �Է�  
	cout << "���� ����� �Է��ϼ���(������ ml �Դϴ�): ";
	cin >> size;
	
	//200ml ���� ũ�� large 
	if( size >= 200)
	{
		cout << "lerge";
	}
	//200ml ���� �۰� 100 ml �̻��̸� medium 
	else if (size < 200 && size >= 100)
	{
		cout << "medium";
	}
	//0ml���� ũ�� 100ml���� ������ small 
	else if (size < 100 && size > 0)
	{
		cout << "small";
	}
	//�� �� ���� ���� ��� ��� 
	else
	{
		cout << "�߸��� ���� �Է��ϼ̽��ϴ�."; 
	}
	
		return 0;
 } 
