#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> arr;
	int input = 0;
	int sum = 0;
	int size = 0;

	cout << "�л����� ������ �Է��ϼ���." << endl;

	while (input != -1)
	{
		cin >> input;
		arr.push_back(input);
	}
	
	arr.pop_back();

	size = arr.size();

	for (auto& a : arr)
	{
		sum += a;
	}

	cout << "�л����� ����� " << sum / size << "�� �Դϴ�." << endl;

	system("pause");

	return 0;
}