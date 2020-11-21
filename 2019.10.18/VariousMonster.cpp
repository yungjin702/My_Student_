#include "VariousMonster.h"

void VariousMonster::variousMove(Screen & screen)
{
	//���� ���� �̸��� ���ö�� �����¿�θ� �����̰���
	if (name == "����")
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
	//���� �̸��� �ͽ��̶�� ���� �����̵���
	else if (name == "�ͽ�")
	{
		x = rand() % (Xmax - 1);
		y = rand() % (Ymax - 1);
	} 
	//����, �ͽ��� �ƴϸ� �׳� ������
	else
	{
		move(screen);
	}
}

void VariousMonster::getItem(Screen &screen)
{
	//�̵��� ��ġ�� �������� �ִٸ�
	if (screen.nowThis(x, y) == "��")
	{
		//�����ۼ� �߰�
		nItem += 1;

		//���� ���� �̸��� �����̶�� �������� �ϳ� �� ������
		if (name == "����")
		{
			nItem += 1;
		}

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
		// �������� 1��ŭ �Ҿ��� �� 0�̸��� �Ǹ�
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


