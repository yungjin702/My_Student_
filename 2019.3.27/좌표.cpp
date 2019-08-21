#include <iostream>

using namespace std;

int loc [101][101] = {0 };

int main()
{
	int input , i ,j;
	int area = 0;
	int x, y;
	scanf("%d" , &input);
	
	
	                                                                                                   
	for( i = 0; i < input; i++)
	{
	 	scanf("%d %d" , &x, &y );
	 	
		for( j = x; j < x + 10 && j <= 100; j++)
		{
			for(int k = y; k < y + 10 && k <= 100; k++)
			{
				loc[j][k] = 1;
			}
		 } 
	}

	for ( i = 0; i <= 100; i++)
	{
		for( j = 0; j <= 100; j++)
		{
			if( loc[i][j] == 1)
			{
				area += 1;
				
			}
		}
	}
	
	printf("%d" , area);
	
	return 0;
	
}

