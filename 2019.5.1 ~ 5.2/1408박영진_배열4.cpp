#include <stdio.h>

int main()
{
	char test [2][3][50] = { 0};
	
	for( int i = 0; i < 2; i++)
	{
		for( int j = 0; j < 3; j++)
		{
			if( j == 0)
			{
				printf("�л� %d�� �̸�: " , i+ 1);
				gets(test[i][j]);
				continue;
			}
			
			if( j == 1)
			{
				printf("�л� %d�� �а�: " , i+ 1);
				gets(test[i][j]);
				continue;
			}
			
			if( j == 2)
			{
				printf("�л� %d�� �й�: " , i+ 1);
				gets(test[i][j]);
				continue;
			}

		}
		printf("\n");
	}

	for( int i = 0; i < 2; i++)
	{
		printf("�л�%d\n" , i + 1 );
		 
		for( int j = 0; j < 3; j++)
		{
			printf("\t%s\n" , test[i][j]);
		}
		
	}
	
	return 0;
}
