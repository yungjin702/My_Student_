#include <iostream>
#include <string>

using namespace std;

class Book
{
private:
	string name;
	string price;

public:
	Book() : name{ "null" }, price{ 0 } {}
	Book(string n, string p) : name{ n }, price{ p } {}

	void Input(string n, string p)
	{
		name = n;
		price = p;
	}


	void Print()
	{
		cout << "����: " << name << ",\t" << "����: " << price << endl;
	}
};

int main()
{
	Book books[10];

	for (Book& b : books)
	{
		string name;
		string price;

		getline(cin, name);
		getline(cin, price);

		b.Input(name, price);
	}

	cout << "�����ϰ� �ִ� å ����" << endl;
	cout << "==============================" << endl;

	for (Book& b : books)
	{
		b.Print();
	}

	cout << "==============================" << endl;

	system("pause");

	return 0;
}
