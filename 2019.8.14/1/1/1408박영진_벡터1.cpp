#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> arr;
	int input = 0;
	int sum = 0;
	int size = 0;

	cout << "학생들의 점수를 입력하세요." << endl;

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

	cout << "학생들의 평균은 " << sum / size << "점 입니다." << endl;

	system("pause");

	return 0;
}