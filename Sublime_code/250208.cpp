// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }
//     std::sort(a.begin(), a.end());
//     std::cout << a[n / 2] - 1;
// }

// int main() {
//     std::ios::sync_with_stdio(false), std::cout.tie(nullptr), std::cin.tie(nullptr);
//     int t;
//     t = 1;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     ll l, r;
//     std::cin >> l >> r;
//     std::cout << r - l + 1 << "\n";
// }

// int main() {
//     std::ios::sync_with_stdio(false), std::cout.tie(nullptr), std::cin.tie(nullptr);
//     int t;
//     std::cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     ll n, m;
//     std::cin >> n >> m;
//     if (m >= n || m == 1 || n == 1) {
//         std::cout << 1 << "\n";
//         return;
//     }
//     ll tmp = 1, ans = 0 , min = 1e18;
//     for (int i = 1; i <= 32; i++) {
//         tmp *= m;
//         if (std::abs(tmp - n) < min) {
//             ans = i;
//             min = std::abs(tmp - n);
//         }
//     }
//     std::cout << ans << "\n";
// }

// int main() {
//     std::ios::sync_with_stdio(false), std::cout.tie(nullptr), std::cin.tie(nullptr);
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
    std::vector<int> a(7);
    for (int i = 0; i < 7; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < 7; i++) {
        if (a[i] == 4) {
            std::cout << "NO\n";
            return;
        }
    }
    std::cout << "YES\n";
}

int main() {
    std::ios::sync_with_stdio(false), std::cout.tie(nullptr), std::cin.tie(nullptr);
    int t;
    t = 1;
    while (t--) {
        solve();
    }
    return 0;
}