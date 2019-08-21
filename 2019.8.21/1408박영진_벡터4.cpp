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
		cout << "문자열을 입력하세요 : ";
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