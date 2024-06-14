//#include<stdio.h>
//int main()
//{
//	int i, j, num;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			num = i * j;
//			printf("%d*%d=%d\t", i, j, num);
//		}
//		printf("\n");
//	}
//	return 0;
//}
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
	if (b == 0) {
		printf("ERROR!\n");
	}

	return 0;
}