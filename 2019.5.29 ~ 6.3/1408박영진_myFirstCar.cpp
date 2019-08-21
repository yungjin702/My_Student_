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
		
	cout << "\n" << "�ڵ����� ������ �����ϼ���: ";
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
		 
	cout << "\n" << "�ڵ����� Ÿ���� �����ϼ���: ";
	scanf("%d" , &select);
	type = types[--select]; 	
}

int main()
{
	Car mfc;
	mfc.SelectColor();
	mfc.SelectType();
	mfc.SetSpeed(80);
	
	cout << "\n����� " << mfc.type << "Ÿ�Կ� " << mfc.color << "���� ���� Ÿ�ô� ����!" << "\n";
	cout << "����� Ÿ�� �ִ� �ڵ����� ���� �ӵ��� " << mfc.speed << "�Դϴ�";  
	
	return 0; 
}
