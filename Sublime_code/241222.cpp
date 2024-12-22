// #include <bits/stdc++.h>
// using ll = long long;
// using i32 = int;
// using i64 = long long;
// using u32 = unsigned int;
// using u64 = unsigned long long;

// const int N = 3e5;

// void solve() {
//     int n;
//     std::cin >> n;
//     int ans = 0;
//     while (n--) {
//         std::string s;
//         std::cin >> s;
//         if (s.find("++") != s.npos) {
//             ans++;
//         } else if (s.find("--") != s.npos) {
//             ans--;
//         }
//     }
//     std::cout << ans;
// }

// int main() {
//     std::ios::sync_with_stdio(0), std::cout.tie(0), std::cin.tie(0);
//     int t;
//     t = 1;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using ll = long long;
// using i32 = int;
// using i64 = long long;
// using u32 = unsigned int;
// using u64 = unsigned long long;

// const int N = 3e5;

// void solve() {
//     int n, k;
//     std::cin >> n >> k;
//     std::vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }
//     int ans = 0;
//     for (int i = 0; i < n; i++) {
//         if (a[i] > 0 && a[i] >= a[k - 1]) {
//             ans++;
//         }
//     }
//     std::cout << ans;
// }

// int main() {
//     std::ios::sync_with_stdio(0), std::cout.tie(0), std::cin.tie(0);
//     int t;
//     t = 1;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using ll = long long;

// void solve() {
//     int n, m;
//     std::cin >> n >> m;
//     int a[20][20];
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             std::cin >> a[i][j];
//         }
//     }
//     if (n == 1 && m == 1) {
//         std::cout << "-1\n";
//         return;
//     }
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             std::cout << a[(i + 1) % n][(j + 1) % m] << " ";
//         }
//         std::cout << "\n";
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



// #include <bits/stdc++.h>
// using i32 = int;
// using i64 = long long;
// using u32 = unsigned int;
// using u64 = unsigned long long;

// const int N = 3e5;

// void solve() {
//     i64 k, n, w;
//     std::cin >> k >> n >> w;
//     i64 x = w * (1 + w) / 2 * k;
//     if (x > n) {
//         std::cout << x - n << "\n";
//     } else {
//         std::cout << "0\n";
//     }
// }

// int main() {
//     std::ios::sync_with_stdio(0), std::cout.tie(0), std::cin.tie(0);
//     int t;
//     t = 1;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using i32 = int;
// using i64 = long long;
// using u32 = unsigned int;
// using u64 = unsigned long long;

// const int N = 3e5;

// void solve() {
//     int a, b;
//     std::cin >> a >> b;
//     std::cout << (a * b) / 2;
// }

// int main() {
//     std::ios::sync_with_stdio(0), std::cout.tie(0), std::cin.tie(0);
//     int t;
//     t = 1;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using i32 = int;
// using i64 = long long;
// using u32 = unsigned int;
// using u64 = unsigned long long;

// const int N = 3e5;

// void solve() {
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n + 1);
//     for (int i = 1; i <= n; i++) {
//         std::cin >> a[i];
//     }
//     int ans = 3;
//     for (int i = 1; i <= n; i++) {
//         if (a[a[i]] == i) {
//             ans = 2;
//             break;
//         }
//     }
//     std::cout << ans << "\n";
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
using i32 = int;
using i64 = long long;
using u32 = unsigned int;
using u64 = unsigned long long;

const int N = 3e5;

void solve() {
    char c;
    std::cin >> c;
    std::string s = "codeforces";
    for (auto i : s) {
        if (c == i) {
            std::cout << "YES\n";
            return;
        }
    }
    std::cout << "NO\n";
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