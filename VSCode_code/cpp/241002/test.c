// #include <stdio.h>

// int main()
// {
//     int a,b;
//     while(scanf("%d %d",&a, &b) != EOF)
//     printf("%d\n\n",a+b);
//     return 0;
// }

// #include <stdio.h>
 
// int main()
// {
//     int N;
//     scanf("%d",&N);
//     while(N--) {
//         int a,b;
//         scanf("%d %d",&a,&b);
//         if (a==0 && b==0){
//             printf("YES\n");
//             continue;
//         }else{
//             printf("NO\n");
//             continue;
//         }
//         a=0;
//         if (b%2==1){
//             printf("NO\n");
//             continue;
//         }else{
//             printf("YES\n");
//             continue;
//         }
//         b=0;
//         if (a%2==1){
//             printf("NO\n");
//             continue;
//         }else{
//             printf("YES\n");
//             continue;
//         }
//         if(a!=0 && b!=0) {
//             if (a%2==1 && b%2==1){
//                 printf("NO\n");
//                 continue;
//             }
//             if (a%2==0 && b%2==0){
//                 printf("YES\n");
//                 continue;
//             }
//             if (a%2==1 && b%2==0){
//                 printf("NO\n");
//                 continue;
//             }
//             if (a%2==0 && b%2==1){
//                 printf("YES\n");
//                 continue;
//             }
//         }
//     }
    
//     return 0;
// }


#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int a, b;
        scanf("%d%d", &a, &b);
        if(a % 2 != 0) {
            printf("NO\n");
            continue;
        }
        b %= 2;
        if(b == 1 && a < 2) {
            printf("NO\n");
            continue;
        }
        printf("YES\n");
    }

    return 0;
}
