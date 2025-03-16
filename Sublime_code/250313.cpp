// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     int n;
//     std::cin >> n;
//     std::vector<std::string> a(n);
//     for (int i = 0; i < n; i++) {
//             std::cin >> a[i];
//     }
//     int x = (n & 1) ? (n + 1) / 2 : n / 2;
//     int ans = 0;
//     for (int i = 0; i < x; i++) {
//         for (int j = 0; j < x; j++) {
//             int temp = 0;
//             if (a[i][j] != a[j][n - i - 1]) {
//                 a[j][n - i - 1] = a[i][j];
//                 temp++;
//             }
//             if (a[i][j] != a[n - i - 1][n - j - 1]) {
//                 a[n - i - 1][n - j - 1] = a[i][j];
//                 temp++;
//             }
//             if (a[i][j] != a[n - j - 1][i]) {
//                 a[n - j - 1][i] = a[i][j];
//                 temp++;
//             }
//             if (temp == 1 || temp == 3) {
//                 ans++;
//             } else if (temp == 2) {
//                 ans += 2;
//             }
//         }
//     }


//     std::cout << ans;
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
//     int n;
//     std::cin >> n;
//     std::vector<ll> a(n);
//     std::vector<int> b(32, 0);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//         ll x = a[i];
//         int index = 0;
//         while (x) {
//             if (x & 1) {
//                 b[index]++;
//             }
//             index++;
//             x >>= 1;
//         }
//     }
//     ll ans = 0;
//     for (int i = 31; i >= 0; i--) {
//         if (b[i] > (n / 2)) {
//             ans |= 1;
//         }
//         if (i == 0) {
//             break;
//         }
//         ans <<= 1;
//     }

//     ll x = 0;
//     for (int i = 0; i < n; i++) {
//         x += ans ^ a[i];
//     }
//     std::cout << ans << "\n" << x;
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



#include <bits/stdc++.h>
using ll = long long;
std::random_device rd;
std::mt19937_64 rnd(rd());
const int N = 3e5;

void solve() {
    int n, q;
    std::cin >> n >> q;
    std::vector<int> a(n + 1, 0);
    std::map<ll, ll> mp;

    for (int i = 1; i <= n; i++) {
        int x;
        std::cin >> x;
        if (!mp.count(x)) {
            mp[x] = rnd();
        }
        a[i] = a[i - 1] ^ mp[x];
    }
    while (q--) {
        int l, r;
        std::cin >> l >> r;
        std::cout << ((a[r] == a[l - 1] ? "YES\n" : "NO\n"));
    }

}

int main() {
    std::ios::sync_with_stdio(false), std::cout.tie(nullptr), std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}