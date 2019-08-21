#include <iostream>

using namespace std;

int arr[10][10];

int main()
{
	int i , j;
	
	for ( i = 0; i < 10; i++ )
	{
		for( j = 0; j < 10; j++)
		{
			arr[i][j] = (10 * i) + j + 1; 
	    }
	}
	
	for ( i = 0; i < 10; i++)
	{
		for( j = 0; j < 10; j++)
		{
			printf("%d" , 1);
		}
		printf("\n");
	}

	return 0;

}
