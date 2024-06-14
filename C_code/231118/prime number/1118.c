#include<stdio.h>

int judging_prime_numbers(int x) 
{
	int  i;
	if (x <= 1)
	{
		return 0;
	}
	for (i = 2; i < x; i++)
	{
		if (x % i == 0) 
		{
			return 0;
		}
		
	}
	return 1;
}

int prime1_100(int x) 
{
	int j;
	for (j = 2; j < x; j++)
	{
		if (x % j == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main() 
{
	//main内判断素数
	int n, i, j, x = 0;
	printf("请输入一个数：");
	scanf_s("%d", &n);

	for (i = 2; i <=n; i++)
	{
		if (n % i == 0)
		{
			printf("%d不是素数\n", n);
			break;
		}
		
		else if (n == i) 
		{
			printf("%d是素数\n", n);
		}
		
	}
	 
	//调用函数判断素数
	if (judging_prime_numbers(n))
	{
		printf("%d是素数\n", n);
	}
	else
	{
		printf("%d不是素数\n", n);

	}
	
	//main内输出2-100之间的素数

	for (i = 2; i <= 100; i++)
	{
		x = 1;
		for (j = 2; j < i; j++) 
		{
			if (i % j == 0) 
			{
				x = 0;
				break;
			}
		}
		if (x==1) {
			printf("%d ", i);
		}
		
	}

	printf("\n");

	//调用函数输出2-100之间的素数
	for (i = 2; i <= 100; i++) {
		if (prime1_100(i)) {
			printf("%d ", i);
		}
	}

	printf("\n");

	return 0;
}