#include<stdio.h>
int main()
{
	float r=0, S=0, c=0;
	float p = 3.14;
	printf("Բ��������ܳ��������\n");
	printf("������Բ�İ뾶��");
	scanf_s("%f",&r);
	S = p * r * r;
	printf("\nԲ�����Ϊ��%f",S);
	c = 2 * p * r;
	printf("\nԲ���ܳ�Ϊ%f",c);

	return 0;
}