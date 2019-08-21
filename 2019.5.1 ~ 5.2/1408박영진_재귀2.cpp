#include <stdio.h>

int hap( int n)
{
	if( n <= 1)
	{
		return 1;
	}
	
	return n + hap( n - 1);
}


int main()
{
	printf("1부터 10까지의 합 %d " , hap(10));
	
	return 0;	
}
