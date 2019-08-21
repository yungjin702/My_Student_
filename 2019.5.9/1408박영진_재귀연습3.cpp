#include <stdio.h>

int Print( char text , int n)
{
	printf("%c" , text);
	
	if( n == 1)
	{
		return 1;
	}
	
	return Print( text , n - 1 );
}

int main()
{
	Print( '@' , 10);
	
	return 0;
}
