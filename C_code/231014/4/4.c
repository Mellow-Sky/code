#include<stdio.h>
int main()
{
	//三位数反向输出
	int num, g, s, b;
	printf("请输入三位数:");
	scanf_s("%d", &num);

	g = num % 10;
	s = num / 10 % 10;
	b = num / 100;
	printf("反向输出为：%d%d%d\n", g, s, b);

	return 0;
}