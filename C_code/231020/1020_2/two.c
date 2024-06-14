#include <stdio.h>

int main()
{
    int a, b, c;
    printf("请输入三个整数：");
    scanf_s("%d%d%d", &a, &b, &c);

    int max = a, two_max = a;
    if (b > max) {
        two_max = max;
        max = b;
    }
    else if (b > two_max) {
        two_max = b;
    }
    if (c > max) {
        two_max = max;
        max = c;
    }
    else if (c > two_max) {
        two_max = c;
    }

    printf("最大值为%d\n", max);
    printf("第二大值为%d\n", two_max);
    printf("从小到大的顺序为：%d %d %d\n", a + b + c - max - two_max, two_max, max);
    return 0;
}
