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
	cout << "����� ���̴�? : ";
	cin >> age;
	cout << "����� �̸���? : ";
	cin >> name;
	cout << "����� ��� ������? : ";
	cin >> country; 
}

void Person::Eating()
{
	cout << "���� ���� �Դ´�. ���̰� ���ִ�." << endl;
}

void Person::Introduce()
{
	cout << "���� " << age << "���̰� " << country << "���� ��� " << name << "�̶�� ��" << endl; 
}

int main()
{
	Person My;
	My.MyInfo();
	My.Introduce();
	
	return 0;
}
