#include <stdio.h>

int main()
{
    int a, b, c;
    printf("����������������");
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

    printf("���ֵΪ%d\n", max);
    printf("�ڶ���ֵΪ%d\n", two_max);
    printf("��С�����˳��Ϊ��%d %d %d\n", a + b + c - max - two_max, two_max, max);
    return 0;
}
