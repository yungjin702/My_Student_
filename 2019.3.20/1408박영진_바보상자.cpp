#include <iostream>

using namespace std;

int main()
{
	//���� ���� 
	int l, w, h;
	
	//���� , �ʺ�, ���� �Է�  
	cout << "����: ";
	cin >> l;
	cout << "�ʺ�: ";
	cin >> w;
	cout << "����: ";
	cin >> h;
	
	//����, ǥ���� ��� 
	cout << "������ ���Ǵ� " << l * w * h << "�̰� " << "ǥ������ " << ( l * h * 4) + ( l * w * 2) << "�Դϴ�."; 
	
	return 0;
 } 
