#include <stdio.h>

int main()
{
	int gugudan[9] = {0};
	int n = 0;
	
	printf("1~9�� ������ �Է��ϼ��� : ");
	scanf("%d" , &n);
	
	for( int i = 0; i < 9; i++)
	{
		gugudan[i] = n * ( i + 1 );
	}
	
	for( int i = 0; i < 9; i++)
	{
		printf(" %d * %d = %d\n" , n , i + 1 , gugudan[i]);
	}
	
	return 0;
 } 
