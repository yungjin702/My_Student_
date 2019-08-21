#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(NULL));
	int arr[100] = {0};
	int max = 0;
	 
	for( int &i : arr)
	{
		i = rand() % 100 + 1;
	} 
	
	for( int i : arr)
	{
		if( i > max)
		{
			max = i;
		}
	}
	
	std::cout << max << std::endl;
	
	return 0;
}
