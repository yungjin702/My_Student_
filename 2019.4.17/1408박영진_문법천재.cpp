#include <iostream>
#include <string>

using namespace std;

int main()
{
	//���ڿ��� �Է¹��� ���ڿ� ���� ���� 
	string str;
	
	//������ ������ ���ڿ��� �Է¹��� 
	getline(cin , str);
	
	//���ڿ��� ���̸� ������ ������ �����ϰ� �Է¹��� ���ڿ��� ���̸� ���� 
	int length = str.size() - 1;
	
	//���� �Ǿ��� ���ڰ� �ҹ��ڶ�� �빮�ڷ� ��ȯ 
	if( islower(str[0]))
	{
		str[0] = toupper(str[0]);
	}
	
	//���� �ǵ��� ���ڿ� . �� ���ٸ� �� �ڿ� . �� �߰� 
	if( str[length] != '.')
	{
		str.insert( length + 1 , ".");
	} 

	//������ ���ڿ��� ��� 
	cout << str << endl;
	
	return 0;
}
