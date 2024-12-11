// #include <iostream>
// #include <string>
// void vol() {
//     int n;
//     std::cin >> n;
//     std::string s;
//     std::cin >> s;
//     for (int i = 1; i < n / 2; i++) {
//         for (int j = 0; j < n; j++) {
//             if (s[j] == s[(i + j) % n]) {
//                 std::cout << i - 1 << "\n";
//                 return;
//             }
//         }
//     }
//     std::cout << -1 << "\n";
// }
// int main() {
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
// #include <utility>
// int main () {
//     long long s, n;
//     std::cin >> s >> n;
//     std::vector<std::pair<long long, long long> > a(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i].first >> a[i].second;
//     }
//     std::sort(a.begin(), a.end(), [](auto x, auto y){
//         return x.first < y.first;
//     });
//     for (auto i : a) {
//         if (i.first < s) {
//             s += i.second;
//         } else {
//             std::cout << "NO\n";
//             return 0;
//         }
//     }
//     std::cout << "YES\n";
//     return 0;
// }

#include <iostream>
bool temp(int n, int m) {
    if (n == m) {
        return true;
    }else if (n % 3 == 0) {
        return (temp(n / 3, m) || temp(n / 3 * 2, m));
    }
    return false;
}
void vol() {
    int n, m;
    std::cin >> n >> m;
    std::cout << (temp(n, m) ? "YES\n" : "NO\n");
}
int main() {
    std::ios::sync_with_stdio(0), std::cout.tie(0), std::cin.tie(0);
    int t;
    std::cin >> t;
    while(t--) {
        vol();
    }
    return 0;
}
