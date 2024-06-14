#include<stdio.h>
int main()
{
	float num_3, num_4, num_5, av;
	printf("三个数平均值计算程序\n");
	printf("\n请输入第一个数：");
	scanf_s("%f", &num_3);
	printf("\n请输入第二个数：");
	scanf_s("%f", &num_4);
	printf("\n请输入第三个数：");
	scanf_s("%f", &num_5);
	av = (num_3 + num_4 + num_5) / 3;
	printf("\n您输入的数字相加后平均值为：%f", av);
	return 0;
}