#include<stdio.h>
int main()
{
	float num_3, num_4, num_5, av;
	printf("������ƽ��ֵ�������\n");
	printf("\n�������һ������");
	scanf_s("%f", &num_3);
	printf("\n������ڶ�������");
	scanf_s("%f", &num_4);
	printf("\n���������������");
	scanf_s("%f", &num_5);
	av = (num_3 + num_4 + num_5) / 3;
	printf("\n�������������Ӻ�ƽ��ֵΪ��%f", av);
	return 0;
}