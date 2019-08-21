#include <iostream>

using namespace std;

int main()
{
	//배열 메모리룰 동적 할당 
	char *arr = new char[12];
	
	//A ~ L 까지 배열에 전달 
	for(int i = 0; i < 12; i++)
	{
		arr[i] = 65 + i ;
	}
	// A ~ L 까지 출력 
	for(int i = 0; i < 12; i++)
	{
		cout << arr[i] << endl;
	}
	
	//동적 할당 받은 배열을 해제 
	delete[] arr;
	
	return 0;
}
