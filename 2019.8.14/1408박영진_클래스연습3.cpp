#include <iostream>
#include <string>

using namespace std;

class SMS
{
	private:
		string sender;
		string receiver;
		string text;
		
	public:
		
		SMS(string s, string r, string t)
		{
			sender = s;
			receiver = r;
			text = t;
		}
		
		print()
		{
			cout << "발신자: " << sender << "수신자: " << receiver << "내용: " << text << endl; 
		}
	
};

int main()
{
	SMS a{"010-1234-5678" , "010=1234-5679" , "C++공부는 잘되가나요?"};
	SMS b{"010-1234-5679" , "010=1234-5678" , "네, 문제 없네요."};
	
	cout << "문자메세지 #1" << endl; 
	a.print();
	cout << endl;
	cout << "문자메세지 #2" << endl;
	b.print();
	
	return 0; 
}
