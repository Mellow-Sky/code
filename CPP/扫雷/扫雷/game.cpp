#include"game.h"
#include<ctime>
#include<cstdlib>

//��ʼ������
void InitBoard(char arr[ROWS][COLS], int rows, int cols,char temp)
{
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = temp;
		}
	}
}

//��ӡ����
void DisplayBoard(char arr[ROWS][COLS], int row, int col)
{
	int i;
	//��ӡ�к�
	cout << "----------ɨ��----------" << endl;
	for (i = 0; i <= COL; i++) {
		cout << i;
	}
	cout << endl;
	for (i = 1; i <= ROW; i++) {
		cout << i;
		for (int j = 1; j <= COL; j++) {
			cout << arr[i][j];
		}
		cout << endl;
	}
}

//������
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
			if(mine[x][y] == '0') {
				mine[x][y] = '1';
				count--;
			}	
	}
}

//������Χ�׵ĸ���
static int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x + 1][y] +
		mine[x - 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] +
		mine[x + 1][y - 1] +
		mine[x][y - 1] +
		mine[x - 1][y - 1] - 8 * '0';
}

//����
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x;
	int y;
	while(1)
	{
		cout << "������Ҫ�Ų����" << endl;
		cin >> x >> y;
		//�ж������Ƿ���Ч
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (mine[x][y] == '1') {
				cout << "���ź��㱻ը����"<<endl;
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else {
				//�����겻���ף���ʾ��Χ�м�����
				int count=GetMineCount(mine,x,y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
			}
		}
		else
		{
			cout << "������Ч������������";
		}
	}
}