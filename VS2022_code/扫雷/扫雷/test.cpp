#include"game.h"

void menu()
{
	//��ӡ��ʼ����
	cout << "******************" << endl;
	cout << "******************" << endl;
	cout << "****1.��ʼ��Ϸ*****" << endl;
	cout << "****0.������Ϸ*****" << endl;
	cout << "******************" << endl;
	cout << "******************" << endl;
}

void game()
{
	//ʵ��ɨ����Ϸ
	//mine�д����
	char mine[ROWS][COLS] = { '0' };//����ȫ����ʼ��Ϊ0
	//show�д���Ų�����׵���Ϣ
	char show[ROWS][COLS] = { '*' };//����ȫ����ʼ��Ϊ*
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	//DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine,ROW,COL);
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//�Ų���
	FindMine(mine ,show,ROW,COL);

}

void test()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		cout << "��ѡ��->" << endl;
		cin >> input;
		switch (input)
		{
		case 1:
			cout << "��ʼɨ��" << endl;
			game();
			break;
		case 0:
			cout << "�˳���Ϸ" << endl;
			break;
		default :
			cout << "ѡ�����������ѡ��" << endl;
		}
	} while (input);
}

int main()
{
	test();



	return 0;
}
