//#include<stdio.h>
//int main()
//{
//	char arr;
//	scanf_s("%c", &arr);
//
//	if (arr >= 'a' && arr <= 'z') {
//		arr = arr -32;
//	}
//	else if (arr >= 'A' && arr <= 'Z') {
//		arr = arr +32;
//	}
//
//	printf("%c", arr);
//
//	return 0;
//}
//1-2  ��Ǯ��ټ����⡣��������100ԪǮȥ�򼦣�һֻ����5ԪǮ��
//һֻĸ��3ԪǮ����ֻС��1ԪǮ��Ҫ��100ֻ����������ĸ����С���������ֻ��
//#include<stdio.h>
//int main()
//{
//	int  i, j, l;
//	for (i = 0; i <= 20; i++) {
//		for (j = 0; j <= 33; j++) {
//			for (l = 0; l <= 300; l+=3) {
//				if (i + j + l == 100 && 5 * i + 3 * j + l / 3 == 100) {
//					printf("%d %d %d\n", i, j, l);
//				}
//			}
//		}
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	double x,sum=0;
//	for (x = 1; x <= 100; x++) {
//		sum += 1 / x;
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int i,g=1;
//	for (i = 1; i < 10; i++) {
//		g += 1;
//		g *= 2;
//	}
//	printf("%d\n", g);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, n, sn=0, i,temp=0;
//	printf("������a��n��ֵ:");
//	scanf_s("%d%d", &a, &n);
//	for (i = 1; i < n; i++) {
//		temp = temp * 10 + a;
//		sn += temp;
//	}
//	printf("%d\n", sn);
//
//	return 0;
//}
//�˿���������
//���ĳ����1996����˿�Ϊ12.3���ˣ����ÿ����˿������ʷֱ�2 % ��1.5 % ��1 % ��0.5 % �����㣬
//��õ����˿�Ҫ�ﵽ13��ʱ����Ҫ���������ꣿ
//#include<stdio.h>
//int main()
//{
//	int i , year = 1996;
//	double population = 12.3, pgr;
//	switch (1) {
//	case 1: 
//		pgr = 0.02;
//		population = population * (1 + pgr);
//		year++;
//		if (population >= 13)
//			break;
//	case 2:
//		pgr = 0.015;
//		population = population * (1 + pgr);
//		year++;
//		if (population >= 13)
//			break;
//	case 3:
//		pgr = 0.01;
//		population = population * (1 + pgr);
//		year++;
//		if (population >= 13)
//			break;
//	case 4:
//		pgr = 0.005;
//		population = population * (1 + pgr);
//		year++;
//		if (population >= 13)
//			break;
//	}
//	printf("%d\n%lf\n", year,population);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i=0, year = 1996;
//	double population = 12.3, pgr[] = { 0.02,0.015,0.01,0.005 };
//
//	while (population < 13) {
//		population += population * pgr[i % 4];
//		year++;
//		i++;
//	}
//
//	printf("%d\n", year);
//
//
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//    double population = 12.3, growth_rates[] = { 0.02, 0.015, 0.01, 0.005 };
//    int year = 1996, i = 0;
//
//    while (population < 13) {
//        population += population * growth_rates[i % 4];
//        year++;
//        i++;
//    }
//
//    printf("�˿ڽ��� %d ��ﵽ13��\n", year);
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1, j = 1;
//	int num;
//	for (int l = 0; l < 40; l++) {
//		printf("%d %d\n", i, j); 
//		i+= j;
//		j += i;
//	}
//
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int i;
//    unsigned long long fib[40];
//
//    fib[0] = 1;
//    fib[1] = 1;
//
//    printf("%llu, ", fib[0]);
//    printf("%llu, ", fib[1]);
//
//    for (i = 2; i < 40; i++) {
//        fib[i] = fib[i - 1] + fib[i - 2];
//        printf("%llu", fib[i]);
//        if ((i + 1) % 10 == 0) {
//            printf("\n");
//        }
//        else {
//            printf(", ");
//        }
//    }
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	double b = 0.01;
//	for (int i = 0; i < 30; i++) {
//		a = a + 10;
//		b = b * 2;
//	}
//	printf("%d\n%lf\n", a, b);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i,j;
//	for (i = 0; i < 6; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("* ");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%d ", j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%d*%d=%d\t", j, i, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 9; i >=1; i--) {
//		for (j = i; j >= 1; j--) {
//			printf("%d ", j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("  ");
//		}
//		for (j = i; j <= 9; j++) {
//			printf("%d ", j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
#include<stdio.h>
int main()
{
		

	return 0;
}