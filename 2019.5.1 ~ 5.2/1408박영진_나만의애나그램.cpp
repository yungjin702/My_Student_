#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

//���ڿ��� ���� �Լ� ����  
void swap ( string &word , string compare, int length)
{
	char mix;
	int loc, loc1 = 0;

	while( word == compare)
	{
		for( int i = 0; i < length; i++)
		{
			loc = rand() % (length) + 0;
			loc1 = rand() % (length - 1) + 0;
		
			mix = word[loc];
			word[loc] = word[loc1];
			word[loc1] = mix;
		
		}
	}
		
}

int main()
{
	//�õ尪 ���� 
	srand(time(0));
	
	//���ڿ��� ����, ����� ���ڿ��� ��ġ�� ��Ÿ�� ���� ���� 
	int length = 0;
	int loc = 0;
	
	//���ڿ� �迭�� ���ִ� ���ڿ��� �������� ����� ���ڿ��� ��ġ�� ������ ���� 
	loc = rand() % 3 + 0;
	
	//�ܾ��� 
	string words[] = { "water", "fire", "milk" };
	
	//�ܾ ���� ���ڿ��� ������ ���� 
	string word = words;
	
	//����ڰ� ������ �Է��� ���� ���� 
	string input;
	
	//�������� ���� ���ڿ��� ���̸� ������ ���� 
	length = word.size();
	
	//�ܾ�� �ܾ���� ���´�.  
	swap( word , word, length);
	
	//���� ���ڿ��� ����Ͽ� ����ڿ��� ���߶�� ��� 
	cout << word << " �� � �ܾ ��ũ����� �ɱ��?" << endl;
	cin >> input;
	
	//�Է��� ���ڿ��� ����� �ٸ� ��� ����ϰ� �ٽ� �Է¹��� 
	while( input != words[loc] )
	{
		cout << "Ʋ�Ƚ��ϴ�. �ٽ� ���߼���!" << endl;
		cin >> input;
	}	
	
	//�Է��� ���ڿ��� ����� ���� ��� ��� 
	if ( input == words[loc] )
	{
		cout << "�����Դϴ�." << endl;
	}

	return 0;
}
