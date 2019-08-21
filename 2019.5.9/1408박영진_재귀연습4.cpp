#include <stdio.h>
#include <string.h>

int TurnOver( char str[], int length )
{
	printf("%c" , str[length-1]);
	
	if( length == 1)
	{
		return 1;
	}
	
	return TurnOver( str, length-1);
}

int main()
{
	char str[10] = {0};
	int length = 0;
	
	scanf("%s" , str);
	length = strlen(str);
	
	TurnOver( str , length);
	
	return 0;
}
