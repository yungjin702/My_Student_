#include <stdio.h>

int main()
{
	int arr[3][4] = { {90, 85, 95, 80 } , {75, 95, 80, 90} , {90, 80, 70, 60}};
	
	printf("3행 4열짜리 2차원 배열\n\n");
	
	for( int i = 0; i < 3; i++)
	{
		for( int j = 0; j < 4; j++)
		{
			printf(" %d" , arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
 } 
