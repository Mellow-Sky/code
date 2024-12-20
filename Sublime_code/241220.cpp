// #include <bits/stdc++.h>
// using ll = long long;
// const int N = 3e5;

// void solve() {
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n);
//     bool b = true;
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//         if (a[i] != 0) {
//             b = false;
//         }
//     }
//     if (b) {
//         std::cout << "0\n";
//         return;
//     }
//     int l = 0, r = n - 1;
//     while (l < r) {
//         if (a[l] == 0) {
//             l++;
//         }
//         if (a[r] == 0) {
//             r--;
//         }
//         if (a[l] != 0 && a[r] != 0) {
//             break;
//         }
//     }
//     if (l == r) {
//         std::cout << "1\n";
//     } else {
//         int min = 101;
//         for (int i = l + 1; i <= r - 1; i++) {
//             min = std::min(min, a[i]);
//         }
//         if (min == 0) {
//             std::cout << "2\n";
//         } else {
//             std::cout << "1\n";
//         }
//     }
// }

// int main() {
//     std::ios::sync_with_stdio(0), std::cout.tie(0), std::cin.tie(0);
//     int t;
//     std::cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }




#include <bits/stdc++.h>
using ll = long long;
const int N = 3e5;

void solve() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    if (s.find("ps") != s.npos) {
        std::cout << "NO\n";
    } else {
        std::cout << "YES\n";
    }
}

int main() {
    std::ios::sync_with_stdio(0), std::cout.tie(0), std::cin.tie(0);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}