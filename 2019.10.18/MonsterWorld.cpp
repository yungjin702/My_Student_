#include "MonsterWorld.h"

//몬스터 월드의 메인
void MonsterWorld::play(int wait, int turn)
{
	//현재 몬스터의 턴
	int loc = 0;

	//화면 초기 상태 만들기
	for (VariousMonster &monster : monsters)
	{
		monster.draw(mainMap);
		mainMap.gotoxy(Xmax / 3, Ymax + 5 + loc);
		monster.print();
		loc += 1;

		if (monster.getName() == "유신몬")
		{
			ys = true;
		}
	}

	//아이템을 먹지 않았거나 제한된 턴을 넘기지 않았을 때 while문
	while (!isOver() && nTurn != turn + 1)
	{
		mainMap.gotoxy(Xmax / 3, Ymax + 2);

		if (ys)
		{
			cout << "전체 이동 횟수: 유신몬";
		}
		else
		{
			cout << "전체 이동 횟수: " << nTurn;
		}
		

		for (VariousMonster &monster : monsters)
		{
			//만약 몬스터의 에너지가 0이라면 아무런 행동X
			if (monster.getEnergy() == 0)
			{
				
			}
			else
			{
				if (nowItem != 0)
				{
					//순서 1.지금 위치 지우기 / 2.몬스터 움직이기 
					mainMap.clear(monster.getX(), monster.getY());
					monster.variousMove(mainMap);
				}

				// 3. 이동하는 위치에 아이템이 있다면 맵에 남아있는 아이템을 하나 없애면서 먹는다.
				if (monster.isItem(mainMap))
				{
					nowItem -= 1;
				}
				monster.getItem(mainMap);

				// 현재 남아있는 아이템 수 출력
				mainMap.eraser(Ymax + 3);
				mainMap.gotoxy(Xmax /3, Ymax + 3);

				if (ys)
				{
					cout << "남은 아이템 수: 유신몬";
				}
				else
				{
					cout << "남은 아이템 수: " << nowItem;
				}

				// 현재 몬스터의 상태 표시
				mainMap.eraser(Ymax + 5 + loc % monsters.size());
				mainMap.gotoxy(Xmax / 3, Ymax + 5 + loc % monsters.size());
				if (ys)
				{
					cout << "유신몬";
				}
				else
				{
					monster.print();
				}
				
				// 맵에 몬스터가 이동한 위치에 몬스터 그리기
				monster.draw(mainMap);
			}
			loc += 1;
		}

		//턴수 올리기
		nTurn += 1;

		if (isAllDead())
		{
			mainMap.gotoxy(Xmax / 3, Ymax + 6 + monsters.size());
			cout << "모든 몬스터들이 죽었습니다.";
			break;
		}

		Sleep(wait * 100);
	}

	mainMap.gotoxy(0, Ymax + 8 + monsters.size());
}

//모든 몬스터가 죽었는지 확인하는 함수
bool MonsterWorld::isAllDead()
{
	int chack = 0;
	for (Monster &monster : monsters)
	{
		if (monster.getEnergy() == 0)
		{
			chack += 1;
		}
		else
		{
			break;
		}
	}

	//죽은 몬스터의 수가 전체 몬스터의 수와 같은지 확인
	return chack == monsters.size();
}

