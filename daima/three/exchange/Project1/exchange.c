#include<stdio.h>
int main()
{
	int a = 0, b = 0,c=0;
	printf("������a��ֵ��");
	scanf_s("%d",&a);
	printf("������b��ֵ��");
	scanf_s("%d", &b);

	c = a;
	a = b;	//��������߼�
	b = c;

	printf("�������Ϊ��a=%d\nb=%d",a,b);

	return 0;
}