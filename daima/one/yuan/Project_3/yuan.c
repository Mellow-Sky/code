#include<stdio.h>
int main()
{
	float r=0, S=0, c=0;
	float p = 3.14;
	printf("圆的面积与周长计算程序\n");
	printf("请输入圆的半径：");
	scanf_s("%f",&r);
	S = p * r * r;
	printf("\n圆的面积为：%f",S);
	c = 2 * p * r;
	printf("\n圆的周长为%f",c);

	return 0;
}