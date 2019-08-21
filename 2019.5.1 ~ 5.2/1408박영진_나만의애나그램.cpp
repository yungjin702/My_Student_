#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

//문자열을 섞는 함수 선언  
void swap ( string &word , string compare, int length)
{
	char mix;
	int loc, loc1 = 0;

	while( word == compare)
	{
		for( int i = 0; i < length; i++)
		{
			loc = rand() % (length) + 0;
			loc1 = rand() % (length - 1) + 0;
		
			mix = word[loc];
			word[loc] = word[loc1];
			word[loc1] = mix;
		
		}
	}
		
}

int main()
{
	//시드값 설정 
	srand(time(0));
	
	//문자열의 길이, 사욜할 문자열의 위치를 나타낼 변수 선언 
	int length = 0;
	int loc = 0;
	
	//문자열 배열에 들어가있는 문자열중 랜덤으로 사용할 문자열의 위치를 변수에 저장 
	loc = rand() % 3 + 0;
	
	//단어장 
	string words[] = { "water", "fire", "milk" };
	
	//단어에 랜덤 문자열을 변수에 저장 
	string word = words;
	
	//사용자가 정답을 입력할 변수 선언 
	string input;
	
	//랜덤으로 받은 문자열의 길이를 변수에 저장 
	length = word.size();
	
	//단어열의 단어들을 섞는다.  
	swap( word , word, length);
	
	//섞인 문자열을 출력하여 사용자에게 맞추라고 출력 
	cout << word << " 는 어떤 단어가 스크램블된 걸까요?" << endl;
	cin >> input;
	
	//입력한 문자열이 정답과 다를 경우 출력하고 다시 입력받음 
	while( input != words[loc] )
	{
		cout << "틀렸습니다. 다시 맞추세요!" << endl;
		cin >> input;
	}	
	
	//입력한 문자열이 정답과 같을 경우 출력 
	if ( input == words[loc] )
	{
		cout << "정답입니다." << endl;
	}

	return 0;
}
