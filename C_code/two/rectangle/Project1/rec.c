#include<stdio.h>
int main()
{
	int l_1 = 0, l_2=0, c = 0, s = 0;
	printf("�������ܳ�������������\n");
	printf("�����볤���εĳ���");
	scanf_s("%d", &l_1);
	printf("�����볤���εĿ�");
	scanf_s("%d", &l_2);
	c = (l_1 + l_2) * 2;
	s = l_1 * l_2;

	printf("�������ܳ�Ϊ��%d\n", c);
	printf("���������Ϊ��%d\n", s);


	return 0;
}