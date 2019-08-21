#include <iostream>

using namespace std;

int main()
{
	//변수 선언 
	int l, w, h;
	
	//길이 , 너비, 높이 입력  
	cout << "길이: ";
	cin >> l;
	cout << "너비: ";
	cin >> w;
	cout << "높이: ";
	cin >> h;
	
	//부피, 표면적 출력 
	cout << "상자의 부피는 " << l * w * h << "이고 " << "표면적은 " << ( l * h * 4) + ( l * w * 2) << "입니다."; 
	
	return 0;
 } 
