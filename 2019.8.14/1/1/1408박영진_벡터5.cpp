#include <iostream>
#include <vector>
#include <conio.h>
#include <string>
#include <string.h>
#include <algorithm>

using namespace std;

class Contact
{
public:
	string name;
	string number;
	string address;

	Contact(string n, string nu) : name{n} , number{nu}, address{"NULL"} {}

	void GetNum()
	{
		cout << "전화번호: " << number;
	}

};

int main()
{
	vector<Contact> list;
	string name;
	string number;

	int input = 0;

	while ((input = _getch()) != 27)
	{
		cout << "이름을 입력하세요: ";
		cin >> name;
		cout << "전화번호를 입력하세요: ";
		cin >> number;

		list.push_back(Contact(name, number));
	}

	cout << "탐색하고 싶은 이름을 입력하세요: ";
	cin >> name;

	for (auto& a : list)
	{
		if (!name.compare(a.name))
		{
			a.GetNum();
		}
	}

	system("pause");

	return 0;
}
