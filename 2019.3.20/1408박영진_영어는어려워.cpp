#include <iostream>
#include <string>

using namespace std;
	
int main()
{
	//���ڿ� �迭 (�־�, ����, ������) 
	string str[3];
	
	//�־�, ����, ������ �Է� 
	cout << "�־�: ";
	getline(cin, str[0]);
	cout << "����: ";
	getline(cin, str[1]);
	cout << "������: ";
	getline(cin, str[2]);
	
	//���ڷ� ǥ�� 
	cout << str[0] << str[1] << "a " << str[2];
	
	return 0;
	
}
