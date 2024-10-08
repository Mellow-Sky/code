// #include<iostream>
// int main() {
//     double a;
//     std::cin >> a;
//     if(a > 0 && a < 1.3) {
//         std::cout << 60;
//     } else if(a >= 1.3 && a <= 2.455) {
//         std::cout << 120;
//     }

//     return 0;
// }


#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if(n >= 30) {
        printf("%.1lf", 1.0 * n);
    } else if(n >= 20 && n <= 29) {
        printf("%.1lf", 1.2 * n);
    } else if(n >= 10 && n <=19) {
        printf("%.1lf", 1.5 * n); 
    } else if(n < 10) {
        printf("%.1lf", 1.8 * n);
    }
    return 0;
}