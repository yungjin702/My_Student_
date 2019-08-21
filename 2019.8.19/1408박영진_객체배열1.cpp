#include <iostream>
#include <string>

using namespace std;

class Book
{
	private:
		string name;
		int price;
		
	public:
		Book() : name{"null"}, price{0} {}
		Book(string n, int p) : name{n}, price{p} {}
		
		void Print()
		{
			cout << "����: " << name << ",\t" << "����: " << price << endl; 
		} 
};

int main()
{
	Book books[5] = {
		Book("���� ��������" , 18000),
		Book("���μ��� �ѱ��� �����" , 10800),
		Book("������ ����" , 12150),
		Book("90����� �´�" , 12600),
		Book("���� ���� ����" , 14850) 
	};
	
	cout << "�����ϰ� �ִ� å ����" << endl;
	cout << "==============================" << endl;
	
	for( Book& b : books)
	{
		b.Print();
	}
	
	cout << "==============================" << endl;
	
	return 0;
}
