#include <stdio.h>

//int Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//
//}

int main()
{

	int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 1)
			printf("%d ", i);
		i++;
	}
		


	//int a = 10;
	//int* c = &a;
	//printf("%p", c);





	//int x = 10;
	//int* p = &x;
	//printf("p的地址：%p\n", &p);  // 输出p的地址
	//printf("%p",&x);





	//函数调用操作符
	//int a = 10;
	//int b = 20;
	//int add = Add(a,b);
	//printf("%d",add);



	//int a = 7;			//假 - 0
	//int b = 0;			//真 - 非0
	//int c = a || b;		//按位或————||：一个为真即为真
	//printf("%d\n",c);




	//int a = 2;				//假 - 0
	//int b = 0;				//真 - 非0
	//int c = a && b;			//按位与————&&：一个为假即为假
	//printf("%d\n",c);
	return 0;
}