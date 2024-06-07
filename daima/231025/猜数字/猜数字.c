#include<stdio.h>
#include<stdlib.h>
#include<time.h>

	void kaitou()
	{
		printf("*****************************\n");
		printf("****1.开始游戏  0.结束游戏***\n");
		printf("*****************************\n");
	}


	void game()
	{
		int num,guess;
		printf("猜数字：");
		num = rand()%100+1;
		while (1)
		{
			
			scanf_s("%d", &guess);
			if (guess > num) {
				printf("真可惜~猜大了哦\n");
			}
			else if (guess < num) {
				printf("真可惜~猜小了哦\n");
			}
			else 
			{
				printf("恭喜你猜对了！！！！\n");
				break;
			}
			
		}
	}

int main()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		
		kaitou();
		printf("请选择：");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game(); //猜数字的过程
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误"); 
			break;


		}
		
	} while (input);
	
	return 0;
}