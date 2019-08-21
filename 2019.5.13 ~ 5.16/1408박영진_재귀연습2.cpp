#include <stdio.h>

int StarPrint( int n )
{
	printf("*");
	
	if( n == 1)
	{
		 return 1;
	}
	 
	return StarPrint( n - 1);
}

int StarRePrint( int n ,int n1)
{
	StarPrint(n1 + 1 - n);
	printf("\n");
	
	if( n == 1)
	{
		return 1;
	}
	
	return StarRePrint( n - 1 , n1);
}


int main()
{
	StarRePrint(10  , 10);
	
	return 0;	
}


