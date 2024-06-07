//#include<stdio.h>
//
//int main() {
//    int a[10][10], b[10][10], mul[10][10], r, c, i, j, k;
//    printf("输入行和列数：");
//    scanf_s("%d%d", &r, &c);
//    printf("输入第一个矩阵的元素：\n");
//    for (i = 0; i < r; ++i)
//        for (j = 0; j < c; ++j)
//            scanf_s("%d", &a[i][j]);
//
//    printf("输入第二个矩阵的元素：\n");
//    for (i = 0; i < r; ++i)
//        for (j = 0; j < c; ++j)
//            scanf_s("%d", &b[i][j]);
//
//    printf("输出矩阵：\n");
//    for (i = 0; i < r; ++i)
//        for (j = 0; j < c; ++j)
//        {
//            mul[i][j] = 0;
//            for (k = 0; k < c; ++k)
//                mul[i][j] += a[i][k] * b[k][j];
//        }
//    // 输出结果
//    for (i = 0; i < r; ++i)
//        for (j = 0; j < c; ++j)
//        {
//            printf("%d\t", mul[i][j]);
//            if (j == c - 1)
//                printf("\n\n");
//        }
//    return 0;
//}
/*
#include <stdio.h>
int main()
{
    int a, b, c, max, min, two;
    scanf_s("%d%d%d", &a, &b, &c);
    if (a > b && a>c) {
        max = a;
        if (b > c) {
            min = c;
            two = b;
            printf("%d %d %d", max, two, min);
        }
        else {
            min = b;
            two = c;
            printf("%d %d %d", max, two, min);
        }
    }
    else if (b > a && b > c) {
        max = b;
        if (a > c) {
            min = c;
            two = a;
            printf("%d %d %d", max, two, min);
        }
        else {
            min = a;
            two = c;
            printf("%d %d %d", max, two, min);
        }
    }
    else if (c > a && c > b) {
        max = c;
        if (a > b) {
            min = b;
            two = a;
            printf("%d %d %d", max, two, min);
        }
        else {
            min = a;
            two = b;
            printf("%d %d %d", max, two, min);
        }
    }
    return 0;
}
*/
//#include<stdio.h>
//int main()
//{
//    float i, f = 1, num = 0;
//    for (i = 1; i <= 100; i++) {
//        num += f * 1 / i;
//        f *= -1;
//    }
//    printf("%f\n", num);
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int i, num=0;
//    for (i = 1; i <= 100; i++) {
//        if (i % 10 == 9) {
//            num++;
//        }
//        if (i / 10 == 9) {
//            num++;
//        }
//    }
//    printf("%d\n", num);
//
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int i;
//    for (i = 1000; i <= 2000; i++) {
//        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
//            printf("%d ", i);
//        }
//    }
//
//    return 0;
//}
#include<stdio.h>
int main()
{
    int arr[10], i, max;
    for (i = 0; i < 10; i++) {
        scanf_s("%d", &arr[i]);
    }
    max = arr[0];
    for (i = 0; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("%d\n", max);

    return 0;
}
