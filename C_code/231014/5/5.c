#include<stdio.h>
int main()
{
	//圆柱体知半径，高，求底面圆周长，圆柱体面积，体积,23034225
	double r, high, c, s, v, p = 3.14;
	printf("请输入圆柱体的半径：");
		scanf_s("%lf", &r);
	printf("请输入圆柱体的高：");
		scanf_s("%lf", &high);

	c = 2 * p * r;
	s = high * c + 2 * p * r * r;
	v = p * r * r * high;
	printf("圆柱体的底面圆周长为:%.3lf\n圆柱体的表面积为:%.3lf\n圆柱体的体积为:%.3lf\n", c, s, v);


	return 0;
}