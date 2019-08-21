#include <stdio.h>

int MaxCommon( int n, int n1)
{
	int common = 2;
	
	while(1)
	{
		if( n % common == 0 && n1 % common == 0 )
		{
			n = n / common;
			n1 = n1 / common;
			break;
 		}
    	else
   		{
    		common += 1;
		}
		
		if( common > n || common > n1)
		{
			return 1;
		}
		
	}
	
	return common * MaxCommon( n , n1);
}

int main()
{
	printf("%d" , MaxCommon( 30, 15) );
	
	return 0;
}
