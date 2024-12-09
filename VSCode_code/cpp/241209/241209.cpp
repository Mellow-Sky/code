//#include <iostream>
//#include <vector>
//void vol() {
//    int n, k;
//    std::cin >> n >> k;
//    std::vector<int> a(n), cnt(k);
//    for (int i = 0; i < n; i++) {
//        std::cin >> a[i];
//        a[i] %= k;
//        cnt[a[i]]++;
//    }
//    for (int i = 0; i < n; i++) {
//        if (cnt[a[i]] == 1) {
//            std::cout << "YES\n";
//            std::cout << i + 1 << "\n";
//            return;
//        }
//    }
//    std::cout << "NO\n";
//}
//int main () {
//    std::ios::sync_with_stdio(0), std::cout.tie(0), std::cin.tie(0);
//    int t;
//    std::cin >> t;
//    while (t--) {
//        vol();
//    }
//    return 0;
//}




// #include <iostream>
// void vol() {
//     int n;
//     std::cin >> n;
//     int x = 1, ans = 1;
//     while (x < n) {
//         x = (x + 1) * 2;
//         ans++;
//     }
//     std::cout << ans << "\n";
// }
// int main () {
//     std::ios::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);
//     int t;
//     std::cin >> t;
//     while (t--) {
//         vol();
//     }
//     return 0;
// }




#include <iostream>
#include <vector>
void vol() {
    long long x;
    std::cin >> x;
    std::vector<int> a(31, 0);
    for (int i = 0; i < 30; i++) {
        if (1LL & (x >> i)) {
            if (a[i]) {
                a[i] = 0;
                a[i + 1] = 1;
            } else if (i > 0) {
                if (a[i - 1] == 1) {
                    a[i - 1] = -1;
                    a[i + 1] = 1;
                } else {
                    a[i] = 1;
                }
            } else if (i == 0) {
                a[i] = 1;
            }
        }
    }
    std::cout << "31\n";
    for (auto i : a) {
        std::cout << i << " ";
    }
    std::cout << "\n";
}
int main () {
    std::ios::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);
    int t;
    std::cin >> t;
    while (t--) {
        vol();
    }
    return 0;
}