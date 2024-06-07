#include<stdio.h>
int main()
{
	//两位数分别输出位数
	int num, g, s;
	printf("请输入两位数:");
		scanf_s("%d", &num);

		g = num % 10;
		s = num / 10;
		printf("个位数为：%d\n十位数为：%d\n", g, s);

	return 0;
}