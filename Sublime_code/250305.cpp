// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     int n, k;
//     std::cin >> n >> k;
//     std::vector<int> a(n + 1);
//     for (int i = 1; i <= n; i++) {
//         std::cin >> a[i];
//     }
//     std::vector<std::vector<ll> > dp(10001, std::vector<ll> (10001, -2e14));

//     for (int i = 1; i <= 6; i++) {
//         dp[i][1] = a[i];
//     }


//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= std::min(k, i); j++) {
//             for (int l = 1; l <= 6; l++) {
//                 if (i - l >= 1) {
//                     dp[i][j] = std::max(dp[i][j], dp[i - l][j - 1] + a[i]);
//                 }
//             }
//         }
//     }

//     ll ans = -2e14;
//     for (int i = 1; i <= n; i++) {
//         ans = std::max(ans, dp[i][k]);
//     }
//     std::cout << ans << "\n";

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
//     int n, m, h;
//     std::cin >> n >> m >> h;
//     std::vector<std::vector<ll> > a(n + 1, std::vector<ll> (m + 1, 0));
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= m; j++) {
//             std::cin >> a[i][j];
//         }
//     }

//     std::vector<std::pair<ll, ll> > p(n + 1, {0, 0});

//     for (int i = 1; i <= n; i++) {
//         std::sort(a[i].begin() + 1, a[i].end());
//     }

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= m; j++) {
//             a[i][j] += a[i][j - 1];
//         }
//     }

//     for (int i = 1; i <= n; i++) {
//         ll x = 0;
//         for (int j = 1; j <= m; j++) {
//             x += a[i][j];
//             if (a[i][j] <= h) {
//                 p[i].first++;
//                 p[i].second = x;
//             } else {
//                 break;
//             }
//         }
//     }
//     int ans = 1;
//     for (int i = 2; i <= n; i++) {
//         if (p[i].first > p[1].first) {
//             ans++;
//         } else if (p[i].first == p[1].first && p[i].second < p[1].second) {
//             ans++;
//         }
//     }
//     std::cout << ans << '\n';
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
    int n;
    std::cin >> n;

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