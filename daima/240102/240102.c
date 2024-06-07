#include<stdio.h>
int main()
{
	double a, b, sum;
	while (scanf_s("%lf%lf", &a, &b) != EOF && b >= 0 && b <= 9 && a >= 0) {
		b /= 10;
		sum = a + b;
		sum /= 1.9;
		printf("%.0lf", sum);
		break;
	}

	return 0;
}