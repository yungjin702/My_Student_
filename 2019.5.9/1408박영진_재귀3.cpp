#include <stdio.h>

int fibonachi( int n)
{
	if( n <= 1)
	{
		return 1;
	}
	
	return fibonachi( n - 1) + fibonachi( n - 2);
}


int main()
{
	printf("�Ǻ���ġ 5��° ����: %d" , fibonachi(10));
	
	return 0;
} 


