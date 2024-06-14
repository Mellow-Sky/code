#include<stdio.h>
int main()
{
	//三位数分别输出位数
	int num, g, s, b;
	printf("请输入三位数:");
	scanf_s("%d", &num);

	g = num % 10;
	s = num / 10 % 10;
	b = num / 100;
	printf("个位数为：%d\n十位数为：%d\n百位数为：%d\n", g, s, b);

	return 0;
}