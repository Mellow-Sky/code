#include<stdio.h>
int main()
{
	//两位数反向输出
	int num, g, s;
	printf("请输入两位数:");
	scanf_s("%d", &num);

	g = num % 10;
	s = num / 10;
	printf("反向输出为：%d\%d\n", g, s);

	return 0;
}