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
	//printf("p�ĵ�ַ��%p\n", &p);  // ���p�ĵ�ַ
	//printf("%p",&x);





	//�������ò�����
	//int a = 10;
	//int b = 20;
	//int add = Add(a,b);
	//printf("%d",add);



	//int a = 7;			//�� - 0
	//int b = 0;			//�� - ��0
	//int c = a || b;		//��λ�򡪡�����||��һ��Ϊ�漴Ϊ��
	//printf("%d\n",c);




	//int a = 2;				//�� - 0
	//int b = 0;				//�� - ��0
	//int c = a && b;			//��λ�롪������&&��һ��Ϊ�ټ�Ϊ��
	//printf("%d\n",c);
	return 0;
}