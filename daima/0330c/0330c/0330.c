#include<stdio.h>
int main()
{
	int a, b;
	printf("请输入两个数：");
	scanf_s("%a%b", &a, &b);
	if (a % b == 0) {
		printf("YES!\n");
	}
	else if (b != 0 && a % b != 0) {
		printf("NO\n");
	}
	else if (b == 0) {
		printf("ERROR!\n");
	}

	return 0;
}