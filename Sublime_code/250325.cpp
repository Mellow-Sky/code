// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     int n;
//     std::cin >> n;
//     int cnt = 0;
//     int a[8] = {0, 1, 0, 3, 2, 0, 2, 5};
//     std::vector<bool> bl(8, true);
//     int ans = 0;
//     for (int i = 0; i < n; i++) {
//         int x;
//         std::cin >> x;
//         for (int j = 0; j < 8; j++) {
//             if (x == a[j] && bl[j]) {
//                 cnt++;
//                 bl[j] = false;
//                 if (cnt == 8) {
//                     ans = i + 1;
//                 }
//                 break;
//             }
//         }

//     }
//     if (cnt == 8) {
//         std::cout << ans << "\n";
//     } else {
//         std::cout << 0 << "\n";
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



// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     ll n, x;
//     std::cin >> n >> x;
//     std::vector<ll> a(n, 0);
//     ll cnt = 1;
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }
//     std::sort(a.begin(), a.end());
//     ll ans = 0;
//     for (int i = n - 1; i >= 0; i--) {
//         if (a[i] >= x) {
//             ans++;
//         } else if (a[i] * cnt < x){
//             cnt++;
//         } else if (a[i] * cnt >= x){
//             cnt = 1;
//             ans++;
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
//     if (n % 2 == 0) {
//         std::cout << "-1\n";
//     } else {
//         for (int i = n; i >= 1; i--) {
//             std::cout << i << " \n"[i == 1];
//         }
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
    ll n, m, k;
    std::cin >> n >> m >> k;
    ll p = 2;
    while (true) {
        if (((m + 1) / p * n) + (m - ((m + 1) / p * p + (m + 1) / p)) >= k) {
            std::cout << p - 1 << '\n';
            return;
        } else {
            p++;
        }
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