// #include <iostream>
// #include <vector>
// int main () {
//     int n;
//     std::cin >> n;
//     int q;
//     std::cin >> q;
//     std::vector<int> a(n + 1, 0);
//     for (int i = 0; i < q; i++) {
//         int x;
//         std::cin >> x;
//         a[x]++;
//     }
//     int p;
//     std::cin >> p;
//     for (int i = 0; i < p; i++) {
//         int x;
//         std::cin >> x;
//         a[x]++;
//     }
//     for (int i = 1; i <= n; i++) {
//         if (a[i] == 0) {
//             std::cout << "Oh, my keyboard!";
//             return 0;
//         }
//     }
//     std::cout << "I become the guy.";
//     return 0;
// }




// #include <iostream>
// #include <vector>
// int main () {
//     int n, k;
//     std::cin >> n >> k;
//     std::vector<int> a(n), b(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }
//     for (int i = 0; i < k; i++) {
//         std::cin >> b[i];
//     }
//     if (k != 1) {
//         std::cout << "YES\n";
//     } else {
//         for (int i = 0; i < n; i++) {
//             if (a[i] == 0) {
//                 a[i] = b[0];
//                 break;
//             }
//         }
//         for (int i = 0; i < n - 1; i++) {
//             if (a[i] > a[i + 1]) {
//                 std::cout << "YES\n";
//                 return 0;
//             }
//         }
//         std::cout << "NO\n";
//     }
//     return 0;
// }








// #include <iostream>
// #include <vector>
// int main () {
//     int n, d;
//     std::cin >> n >> d;
//     std::vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }
//     int cnt = 0;
//     for (int i = 1; i < n; i++) {
//         if (a[i] < a[i - 1]) {
//             cnt += (a[i - 1] - a[i] + d - 1) / d;
//             a[i] += ((a[i - 1] - a[i] + d - 1) / d) * d;
//         }
//         if (a[i] == a[i - 1]) {
//             cnt++;
//             a[i] += d;
//         }
//     }
//     std::cout << cnt;
//     return 0;
// }



#include <iostream>
void vol() {
    int n;
    std::cin >> n;
    
}
int main () {
    int t;
    std::cin >> t;
    while (t--) {
        vol();
    }
    return 0;
}