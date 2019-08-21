#include <iostream>
#include <vector>
#include <string>
#include <conio.h>

using namespace std;

class Movie
{
public:
	string name;
	string director;
	string actor;
	double star;

	Movie() : name{ "null" }, director{ "null" }, actor{ "null" }, star{ 0 } {}
	Movie( string n, double s) : name{n}, director{ "null" }, actor{ "null" }, star{ s } {}
	Movie(string n, string d, string a, double s) : name{ n }, director{d}, actor{a}, star{s} {}

	void print()
	{
		cout << "영화제목: " << name << " 평점: " << star << " 감독: " << director << " 주연배우: " << actor << endl;
	}
};


int main(void)
{
	vector<Movie> movie;
	string name;
	int star;
	int input = 0; 

	while (input != 27)
	{
		cin >> name;
		cin >> star;

		movie.push_back(Movie(name, star));

		input = _getch();
	}

	for (auto& a : movie)
	{
		a.print();
	}
	
	system("pause");

	return 0;
}