#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int fun(int x)
{
	return x % 10 * 100 + x % 100 / 10 * 10 + x / 100;
}
int main()
{
	int a, b;
	do {
		printf("Input a int(100-999):");
		scanf("%d", &a);
	} while (a < 100 || a>999);
	b = fun(a);
	printf("%d\n", b);
	return 0;
}