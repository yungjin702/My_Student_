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
	printf("피보나치 5번째 숫자: %d" , fibonachi(10));
	
	return 0;
} 


