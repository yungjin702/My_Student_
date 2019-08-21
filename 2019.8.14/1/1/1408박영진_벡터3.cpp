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
		cout << "정수를 입력하세요(그만하려면 esc): ";
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

	cout << "최대값: " << max << "\t최소값: " << min << endl;

	system("pause");

	return 0;
}