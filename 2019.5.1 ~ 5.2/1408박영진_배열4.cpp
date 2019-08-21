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
				printf("학생 %d의 이름: " , i+ 1);
				gets(test[i][j]);
				continue;
			}
			
			if( j == 1)
			{
				printf("학생 %d의 학과: " , i+ 1);
				gets(test[i][j]);
				continue;
			}
			
			if( j == 2)
			{
				printf("학생 %d의 학번: " , i+ 1);
				gets(test[i][j]);
				continue;
			}

		}
		printf("\n");
	}

	for( int i = 0; i < 2; i++)
	{
		printf("학생%d\n" , i + 1 );
		 
		for( int j = 0; j < 3; j++)
		{
			printf("\t%s\n" , test[i][j]);
		}
		
	}
	
	return 0;
}
