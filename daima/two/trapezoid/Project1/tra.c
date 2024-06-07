#include<stdio.h>
int main()
{
	float l_1 = 0, l_2 = 0, h = 0, s = 0;
	printf("梯形面积计算程序\n");
	printf("请输入梯形的上底：");
	scanf_s("%f", &l_1);
	printf("请输入梯形的下底：");
	scanf_s("%f", &l_2);
	printf("请输入梯形的高：");
	scanf_s("%f", &h);
	s = (l_1 + l_2) * h / 2;

	printf("长方形面积为：%f\n", s);

	return 0;
}