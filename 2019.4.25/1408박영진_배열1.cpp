#include <stdio.h>

int main()
{
	int score[3] = { 91, 86, 97 };
	char grade[3] = { 'A' , 'B', 'C' };
	
	for( int i = 0; i < 3; i++)
	{
		printf("%d학년 : 총점 = %d , 등급 : %c\n" , i+1 , score[i] , grade[i] );
	}
	
	return 0;
}
