#include <iostream>

using namespace std;

//hello�� �μ��� ���� ���� ����ϴ� �Լ� 
void sayHello ( int n = 1)
{
	for( int j = 0; j < n; j++ )
	{
		cout << "Hello" << endl;
	}
}

int main()
{
	int n = 0;
	
	sayHello(n);
	
	return 0;
}
