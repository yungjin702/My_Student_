#include <iostream>

using namespace std;

int arr[10][10];

int main()
{
	
	for ( int i =  0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			arr[i][j] = (10 * i ) + j + 1;
		}
		
	}
	
	for ( int i =  0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%d " , arr[i][j]);
		}
		printf("\n");
	}
	
}
