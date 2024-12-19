// #include <bits/stdc++.h>
// using ll = long long;
// const int N = 3e5;

// void solve() {
//     int n, k;
//     std::cin >> n >> k;
//     int p = k / (n - 1);
//     int q = k % (n - 1);
//     int ans = p * n + q;
//     q == 0 ? ans-- : 0;
//     std::cout << ans << "\n";
// }

// int main() {
//     std::ios::sync_with_stdio(0), std::cout.tie(0), std::cin.tie(0);
//     int t;
//     //t = 1;
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
//     int n, m, h, ans = 1;
//     std::cin >> n >> m >> h;
//     std::vector<std::vector<ll> > a(n + 1, std::vector<ll>(m + 1, 0));
//     std::pair<ll, ll> pair;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= m; j++) {
//             std::cin >> a[i][j];
//         }
//         std::sort(a[i].begin(), a[i].end());
//         ll cnt = 0;
//         ll time = 0;
//         for (int k = 1; k <= m; k++) {
//             a[i][k] += a[i][k - 1];
//             if (a[i][k] > h) {
//                 break;
//             } else {
//                 time += a[i][k];
//                 cnt++;
//             }
//         }
//         if (i == 1) {
//             pair = {-cnt, time};
//         } else if (std::make_pair(-cnt, time) < pair) {
//             ans++;
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