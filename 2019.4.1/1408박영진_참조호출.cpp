#include <iostream>

using namespace std;

void TestFunc(int &rParam)
{
	rParam = 100;
}

int main()
{
	//변수 선언 
	int nData = 0;
	
	TestFunc(nData); // 참조 원본이 아님 따라서 &는 사용하지 않는다. 
	cout << nData << endl;
	
	return 0;
}
