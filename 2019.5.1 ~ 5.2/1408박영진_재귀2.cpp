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
	printf("1���� 10������ �� %d " , hap(10));
	
	return 0;	
}
