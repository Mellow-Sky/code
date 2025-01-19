// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     ll n;
//     std::cin >> n;
//     ll y = 19375331;
//     if (n > y) {
//         std::cout << y + 1;
//     } else {
//         std::cout << n;
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
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     ll n, k1, k2;
//     std::cin >> n >> k1 >> k2;
//     std::vector<int> a(n);
//     ll x = 0;
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//         x = std::max(x, a[i]);
//     }
//     if (a[n - 1] != x) {
//         std::cout << "YES";
//     } else {
//         std::cout << "NO";
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
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     int n, q;
//     std::cin >> n >> q;
//     int cnt = 1;
//     std::vector<int> a(n + 1);
//     std::vector<bool> b(n + 1, false);
//     while (q--) {
//         int op;
//         std::cin >> op;
//         if (op == 1) {
//             int l, r;
//             std::cin >> l >> r;
//             for (int i = l; i <= r; i++) {
//                 if (!b[i]) {
//                     b[i] = true;
//                     a[i] = cnt++;
//                 }
//             }
//         } else if (op == 2) {
//             int x;
//             std::cin >> x;
//             if (!b[x]) {
//                 std::cout << "0\n";
//             } else {
//                 std::cout << a[x] << "\n";
//             }
//         }
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
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     int n, m;
//     std::cin >> n >> m;
//     std::vector<int> a(n + 1, 0), b(n + 1, 0);
//     ll ans = 0;
//     int i = 1;
//     bool op = true;
//     while (n--) {
//         std::cin >> a[i] >> b[i];
//         i++;
//         if (op) {
//             ans += 4 * m;
//             op = false;
//             a[i - 1] = 0, b[i - 1] = 0;
//             continue;
//         }
//         ans += a[i - 2] + b[i - 2] + a[i - 1] + b[i - 1];
//     }
//     std::cout << ans + a[i - 1] + b[i - 1] << "\n";
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