#include<stdio.h>
int main()
{
	int a = 0, b = 0,c=0;
	printf("请输入a的值：");
	scanf_s("%d",&a);
	printf("请输入b的值：");
	scanf_s("%d", &b);

	c = a;
	a = b;	//代码核心逻辑
	b = c;

	printf("交换结果为：a=%d\nb=%d",a,b);

	return 0;
}