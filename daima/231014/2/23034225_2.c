#include<stdio.h>
int main()
{
	//��λ���ֱ����λ��
	int num, g, s, b;
	printf("��������λ��:");
	scanf_s("%d", &num);

	g = num % 10;
	s = num / 10 % 10;
	b = num / 100;
	printf("��λ��Ϊ��%d\nʮλ��Ϊ��%d\n��λ��Ϊ��%d\n", g, s, b);

	return 0;
}