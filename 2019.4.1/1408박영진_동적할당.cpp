#include <iostream>

using namespace std;

int main()
{
	//�迭 �޸𸮷� ���� �Ҵ� 
	char *arr = new char[12];
	
	//A ~ L ���� �迭�� ���� 
	for(int i = 0; i < 12; i++)
	{
		arr[i] = 65 + i ;
	}
	// A ~ L ���� ��� 
	for(int i = 0; i < 12; i++)
	{
		cout << arr[i] << endl;
	}
	
	//���� �Ҵ� ���� �迭�� ���� 
	delete[] arr;
	
	return 0;
}
