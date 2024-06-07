#include"game.h"

void menu()
{
	//打印初始界面
	cout << "******************" << endl;
	cout << "******************" << endl;
	cout << "****1.开始游戏*****" << endl;
	cout << "****0.结束游戏*****" << endl;
	cout << "******************" << endl;
	cout << "******************" << endl;
}

void game()
{
	//实现扫雷游戏
	//mine中存放雷
	char mine[ROWS][COLS] = { '0' };//数组全部初始化为0
	//show中存放排查出的雷的信息
	char show[ROWS][COLS] = { '*' };//数组全部初始化为*
	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	//DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine,ROW,COL);
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//排查雷
	FindMine(mine ,show,ROW,COL);

}

void test()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		cout << "请选择->" << endl;
		cin >> input;
		switch (input)
		{
		case 1:
			cout << "开始扫雷" << endl;
			game();
			break;
		case 0:
			cout << "退出游戏" << endl;
			break;
		default :
			cout << "选择错误，请重新选择" << endl;
		}
	} while (input);
}

int main()
{
	test();



	return 0;
}
