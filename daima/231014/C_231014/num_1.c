#include<stdio.h>
int main()
{
	//��λ���ֱ����λ��
	int num, g, s;
	printf("��������λ��:");
		scanf_s("%d", &num);

		g = num % 10;
		s = num / 10;
		printf("��λ��Ϊ��%d\nʮλ��Ϊ��%d\n", g, s);

	return 0;
}