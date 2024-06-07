#include <stdio.h>

int main() {
    char a;
    printf("ÇëÊäÈëÒ»¸ö×Ö·û£º");
    scanf_s("%c", &a);

    if (a >= 'A' && a <= 'Z') 
    {
        printf("%c\n", a + 'a' - 'A');
    }
    else if (a >= 'a' && a <= 'z')
    {
        printf("%c\n", a + 'A' - 'a');
    }
    else 
    {
        printf("%c\n", a);
    }

    return 0;
}
 