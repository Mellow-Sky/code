#include<stdio.h>
int main()
{
	int num, g, s, b;
	printf("水仙花数为：");
	for (num = 100; num < 1000; num++) {
		g = num % 10;
		s = num / 10 % 10;
		b = num / 100;
		
		if (num == g * g * g + s * s * s + b * b * b)
			printf("%d ", num);
	}
	return 0;
}