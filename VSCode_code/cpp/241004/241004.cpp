// #include<iostream>
// int main() {
//     int a, b, c, d;
//     std::cin >> a >> b >> c >> d;
//     if(b > d) {
//         std::cout << c - a - 1 << " " << d + 60 - b;
//     }else {
//         std::cout << c - a << " " << d - b;
//     }
//     return 0;
// }

// #include<iostream>
// int main() {
//     double a;
//     std::cin >> a;
//     std::cout << 9.0 / 5 * a + 32;
//     return 0;
// }





#include<iostream>
#include<vector>
int main() {
    int n, a;
    std::cin >> n >> a;
    std::vector<int> vec(n + 1, 0);
    for(int i = 1; i <= n; i++) {
        std::cin >> vec[i];
    }
    

    return 0;
}