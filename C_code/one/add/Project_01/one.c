#include<stdio.h>
int main()
{
	float num_1, num_2, add;
	printf("请输入第一个小数：");
	scanf_s("%f",&num_1);
	printf("\n请输入第二个小数：");
	scanf_s("%f", &num_2);
	add = num_1 + num_2;
	printf("\n相加结果为：%f",add);

	return 0;
}