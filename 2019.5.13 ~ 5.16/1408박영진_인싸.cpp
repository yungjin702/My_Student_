#include <iostream>

int main()
{
	//기호 상수 선언 
	const int human = 10;
	//초콜릿의 갯수를 담을 배열 선언 
	int chocolate[human] = {0};
	int ranking[human] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//초콜릿의 최대 갯수를 저장할 변수 
	int max = 0;
	//초콜릿을 가장 많이 받은 사람의 번호를 저장할 변수 
	int maxhuman = 0;
	int minhuman = 0;
	//사람의 위치를 나타낼 변수 
	int humans = 1; 
	
	//1번째 사람부터 차례대로 초콜릿을 받은 갯수를 입력 
	for( int &i : chocolate)
	{
		std::cout << "뺴뺴로 데이에 받은 초콜릿의 갯수: ";
		std::cin >> i;  
	}
	
	//가장 많이 받은 사람을 maxhuman에 저장 
	for( int i : chocolate)
	{
		if( i > max)
		{
			max = i;
			maxhuman =  humans;
		}
		humans++;
	}
	
	max = chocolate[0];
	minhuman = 1;
	humans = 1;
	
	//가장 적게 받은 사람을 minhuman에 저장 
	for( int i : chocolate)
	{
		 if( i < max)
		 {
		 	max = i;
		 	minhuman = humans;
		 }
		 humans++;
	}
	
	//가장 많이 받은 사람순을 정렬 
	for( int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			if( chocolate[j] < chocolate[i] )
			{
				chocolate[j] += chocolate[i];
				chocolate[i] = chocolate[j] - chocolate[i];
				chocolate[j] -= chocolate[i];
				
				ranking[j] += ranking[i];
				ranking[i] = ranking[j] - ranking[i];
				ranking[j] -= ranking[i];
			}
		}
	}
	
	
	
	//가장 많이 받은 사람을 출력 
	std::cout << "가장 많이 받은 사람은" << maxhuman << "번입니다. 당신은 인싸군요!!!" << "\n";
	std::cout << "가장 적게 받은 사람은" << minhuman << "번입니다. 당신은 인싸군요!!!" << "\n"; 
	
	std::cout << "가장 많이 받은 순으로 정렬" << "\n";
	for(int i : ranking)
	{
		std::cout << i << " ";
	}
	
	return 0; 
}
