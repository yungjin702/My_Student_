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
		cout << "제목: " << name << ",\t" << "가격: " << price << endl;
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

	cout << "소장하고 있는 책 정보" << endl;
	cout << "==============================" << endl;

	for (Book& b : books)
	{
		b.Print();
	}

	cout << "==============================" << endl;

	system("pause");

	return 0;
}
