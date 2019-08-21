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
		name = "에어버스 350";
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
		cout << "비행기의 이름: " << name << endl;
		cout << "비행기의 용량: " << capacity << endl;
		cout << "비행기의 속도: " << speed << " Km/h" << endl;
	}

};

int main()
{
	Airplane a{ "보잉 787", 900, 300 };
	Airplane b;

	cout << "비행기 #1(매개 변수가 있는경우)" << endl;
	a.print();

	cout << endl;
	
	cout << "비행기 #2(매개 변수가 없는경우)" << endl;
	b.print();

	return 0;
}
