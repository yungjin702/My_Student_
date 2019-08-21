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
			cout << "제목: " << name << ",\t" << "가격: " << price << endl; 
		} 
};

int main()
{
	Book books[5] = {
		Book("반일 민족주의" , 18000),
		Book("설민석의 한국사 대모험" , 10800),
		Book("여행의 이유" , 12150),
		Book("90년생이 온다" , 12600),
		Book("유렵 도시 기행" , 14850) 
	};
	
	cout << "소장하고 있는 책 정보" << endl;
	cout << "==============================" << endl;
	
	for( Book& b : books)
	{
		b.Print();
	}
	
	cout << "==============================" << endl;
	
	return 0;
}
