#include<stdio.h>
int main()
{
	//��λ���������
	int num, g, s;
	printf("��������λ��:");
	scanf_s("%d", &num);

	g = num % 10;
	s = num / 10;
	printf("�������Ϊ��%d\%d\n", g, s);

	return 0;
}