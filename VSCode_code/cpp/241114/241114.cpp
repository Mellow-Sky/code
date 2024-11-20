// #include <iostream>
// void vol() {
//     int x, k;
//     std::cin >> x >> k;
//     if (x % k != 0) {
//         std::cout << 1 << "\n" << x << "\n";
//     } else {
//         std::cout << 2 << "\n" << 1 << "\n" << x - 1 << "\n";
//     }
// }
// int main () {
//     int t;
//     std::cin >> t;
//     while (t--) {
//         vol();
//     }
//     return 0;
// }


// #include <iostream>
// #include <vector>
// #include <algorithm>
// void vol() {
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }
//     std::sort(a.begin(), a.end());
//     long long x = 0, y = 0;
//     bool m = true;
//     for (int i = n - 1; i >= 0; i--) {
//         if (m) {
//             x += a[i];
//             m = false;
//         } else {
//             y += a[i];
//             m = true;
//         }
//     }
//     x = x - a[n - 1] + a[0];
//     y = y - a[0] + a[n - 1];
//     if (x > y) {
//         std::cout << "kou\n";
//     } else if (y > x) {
//         std::cout << "yukari\n";
//     } else if (y == x) {
//         std::cout << "draw\n";
//     }
// }
// int main () {
//     int t;
//     std::cin >> t;
//     while (t--) {
//         vol();
//     }
//     return 0;
// }


#include <iostream>
int main () {
    return 0;
}