#include<stdio.h>
int main()
{
	float num_1, num_2, add;
	printf("�������һ��С����");
	scanf_s("%f",&num_1);
	printf("\n������ڶ���С����");
	scanf_s("%f", &num_2);
	add = num_1 + num_2;
	printf("\n��ӽ��Ϊ��%f",add);

	return 0;
}