// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     ll n, m, k;
//     std::cin >> n >> m >> k;
//     ll l = 0, r = m + 1;
//     while (l + 1 < r) {
//         ll mid = (l + r) >> 1;
//         if (((mid * (m / (mid + 1)) + m % (mid + 1))) * n >= k) {
//             r = mid;
//         } else {
//             l = mid;
//         }
//     }
//     std::cout << r << "\n";
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
const ll MOD = 1e9 + 7;

void solve() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;

    if (n == 1) {
        if (s == "?") {
            std::cout << 2 << "\n";
        } else {
            std::cout << 1 << "\n";
        }
        return;
    }

    ll cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '?') {
            cnt++;
        }
    }
    ll x = 1;
    for (int i = 0; i < cnt; i++) {
        x *= 2;
        x %= MOD;
    }
    ll y = 1;
    for (int i = 0; i < cnt - 1; i++) {
        y *= 2;
        y %= MOD;
    }

    ll ans = 0;
    if (s[0] != '?' && s[n - 1] != '?') {
        if (s[0] == s[n - 1]) {
            ans = 1LL * x * (n - 2) % MOD;
        } else {
            ans = 1LL * x * 2 % MOD;
        }
    } else {
        ans = 1LL * y * n % MOD;
    }
    std::cout << ans << "\n";
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