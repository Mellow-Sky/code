#include<stdio.h>
int main()
{
	//�����������Լ��
	int a, b, c;
	scanf_s("%d%d", &a, &b);
	if (a > b)
	{
		c = a % b;
		printf("%c", c);
	}
	else if (a < b)
	{
		c = b % a;
		printf("%c", c);
	}
	return 0;
}