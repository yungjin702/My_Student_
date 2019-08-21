#include <iostream>
#include <cstring>

using namespace std;

class Person
{
	public:
		int age;
		string name;
		string country;
		
		void MyInfo();
		void Eating();
		void Introduce();
};

void Person::MyInfo()
{
	cout << "당신의 나이는? : ";
	cin >> age;
	cout << "당신의 이름은? : ";
	cin >> name;
	cout << "당신이 사는 지역은? : ";
	cin >> country; 
}

void Person::Eating()
{
	cout << "나는 밥을 먹는다. 아이고 맛있다." << endl;
}

void Person::Introduce()
{
	cout << "나는 " << age << "살이고 " << country << "에서 사는 " << name << "이라고 해" << endl; 
}

int main()
{
	Person My;
	My.MyInfo();
	My.Introduce();
	
	return 0;
}
