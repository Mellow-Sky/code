#include<stdio.h>
int main()
{
	int l = 0, c = 0, s = 0;
	printf("正方形周长和面积计算程序\n");
	printf("请输入正方形边长：");
	scanf_s("%d", &l);
	c = 4 * l;
	s = l * l;
	printf("正方形周长为：%d\n", c);
	printf("正方形面积为：%d", s);


	return 0;
}