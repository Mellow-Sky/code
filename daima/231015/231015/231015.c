#include<stdio.h>
int main()
{
	//�����������Լ��
	int a, b, c;
	scanf_s("%d%d", &a, &b);
	if (a > b)
	{
		c = a % b;
		printf("%c", c);
	}
	else if (a < b)
	{
		c = b % a;
		printf("%c", c);
	}
	return 0;




	/*for (c = 1;c<100; c++)
	{
		if (a % c == 0 && b % c == 0)
		{

			printf("%d ", c);
			
		}
		
	}*/






	//100����3�ı���
	//int a;
	//for (a = 1; a <= 100; a++)
	//{
	//	if (a % 3 == 0)
	//		printf("%d  ", a);
	//}














	/*double num_1, num_2, num_3;

	printf("�������һ����");
		scanf_s("%lf",&num_1);
	printf("������ڶ�����");
		scanf_s("%lf", &num_2);
	printf("�������������");
		scanf_s("%lf", &num_3);

		if (num_1 > num_2 > num_3)
			printf("%lf>%lf>%lf", num_1, num_2, num_3);
		else if (num_1 > num_3 > num_2)
			printf("%lf>%lf>%lf", num_1, num_3, num_2);
		else if (num_2 > num_1 > num_3)
			printf("%lf>%lf>%lf", num_2, num_1, num_3);
		else if (num_2 > num_3 > num_1)
			printf("%lf>%lf>%lf", num_2, num_3, num_1);
		else if (num_3 > num_1 > num_2)
			printf("%lf>%lf>%lf", num_3, num_1, num_2);
		else if (num_3 > num_2 > num_1)
			printf("%lf>%lf>%lf", num_3, num_2, num_1);*/
	//return 0;
}