// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     std::string s;
//     std::cin >> s;
//     std::cout << s[0] << "UPC";
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
//     int n, k;
//     std::cin >> n >> k;
//     std::vector<std::pair<int, int>> a(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i].first >> a[i].second;
//     }
//     for (int i = 1; i <= k; i++) {
//         int max = 0;
//         for (int j = 0; j < n; j++) {
//             max = std::max(max, a[j].first * (a[j].second + i));
//         }
//         std::cout << max << "\n";
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
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n + 1);
//     for (int i = 1; i <= n; i++) {
//         std::cin >> a[i];
//     }
//     ll cnt = 0;
//     for (int i = 1; i <= n; i++) {
//         cnt += a.end() - std::lower_bound(a.begin() + 1, a.end(), a[i] * 2);
//     }
//     std::cout << cnt;
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
//     int n;
//     std::cin >> n;
//     n = std::pow((double)n, 0.5);
//     std::vector<std::vector<int> > a(n, std::vector<int>(n, 0));
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             std::cin >> a[i][j];
//         }
//     }
//     int ans = 0;

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

// const int N = 3e5;

// void solve() {
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n + 2, 0), b(n + 2, 0);
//     int tmp = 0, c = 0;
//     for (int i = 1; i <= n; i++) {
//         std::cin >> a[i];
//         if (tmp >= i - 1) {
//             a[i] += i - 1 - c;
//             tmp -= i - 1;
//         } else {
//             a[i] += tmp - c;
//             tmp = 0;
//         }
//         int tt = std::min(a[i], n - i);
//         tmp += tt;
//         a[i] -= tt;
//         b[tt + 1] = 1;
//         std::cout << a[i] << " ";
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




