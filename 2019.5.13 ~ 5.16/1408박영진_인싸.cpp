#include <iostream>

int main()
{
	//��ȣ ��� ���� 
	const int human = 10;
	//���ݸ��� ������ ���� �迭 ���� 
	int chocolate[human] = {0};
	int ranking[human] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//���ݸ��� �ִ� ������ ������ ���� 
	int max = 0;
	//���ݸ��� ���� ���� ���� ����� ��ȣ�� ������ ���� 
	int maxhuman = 0;
	int minhuman = 0;
	//����� ��ġ�� ��Ÿ�� ���� 
	int humans = 1; 
	
	//1��° ������� ���ʴ�� ���ݸ��� ���� ������ �Է� 
	for( int &i : chocolate)
	{
		std::cout << "������ ���̿� ���� ���ݸ��� ����: ";
		std::cin >> i;  
	}
	
	//���� ���� ���� ����� maxhuman�� ���� 
	for( int i : chocolate)
	{
		if( i > max)
		{
			max = i;
			maxhuman =  humans;
		}
		humans++;
	}
	
	max = chocolate[0];
	minhuman = 1;
	humans = 1;
	
	//���� ���� ���� ����� minhuman�� ���� 
	for( int i : chocolate)
	{
		 if( i < max)
		 {
		 	max = i;
		 	minhuman = humans;
		 }
		 humans++;
	}
	
	//���� ���� ���� ������� ���� 
	for( int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			if( chocolate[j] < chocolate[i] )
			{
				chocolate[j] += chocolate[i];
				chocolate[i] = chocolate[j] - chocolate[i];
				chocolate[j] -= chocolate[i];
				
				ranking[j] += ranking[i];
				ranking[i] = ranking[j] - ranking[i];
				ranking[j] -= ranking[i];
			}
		}
	}
	
	
	
	//���� ���� ���� ����� ��� 
	std::cout << "���� ���� ���� �����" << maxhuman << "���Դϴ�. ����� �να���!!!" << "\n";
	std::cout << "���� ���� ���� �����" << minhuman << "���Դϴ�. ����� �να���!!!" << "\n"; 
	
	std::cout << "���� ���� ���� ������ ����" << "\n";
	for(int i : ranking)
	{
		std::cout << i << " ";
	}
	
	return 0; 
}
