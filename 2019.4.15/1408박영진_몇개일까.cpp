#include <iostream>
#include <string>

using namespace std;

int main()
{
	//�����ڸ� �Է¹��� ���� ���� 
	string input;
	//������ ������ ������ ������ ���� wowel conson ���� 
	int vowel, conson = 0;
	
	//�����ڸ� �Է¹��� 
	cout << "�����ڸ� �Է��ϰ� ��Ʈ�� z�� ġ����.." << endl;
	cin >> input;

	//�Է� ���� �����ڰ� ��Ʈ�� z�� �ƴϸ� ��� ���� 
	while( input != "^z" )
	{
		//�Է� ���� �����ڰ� a, e, i, o, u �̸� ������ 1 ���ϱ� 
		if( input == "a" || input == "e" || input == "i" || input == "o" || input == "u" )
		{
			++vowel; 
		}
		
		//�������� ������ 1 ���ϱ�  
		else
		{
			++conson;
		}
		
		cin >> input;
	}
	
	//�Է¹��� ���ĺ��� ������ ������ ���� � ���� ��� 
	cout << "������ " << vowel << "���̰�" << "������ " << conson << "���Դϴ�." << endl;
	
	return 0; 
 } 
