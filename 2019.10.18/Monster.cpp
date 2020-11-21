#include "Monster.h"

void Monster::move(Screen &screen)
{
	int xmove = 0;
	int ymove = 0;

	setItem(screen);

	if (x < itemX)
	{
		if (y < itemY)
		{
			xmove += 1;
			ymove += 1;
		}
		else if (y == itemY)
		{
			xmove += 1;
		}
		else
		{
			xmove += 1;
			ymove -= 1;
		}
	}

	else if (x == itemX)
	{
		if (y < itemY)
		{
			ymove += 1;
		}
		else
		{
			ymove -= 1;
		}
	}

	else
	{
		if (y < itemY)
		{
			xmove -= 1;
			ymove += 1;
		}
		else if (y == itemY)
		{
			xmove -= 1;
		}
		else
		{
			xmove -= 1;
			ymove -= 1;
		}
	}

	canMove(xmove, ymove, screen);

	x += xmove;
	y += ymove;
	
}

void Monster::canMove(int &xmove, int &ymove, Screen &screen)
{
	if (screen.nowThis(x + xmove, y + ymove) != "��" && screen.nowThis(x + xmove, y + ymove) != "  ")
	{
		xmove = rand() % 3 - 1;
		ymove = rand() % 3 - 1;
	}

	if (x + xmove >= Xmax)
	{
		xmove = 0;
	}
	if (x + xmove < 0)
	{
		xmove = 0;
	}
	if (y + ymove >= Ymax)
	{
		ymove = 0;
	}
	if (y + ymove < 0)
	{
		ymove = 0;
	}

}


void Monster::setItem(Screen & screen)
{
	int intX = 0;
	int intY = 0;

	if (screen.nowThis(itemX, itemY) == "��")
	{
		
	}
	else 
	{
		while (screen.nowThis(intX, intY) != "��")
		{
			intX = rand() % Xmax;
			intY = rand() % Ymax;
		}

		itemX = intX;
		itemY = intY;
	}

}

void Monster::getItem(Screen &screen)
{
	//�̵��� ��ġ�� �������� �ִٸ�
	if (screen.nowThis(x, y) == "��")
	{
		//�����ۼ� �߰�
		nItem += 1;

		// �������� 8��ŭ ȸ������ �� 100�̻��� �Ѿ��
		if (nEnergy + 8 >= 100)
		{
			nEnergy = 100;
		}
		else
		{
			nEnergy += 8;
		}
	}
	//�������� ���ٸ�
	else
	{
		// �������� 3��ŭ �Ҿ��� �� 0�̸��� �Ǹ�
		if (nEnergy - 3 < 0)
		{
			nEnergy = 0;
		}
		else
		{
			nEnergy -= 2;
		}
	}
}

bool Monster::isItem(Screen & screen)
{
	if (screen.nowThis(x, y) == "��")
	{
		return true;
	}

	return false;
}
