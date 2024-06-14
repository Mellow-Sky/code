#include<stdio.h>
int main()
{
	int i, j, arr[10], num;

	for (i = 0; i < 10; i++) {
		scanf_s("%d", &arr[i]);
	}

	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				num = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = num;
			}
		}
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return  0;
}