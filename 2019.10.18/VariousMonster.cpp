#include "VariousMonster.h"

void VariousMonster::variousMove(Screen & screen)
{
	//만약 몬스터 이름이 강시라면 상하좌우로만 움직이게함
	if (name == "강시")
	{
		int xmove = 0;
		int ymove = 0;

		setItem(screen);

		if (x < itemX)
		{
			xmove += 1;
		}
		else if (x == itemX)
		{
			if (y < itemY)
			{
				ymove += 1;
			}
			else if (y > itemY)
			{
				ymove -= 1;
			}
		}
		else if (x > itemX)
		{
			xmove -= 1;
		}

		canMove(xmove, ymove, screen);

		x += xmove;
		y += ymove;
	}
	//만약 이름이 귀신이라면 맵을 순간이동함
	else if (name == "귀신")
	{
		x = rand() % (Xmax - 1);
		y = rand() % (Ymax - 1);
	} 
	//강시, 귀신이 아니면 그냥 움직임
	else
	{
		move(screen);
	}
}

void VariousMonster::getItem(Screen &screen)
{
	//이동할 위치에 아이템이 있다면
	if (screen.nowThis(x, y) == "■")
	{
		//아이템수 추가
		nItem += 1;

		//만약 몬스터 이름이 정령이라면 아이템을 하나 더 가진다
		if (name == "정령")
		{
			nItem += 1;
		}

		// 에너지를 8만큼 회복했을 때 100이상을 넘어가면
		if (nEnergy + 8 >= 100)
		{
			nEnergy = 100;
		}
		else
		{
			nEnergy += 8;
		}
	}
	//아이템이 없다면
	else
	{
		// 에너지를 1만큼 잃었을 때 0미만이 되면
		if (nEnergy - 1 < 0)
		{
			nEnergy = 0;
		}
		else
		{
			nEnergy -= 2;
		}
	}
}


