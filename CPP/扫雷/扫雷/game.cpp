#include"game.h"
#include<ctime>
#include<cstdlib>

//初始化棋盘
void InitBoard(char arr[ROWS][COLS], int rows, int cols,char temp)
{
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = temp;
		}
	}
}

//打印棋盘
void DisplayBoard(char arr[ROWS][COLS], int row, int col)
{
	int i;
	//打印列号
	cout << "----------扫雷----------" << endl;
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

//布置雷
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

//计算周围雷的个数
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

//找雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x;
	int y;
	while(1)
	{
		cout << "请输入要排查的雷" << endl;
		cin >> x >> y;
		//判断数据是否有效
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (mine[x][y] == '1') {
				cout << "很遗憾你被炸死了"<<endl;
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else {
				//该坐标不是雷，显示周围有几个雷
				int count=GetMineCount(mine,x,y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
			}
		}
		else
		{
			cout << "输入无效，请重新输入";
		}
	}
}