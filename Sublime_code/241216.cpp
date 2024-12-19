// #include <bits/stdc++.h>
// using ll = long long;

// void vol() {
//     int n, k;
//     std::cin >> n >> k;
//     while (k--) {
//         if (n % 10 == 0) {
//             n /= 10;
//         } else {
//             n--;
//         }
//     }
//     std::cout << n << "\n";
// }
// int main() {
//     int t;
//     t = 1;
//     while (t--) {
//         vol();
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using ll = long long;

// void vol() {
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }
//     std::vector<int> c(n);
//     if (n & 1) {
//         c[0] = (a[0]);
//         for (int i = 1; i < n; i += 2) {
//             c[i] = (std::min(a[i], a[i + 1]));
//             c[i + 1] = (std::max(a[i], a[i + 1]));
//         }
//     } else {
//         for (int i = 0; i < n; i += 2) {
//             c[i] = std::min(a[i], a[i + 1]);
//             c[i + 1] = std::max(a[i], a[i + 1]);
//         }
//     }
//     for (int i = 0; i < n - 1; i++) {
//         if (c[i] > c[i + 1]) {
//             std::cout << "NO\n";
//             return;
//         }
//     }
//     std::cout << "YES\n";
// }

// int main() {
//     int t;
//     //t = 1;
//     std::cin >> t;
//     while (t--) {
//         vol();
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using ll = long long;

void vol() {

}

int main() {
    std::ios::sync_with_stdio(0), std::cout.tie(0), std::cin.tie(0);
    int t;
    //t = 1;
    std::cin >> t;
    while (t--) {
        vol();
    }
    return 0;
}