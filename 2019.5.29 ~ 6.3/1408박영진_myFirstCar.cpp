#include <iostream>
#include <cstring>

using namespace std;

class Car
{
  public:
	string type;
	string color;
	int speed;
		
	void SelectColor();
	void SelectType();
	
	void SetSpeed( int s )
	{
		speed = s;
	}	
	
};

void Car::SelectColor()
{
	string colors[5] = { "Red" , "Yellow" , "Blue" , "White" , "Black" };
	int select = 0;
	
	for( int i = 0; i < 5; i++)
	{
		cout << i + 1 << ". " << colors[i] << "   ";
	}	
		
	cout << "\n" << "자동차의 색깔을 선택하세요: ";
	scanf("%d" , &select);
	color = colors[--select];
}

void Car::SelectType()
{
	string types[6] = { "Sports" , "Suv" , "Sedan" , "Truck" , "Car" , "Van" };
	int select = 0;
	 
	for( int i = 0; i < 6; i++)
	{
	cout << i + 1 << ". " << types[i] << " ";
	}
		 
	cout << "\n" << "자동차의 타입을 선택하세요: ";
	scanf("%d" , &select);
	type = types[--select]; 	
}

int main()
{
	Car mfc;
	mfc.SelectColor();
	mfc.SelectType();
	mfc.SetSpeed(80);
	
	cout << "\n당신은 " << mfc.type << "타입에 " << mfc.color << "색인 차를 타시는 군요!" << "\n";
	cout << "당신이 타고 있는 자동차의 현재 속도는 " << mfc.speed << "입니다";  
	
	return 0; 
}
