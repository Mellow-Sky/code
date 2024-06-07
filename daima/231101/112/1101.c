#include<stdio.h>
int main()
{
	double arr[7], max, min, num=0, pjz;
	int i;
	
	printf("请输入7个评委给出的参赛者成绩：");

	for (i = 0; i < 7; i++) {
		scanf_s("%lf", &arr[i]);
	}

	max = arr[0];
	min = arr[0];
	
	for (i = 0; i < 7; i++) {
		num += arr[i];
		if(max<arr[i])
		{
			max = arr[i];
		}
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	
	pjz = num - max - min;
	
	pjz /= 5;
	printf("平均成绩为：%.2lf", pjz);

	return 0;
}