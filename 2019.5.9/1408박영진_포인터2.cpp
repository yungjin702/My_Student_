#include <stdio.h>

int main()
{
	char string[ ] = "Dreams come true!";
	
	printf("string 변수의 내용 = %s\n" , string);
	printf("string 변수의 주소 = %d\n" , &string);
	
	for( int i = 0; i < 10; i++)
	{
		char *ptr = &string[7 + i];
		printf("%c" , *ptr);	
	}
	
	printf("\n");
	
	for( int i = 16; i >= 0; i--)
	{
		char *ptr = &string[i];
		printf("%c" , *ptr);
	}
	
	printf("\n");
	
	char *ptr[6];
	
	for( int i = 0; i < 6; i++)
	{
		ptr[i] = &string[i];
	}
	
	*ptr[0] = 'P';
	*ptr[1] = 'e';
	*ptr[2] = 'a';
	*ptr[3] = 'c';
	*ptr[4] = 'e';
	*ptr[5] = 's';
	
	printf("%s" , string );
	
	return 0;
}
