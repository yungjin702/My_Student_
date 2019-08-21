#include <stdio.h>

int RePrint( int n )
{
	printf("%d	" , 101 - n);
	
	if( n == 1)
	{
		return 1;
	}
	
	return RePrint( n - 1); 
	
 } 
 
 int main()
 {
 	RePrint(100);
 	
 	return 0;
 }
