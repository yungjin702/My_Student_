#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int length[2];\
	int hyp; 
	
	cout << "ù ���� ���� ����: ";
	cin >> length[0];
	cout << "�� ���� ���� ����: ";
	cin >> length[1];
	
	hyp = sqrt(pow(length[0] , 2) + pow(length[1] , 2) );
	
	cout << "������ ���̴� " << hyp << "�Դϴ�.";
}
