#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	//시드값 설정 
	srand(time(0));
	
	//변수 선언 
	int length, loc, chack, turn = 0;
	
	//랜덤으로 문자열을 받을 문자열의 위치 저장 
	loc = rand() % 10 + 0;
	
	//단어장 
	string words[] = { "water", "fire", "milk", "house", "ski", "youtube", "apple", "fast", "slow", "lower" };
	
	//랜덤으로 받은 문자열을 저장 
	string word = words[loc];
	
	//단어룰 입력받을 변수 선언 
	char input;
	
	//랜덤으로 입력 받은 문자열의 길이를 저장 
	length = word.size();
	
	//사용자가 입력한 단어가 문자열의 들어가는 단어인지 확인하는 배열 선언 
	int chack1[length] = {0};
	
	//문자열의 길이만큼 _을 출력 
	for( int i = 0; i < length; i++)
	{
		cout << "_" ;
	}
	 
	cout << endl << "무슨 단어 일까요? 글자를 입력하세요: ";
	
	//문자열의 길이만큼 맞춘 단어가 다를 경우 
	while ( chack != length )
	{
		//단어를 입력받고 시도한 횟수을 1씩 올림 
		cin >> input;
		++turn;
		
		//입력받은 단어가 랜덤으로 받은 문자열의 단어에 들어있는지 확인 
		for( int i = 0; i < length; i++)
		{
			//만약 입력한 단어가 문자열의 단어에 들어있다면 
			if( input == word[i])
			{
				//이전에 맞춘 단어라면 패스 
				if( chack1[i] == 1)
				{
					break;
				}
				
				//문자열의 위치와 같은 위치에 1을 저장 
				chack1[i] = 1;
				//맞춘 단어를 1 씩 올림 
				++chack; 
			}
			
		}
		
		//맞춘 단어는 출력하고 맞추지 못한 단어는 _로 출력 
		for( int i = 0; i < length; i++)
		{
			if( chack1[i] == 1)
			{
				cout << word[i];
			}
			
			else
			{
				cout << "_";
			}
			
		}
		
		//만약 시도한 횟수가 15번이라면 맞추지 못했다고 출력 후 while문을 빠져나감 
		if( turn > 15)
		{
			cout << endl << "15번 시도하셨지만 맞추지 못하셨습니다 ㅠㅠ." << endl;
			break; 
		}
		
		//아직 이 문자열의 들어가는 단어를 다 찾지 못했으면 출력 
		if( chack != length)
		{
			cout << endl << "무슨 단어 일까요? 글자를 입력하세요: ";
		}
		
	}

	//문자열에 들어가는 단어를 다 찾으면 출력 
	if ( chack == length)
	{
		cout << endl << "성공! 축하합니다. 단어를 맞추셨네요~ ^^" << endl; 
	} 
	
	return 0;
}
