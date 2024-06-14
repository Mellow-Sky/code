#include<stdio.h>
int main()
{
	char a;
	printf("请输入一个大写字符：");
	scanf_s("%c",&a);
	a = a + 32;
	printf("它的小写字符为：%c",a);

	return 0;
}