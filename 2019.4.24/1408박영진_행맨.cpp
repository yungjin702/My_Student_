#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	//�õ尪 ���� 
	srand(time(0));
	
	//���� ���� 
	int length, loc, chack, turn = 0;
	
	//�������� ���ڿ��� ���� ���ڿ��� ��ġ ���� 
	loc = rand() % 10 + 0;
	
	//�ܾ��� 
	string words[] = { "water", "fire", "milk", "house", "ski", "youtube", "apple", "fast", "slow", "lower" };
	
	//�������� ���� ���ڿ��� ���� 
	string word = words[loc];
	
	//�ܾ�� �Է¹��� ���� ���� 
	char input;
	
	//�������� �Է� ���� ���ڿ��� ���̸� ���� 
	length = word.size();
	
	//����ڰ� �Է��� �ܾ ���ڿ��� ���� �ܾ����� Ȯ���ϴ� �迭 ���� 
	int chack1[length] = {0};
	
	//���ڿ��� ���̸�ŭ _�� ��� 
	for( int i = 0; i < length; i++)
	{
		cout << "_" ;
	}
	 
	cout << endl << "���� �ܾ� �ϱ��? ���ڸ� �Է��ϼ���: ";
	
	//���ڿ��� ���̸�ŭ ���� �ܾ �ٸ� ��� 
	while ( chack != length )
	{
		//�ܾ �Է¹ް� �õ��� Ƚ���� 1�� �ø� 
		cin >> input;
		++turn;
		
		//�Է¹��� �ܾ �������� ���� ���ڿ��� �ܾ ����ִ��� Ȯ�� 
		for( int i = 0; i < length; i++)
		{
			//���� �Է��� �ܾ ���ڿ��� �ܾ ����ִٸ� 
			if( input == word[i])
			{
				//������ ���� �ܾ��� �н� 
				if( chack1[i] == 1)
				{
					break;
				}
				
				//���ڿ��� ��ġ�� ���� ��ġ�� 1�� ���� 
				chack1[i] = 1;
				//���� �ܾ 1 �� �ø� 
				++chack; 
			}
			
		}
		
		//���� �ܾ�� ����ϰ� ������ ���� �ܾ�� _�� ��� 
		for( int i = 0; i < length; i++)
		{
			if( chack1[i] == 1)
			{
				cout << word[i];
			}
			
			else
			{
				cout << "_";
			}
			
		}
		
		//���� �õ��� Ƚ���� 15���̶�� ������ ���ߴٰ� ��� �� while���� �������� 
		if( turn > 15)
		{
			cout << endl << "15�� �õ��ϼ����� ������ ���ϼ̽��ϴ� �Ф�." << endl;
			break; 
		}
		
		//���� �� ���ڿ��� ���� �ܾ �� ã�� �������� ��� 
		if( chack != length)
		{
			cout << endl << "���� �ܾ� �ϱ��? ���ڸ� �Է��ϼ���: ";
		}
		
	}

	//���ڿ��� ���� �ܾ �� ã���� ��� 
	if ( chack == length)
	{
		cout << endl << "����! �����մϴ�. �ܾ ���߼̳׿�~ ^^" << endl; 
	} 
	
	return 0;
}
