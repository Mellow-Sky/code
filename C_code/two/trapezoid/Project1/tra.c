#include<stdio.h>
int main()
{
	float l_1 = 0, l_2 = 0, h = 0, s = 0;
	printf("��������������\n");
	printf("���������ε��ϵף�");
	scanf_s("%f", &l_1);
	printf("���������ε��µף�");
	scanf_s("%f", &l_2);
	printf("���������εĸߣ�");
	scanf_s("%f", &h);
	s = (l_1 + l_2) * h / 2;

	printf("���������Ϊ��%f\n", s);

	return 0;
}