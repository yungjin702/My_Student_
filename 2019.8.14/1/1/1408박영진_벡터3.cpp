#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;

int main(void)
{
	vector<int> arr;
	int size = arr.size();
	int max = 0;
	int min = 0;
	int input = 0;

	while ((input = _getch()) != 27)
	{
		cout << "������ �Է��ϼ���(�׸��Ϸ��� esc): ";
		cin >> input;
		arr.push_back(input);
	}

	min = arr.front();

	for (int& a : arr)
	{
		if (max < a)
		{
			max = a;
		}
		if (min > a)
		{
			min = a;
		}
	}

	cout << "�ִ밪: " << max << "\t�ּҰ�: " << min << endl;

	system("pause");

	return 0;
}