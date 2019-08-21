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
			title = "타이타닉";
			director = "제임스 카메론";
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
			cout << "영화 제목: " << title << endl;
			cout << "영화 감독: " << director << endl;
			cout << "영화 평점: " << rating << endl;  
		}

};

int main()
{
	Movie a;
	Movie b{"지오스톰" , "딘 데블린" , 8.34};
	
	cout << "영화 #1" << endl;
	a.print();
	cout << endl;
	cout << "영화 #2" << endl;
	b.print();
	
	return 0; 
}
