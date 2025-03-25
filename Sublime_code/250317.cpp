// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     ll k, n, a, b;
//     std::cin >> k >> n >> a >> b;
//     if (b * n >= k) {
//         std::cout << "-1\n";
//         return;
//     } else if (a * n < k) {
//         std::cout << n << "\n";
//         return;
//     }
//     ll ans = (a * n - k) / (a - b);
//     if ((a * n - k) % (a - b) != 0 || ans == 0) {
//         std::cout << n - ans - 1 << "\n";
//     } else {
//         std::cout << n - ans << "\n";
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
//     ll k, n, a, b;
//     std::cin >> k >> n >> a >> b;
//     ll c = k - a * n;
//     if (c > 0) {
//         std::cout << n << "\n";
//     } else {
//         ll diff = a - b;
//         c = -c + 1;
//         ll turn = (c + diff - 1) / diff;
//         if (turn > n) {
//             std::cout << "-1\n";
//         } else {
//             std::cout << n - turn << "\n";
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



// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     int n;
//     std::cin >> n;
//     n = n & 1 ? n + 1 : n;
//     if ((n / 2) & 1) {
//         std::cout << 1;
//     } else {
//         std::cout << 0;
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

// bool check(ll x) {
//     ll l = 0, r = 1e9;
//     while (l + 1 < r) {
//         ll mid = l + (r - l) / 2;
//         if (mid * mid == x) {
//             return true;
//         }
//         if (mid * mid > x) {
//             r = mid;
//         } else {
//             l = mid;
//         }
//     }
//     return false;
// }

// void solve() {
//     int n;
//     std::cin >> n;
//     ll sum = 0;
//     for (int i = 0; i < n; i++) {
//         int x;
//         std::cin >> x;
//         sum += x;
//     }
//     if (check(sum)) {
//         std::cout << "YES\n";
//     } else {
//         std::cout << "NO\n";
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
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n + 1, 0);
//     for (int i = 1; i <= n; i++) {
//         std::cin >> a[i];
//     }
//     int ans = 0;
//     if (n == 2) {
//         std::cout << std::min(a[1], a[2]) << "\n";
//     } else {
//         for (int i = 1; i <= n - 2; i++) {
//             std::vector<int> temp;
//             for (int j = 0; j < 3; j++) {
//                 temp.push_back(a[i + j]);
//             }
//             std::sort(temp.begin(), temp.end());
//             ans = std::max(ans, temp[1]);
//         }
//         std::cout << ans << "\n";
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
//     int n;
//     std::cin >> n;
//     std::string s;
//     std::cin >> s;
//     char past = s[0];
//     for (int i = 1; i < n; i++) {
//         char now = s[i];
//         if (now == '1' && now == '9') {
//             if (now < past) {
//                 std::cout << "NO\n";
//                 return;
//             } else {
//                 past = now;
//             }
//         } else {
//             if (now < past) {
//                 std::cout << "NO\n";
//                 return;
//             } else {
//                 past = now;
//             }
//         }
//     }
//     std::cout << "YES\n";
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
//     std::string a, b;
//     std::cin >> a >> b;
//     int n = a.size(), m = b.size();
//     int ans = n + m;
//     for (int i = 0; i < m; i++) {
//         int j = i;
//         for (int i = 0; i < n; i++) {
//             if (j < m && a[i] == b[j]) {
//                 j++;
//             }
//         }
//         ans = std::min(ans, n + m - (j - i));
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
//     int n, k;
//     std::cin >> n >> k;
//     std::cout << (n - 1 + k - 2) / (k - 1) << "\n";
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
//     int n, m, q;
//     std::cin >> n >> m >> q;
//     std::vector<int> b(m, 0);
//     for (int i = 0; i < m; i++) {
//         std::cin >> b[i];
//     }
//     std::sort(b.begin(), b.end());
//     while (q--) {
//         int a;
//         std::cin >> a;
//         int k = std::upper_bound(b.begin(), b.end(), a) - b.begin();
//         if (k == 0) {
//             std::cout << b[0] - 1 << "\n";
//         } else if (k == m) {
//             std::cout << n - b[m - 1] << "\n";
//         } else {
//             std::cout << (b[k] - b[k - 1]) / 2 << "\n";
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



// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;
// const std::string narek = "narek";

// void solve() {
//     int n, m;
//     std::cin >> n >> m;
//     std::vector<std::string> s(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> s[i];
//     }
//     std::vector<int> dp(5, int(-1e9)), ndp;
//     dp[0] = 0;

//     for (int i = 0; i < n; i++) {
//         ndp = dp;
//         for (int j = 0; j < 5; j++) {
//             if (dp[j] == int(-1e9)) {
//                 continue;
//             }

//             int cnt = 0, next = j;

//             for (int k = 0; k < m; k++) {
//                 int ind = narek.find(s[i][k]);
//                 if (ind == -1) {
//                     continue;
//                 }

//                 if (next == ind) {
//                     cnt++;
//                     next = (next + 1) % 5;
//                 } else {
//                     cnt--;
//                 }
//             }

//             ndp[next] = std::max(ndp[next], dp[j] + cnt);
//         }
//         dp = ndp;
//     }
//     int ans = 0;
//     for (int i = 0; i < 5; i++) {
//         ans = std::max(ans, dp[i] - 2 * i);
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



