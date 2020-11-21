#include "MonsterWorld.h"

//���� ������ ����
void MonsterWorld::play(int wait, int turn)
{
	//���� ������ ��
	int loc = 0;

	//ȭ�� �ʱ� ���� �����
	for (VariousMonster &monster : monsters)
	{
		monster.draw(mainMap);
		mainMap.gotoxy(Xmax / 3, Ymax + 5 + loc);
		monster.print();
		loc += 1;

		if (monster.getName() == "���Ÿ�")
		{
			ys = true;
		}
	}

	//�������� ���� �ʾҰų� ���ѵ� ���� �ѱ��� �ʾ��� �� while��
	while (!isOver() && nTurn != turn + 1)
	{
		mainMap.gotoxy(Xmax / 3, Ymax + 2);

		if (ys)
		{
			cout << "��ü �̵� Ƚ��: ���Ÿ�";
		}
		else
		{
			cout << "��ü �̵� Ƚ��: " << nTurn;
		}
		

		for (VariousMonster &monster : monsters)
		{
			//���� ������ �������� 0�̶�� �ƹ��� �ൿX
			if (monster.getEnergy() == 0)
			{
				
			}
			else
			{
				if (nowItem != 0)
				{
					//���� 1.���� ��ġ ����� / 2.���� �����̱� 
					mainMap.clear(monster.getX(), monster.getY());
					monster.variousMove(mainMap);
				}

				// 3. �̵��ϴ� ��ġ�� �������� �ִٸ� �ʿ� �����ִ� �������� �ϳ� ���ָ鼭 �Դ´�.
				if (monster.isItem(mainMap))
				{
					nowItem -= 1;
				}
				monster.getItem(mainMap);

				// ���� �����ִ� ������ �� ���
				mainMap.eraser(Ymax + 3);
				mainMap.gotoxy(Xmax /3, Ymax + 3);

				if (ys)
				{
					cout << "���� ������ ��: ���Ÿ�";
				}
				else
				{
					cout << "���� ������ ��: " << nowItem;
				}

				// ���� ������ ���� ǥ��
				mainMap.eraser(Ymax + 5 + loc % monsters.size());
				mainMap.gotoxy(Xmax / 3, Ymax + 5 + loc % monsters.size());
				if (ys)
				{
					cout << "���Ÿ�";
				}
				else
				{
					monster.print();
				}
				
				// �ʿ� ���Ͱ� �̵��� ��ġ�� ���� �׸���
				monster.draw(mainMap);
			}
			loc += 1;
		}

		//�ϼ� �ø���
		nTurn += 1;

		if (isAllDead())
		{
			mainMap.gotoxy(Xmax / 3, Ymax + 6 + monsters.size());
			cout << "��� ���͵��� �׾����ϴ�.";
			break;
		}

		Sleep(wait * 100);
	}

	mainMap.gotoxy(0, Ymax + 8 + monsters.size());
}

//��� ���Ͱ� �׾����� Ȯ���ϴ� �Լ�
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

	//���� ������ ���� ��ü ������ ���� ������ Ȯ��
	return chack == monsters.size();
}

