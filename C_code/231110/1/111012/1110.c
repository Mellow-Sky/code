#include<stdio.h>
int main()
{
	int j, i, x = 0;
	double arr[10], l = 0, sum = 0;
	printf("请输入十个成绩:\n");
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
	printf("从大到小排序后的成绩：\n");
	for (i = 0; i < 10; i++) {
		printf("%.2lf ", arr[i]);
	}
	printf("\n平均成绩：%.2f\n", sum);
	printf("不及格人数：%d\n", x);

	return 0;
}
