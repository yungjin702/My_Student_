#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <conio.h>

using namespace std;

bool compare(string a, string b)
{
	return a.front() < b.front();
}

int main()
{
	vector<string> arr;
	int input = 0;
	string word;

	while ((input = _getch()) != 27)
	{
		cout << "���ڿ��� �Է��ϼ��� : ";
		cin >> word;
		arr.push_back(word);
	}

	sort(arr.begin(), arr.end(), compare);

	for (auto& a : arr)
	{
		cout << a << endl;
	}

	system("pause");

	return 0;
}