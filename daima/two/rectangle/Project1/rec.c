#include<stdio.h>
int main()
{
	int l_1 = 0, l_2=0, c = 0, s = 0;
	printf("长方形周长和面积计算程序\n");
	printf("请输入长方形的长：");
	scanf_s("%d", &l_1);
	printf("请输入长方形的宽");
	scanf_s("%d", &l_2);
	c = (l_1 + l_2) * 2;
	s = l_1 * l_2;

	printf("长方形周长为：%d\n", c);
	printf("长方形面积为：%d\n", s);


	return 0;
}