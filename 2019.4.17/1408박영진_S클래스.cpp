#include <iostream>
#include <string>

using namespace std;

int main()
{
	//���ڿ� 5���� ���� �迭 ���� 
	string str[5];
	//����� ������ ��ġ�� ��Ÿ�� ���� ���� 
	int strlong = 0;
	//����� ���ڿ��� ũ�Ⱑ �������� �˷��� ���� ���� 
	int max = 0;
	
	//���ڿ��� �Է¹ް� ����� ���ڿ����� ��� �� ���ڿ��� ��ġ�� �� ���ڿ��� ũ�⸦ ������ ���� 
	for( int i = 0; i < 5; i++)
	{
		getline(cin , str[i]);

		if(str[i].size() > max)
		{
			max = str[i].size();
			strlong = i; 
		}
	}
	
	//���� ū ���ڿ��� ��� 
	cout << str[strlong] << endl;
	
	return 0;
}
