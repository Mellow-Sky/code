// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     int n;
//     std::cin >> n;
//     std::string a, b;
//     std::cin >> a >> b;
//     int cnt = 0;
//     for (int i = 0; i < n; i++) {
//         if (a[i] != b[i]) {
//             cnt++;
//         }
//     }
//     std::cout << cnt;
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
//     std::vector<int> a(n, 0), b(n, 0);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//         b[i] = a[i];
//     }
//     std::sort(b.begin(), b.end());
//     std::map<int, int> mp;
//     int r = 1, x = b[n - 1], cnt = 0;;
//     int k = 1;
//     for (int i = n - 1; i >= 0; i--) {
//         if (b[i] == x) {
//             cnt++;
//             mp[b[i]] = r;
//         } else {
//             x = b[i];
//             r += cnt;
//             cnt = 1;
//             mp[b[i]] = r;
//         }

//     }
//     for (int i = 0; i < n; i++) {
//         std::cout << mp[a[i]] << "\n";
//     }
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
//     int n, m;
//     std::cin >> n >> m;
//     std::vector<std::vector<int> > mp(n + 1);
//     for (int i = 0; i < m; i++) {
//         int x, y;
//         std::cin >> x >> y;
//         mp[x].push_back(y);
//     }

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
//     ll n;
//     std::cin >> n;
//     std::vector<ll> a(2 * n + 10, 0);
//     for (int i = 1; i <= 2 * n; i++) {
//         std::cin >> a[i];
//     }
//     int cnt = 0;
//     std::vector<ll> b;
//     for (int i = 1; i <= 2 * n; i++) {
//         if (a[i] != a[i - 1] && a[i] != a[i + 1]) {
//             cnt++;
//         } else if (cnt != 0) {
//             b.push_back(cnt);
//             cnt = 0;
//         }
//     }
//     if (cnt != 0) {
//         b.push_back(cnt);
//     } else if (cnt == 0 && b.empty()) {
//         std::cout << 0 << "\n";
//         return;
//     }
//     if (b.size() == 1) {
//         std::cout << n - 1 << "\n";
//         return;
//     }
//     std::sort(b.begin(), b.end());
//     int ans = 0;
//     int m = b.size();
//     for (int i = 0; i < m; i += 2) {
//         if (b[i] % 2 == 0) {
//             ans += b[i] / 2;
//         } else {
//             ans += b[i];
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




// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n);
//     int max = 0;
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//         max = std::max(max, a[i]);
//     }
//     int ans = 0;
//     for (int i = 1; i < max; i++) {
//         for (int j = 0; j < n - 1; j++) {
//             for (int k = j + 1; k < n; k++) {
//                 ans = std::max(ans, std::__gcd(a[j] + i, a[k] + i));
//             }
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


// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     int n;
//     std::cin >> n;
//     std::string a, b;
//     std::cin >> a >> b;
//     a = " " + a;
//     b = " " + b;
//     int x = 0, y = 0, p = 0, q = 0;
//     for (int i = 1; i <= n; i++) {
//         if (i % 2 == 0) {
//             x += (a[i] - '0');
//             p += (b[i] - '0');
//         } else {
//             y += (a[i] - '0');
//             q += (b[i] - '0');
//         }
//     }
//     int l = (n + 1) / 2, r = n / 2;
//     if (y > r - p || q > l - x) {
//         std::cout << "NO\n";
//     } else {
//         std::cout << "YES\n";
//     }
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
    int max = 0, min = 1e9 + 1;
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        max = std::max(max, x);
        min = std::min(min, x);
    }
    std::cout << max - min << "\n";
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