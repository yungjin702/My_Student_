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
			cout << "�߽���: " << sender << "������: " << receiver << "����: " << text << endl; 
		}
	
};

int main()
{
	SMS a{"010-1234-5678" , "010=1234-5679" , "C++���δ� �ߵǰ�����?"};
	SMS b{"010-1234-5679" , "010=1234-5678" , "��, ���� ���׿�."};
	
	cout << "���ڸ޼��� #1" << endl; 
	a.print();
	cout << endl;
	cout << "���ڸ޼��� #2" << endl;
	b.print();
	
	return 0; 
}
