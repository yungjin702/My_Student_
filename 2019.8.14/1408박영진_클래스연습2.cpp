#include <iostream>
#include <string>

using namespace std;

class Movie
{
	private:
		string title;
		string director;
		double rating;
		
	public:
		
		Movie()
		{
			title = "Ÿ��Ÿ��";
			director = "���ӽ� ī�޷�";
			rating = 9.5; 
		}
		
		Movie( string t , string d, double r)
		{
			title = t;
			director = d;
			rating = r;
		}
		
		void print()
		{
			cout << "��ȭ ����: " << title << endl;
			cout << "��ȭ ����: " << director << endl;
			cout << "��ȭ ����: " << rating << endl;  
		}

};

int main()
{
	Movie a;
	Movie b{"��������" , "�� ����" , 8.34};
	
	cout << "��ȭ #1" << endl;
	a.print();
	cout << endl;
	cout << "��ȭ #2" << endl;
	b.print();
	
	return 0; 
}
