#include <iostream>
#include <string>

using namespace std;

class Airplane
{
private:
	string name;
	int capacity;
	int speed;

public:

	Airplane()
	{
		name = "������� 350";
		capacity = 400;
		speed = 1000;
	}

	Airplane( string n, int c, int s)
	{
		name = n;
		capacity = c;
		speed = s;
	}

	~Airplane(){}

	void print()
	{
		cout << "������� �̸�: " << name << endl;
		cout << "������� �뷮: " << capacity << endl;
		cout << "������� �ӵ�: " << speed << " Km/h" << endl;
	}

};

int main()
{
	Airplane a{ "���� 787", 900, 300 };
	Airplane b;

	cout << "����� #1(�Ű� ������ �ִ°��)" << endl;
	a.print();

	cout << endl;
	
	cout << "����� #2(�Ű� ������ ���°��)" << endl;
	b.print();

	return 0;
}
