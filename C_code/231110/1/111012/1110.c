#include<stdio.h>
int main()
{
	int j, i, x = 0;
	double arr[10], l = 0, sum = 0;
	printf("������ʮ���ɼ�:\n");
	for (i = 0; i < 10; i++) {
		scanf_s("%lf", &arr[i]);
		if (arr[i] < 60) {
			x++;
		}
		sum += arr[i];
	}
	sum /= 10;

	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9 - i; j++) {
			if (arr[j] < arr[j + 1]) {
				l = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = l;
			}
		}
	}
	printf("�Ӵ�С�����ĳɼ���\n");
	for (i = 0; i < 10; i++) {
		printf("%.2lf ", arr[i]);
	}
	printf("\nƽ���ɼ���%.2f\n", sum);
	printf("������������%d\n", x);

	return 0;
}
