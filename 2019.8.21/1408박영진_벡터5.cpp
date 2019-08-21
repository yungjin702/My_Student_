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
		cout << "��ȭ��ȣ: " << number;
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
		cout << "�̸��� �Է��ϼ���: ";
		cin >> name;
		cout << "��ȭ��ȣ�� �Է��ϼ���: ";
		cin >> number;

		list.push_back(Contact(name, number));
	}

	cout << "Ž���ϰ� ���� �̸��� �Է��ϼ���: ";
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
