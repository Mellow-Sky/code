#include<stdio.h>
int main()
{
	double arr[7], max, min, num=0, pjz;
	int i;
	
	printf("������7����ί�����Ĳ����߳ɼ���");

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
	printf("ƽ���ɼ�Ϊ��%.2lf", pjz);

	return 0;
}