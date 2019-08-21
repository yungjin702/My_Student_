#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	int number = rand()% 25 + 1;
	
	cout << number << endl;
	
	return 0;
}
