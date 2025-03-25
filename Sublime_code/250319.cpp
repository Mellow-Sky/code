// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     int n;
//     std::cin >> n;
//     int ans = 0;
//     std::vector<int> a(n + 1, 0);
//     for (int i = 1; i <= n; i++) {
//         std::cin >> a[i];
//         if (a[i] != a[i - 1]) {
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
//     ll x, y;
//     std::cin >> x >> y;
//     if (y % 2 == 0) {
//         std::cout << "NO\n";
//         return;
//     }
//     if (x & 1) {
//         int z = y / 2;
//         if (z & 1) {
//             std::cout << "YES\n";
//         } else {
//             std::cout << "NO\n";
//         }
//     } else {
//         int z = y / 2;
//         if (z == 1) {
//             std::cout << "YES\n";
//             return;
//         }
//         if (!(z & 1)) {
//             std::cout << "YES\n";
//         } else {
//             std::cout << "NO\n";
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
// const std::string chicken = "CHICKEN";

// void solve() {
//     int n;
//     std::cin >> n;
//     std::string s;
//     std::cin >> s;
//     std::map<char, int> mp;
//     int index = 0;
//     for (int i = 0; i < n; i++) {
//         mp[s[i]]++;
//         if (index < 7 && chicken[index] == s[i]) {
//             index++;
//         }
//     }
//     if (index < 7) {
//         std::cout << "NO\n";
//         return;
//     }
//     for (int i = 0; i < 7; i++) {
//         mp[chicken[i]]--;
//     }
//     int mx = 0, sum = 0;
//     for (auto i : mp) {
//         mx = std::max(mx, i.second);
//         sum += i.second;
//     }
//     if (mx > sum / 2 || sum % 2 == 1) {
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





// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     ll x;
//     std::cin >> x;
//     char c;
//     std::cin >> c;
//     if (c == '*') {
//         std::cout << 1 << " " << x;
//     } else if (c == '+') {
//         std::cout << 1 << " " << x - 1;
//     } else if (c == '-') {
//         std::cout << x + 1 << " " << 1;
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
//     int n;
//     std::cin >> n;
//     std::string s;
//     std::cin >> s;
//     ll ans = 0, v = 0;
//     for (int i = 0; i < n; i++) {
//         if (s[i] == '0') {
//             v += 10;
//             ans += v;
//         } else if (s[i] == '1') {
//             v -= 5;
//             if (v < 0) {
//                 v = 0;
//             }
//             ans += v;
//         } else if (s[i] == '2') {
//             ans += (v > 10) ? v - 10 : 0;
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
//     ll n, t, k;
//     std::cin >> n >> t >> k;
//     std::cout << std::min((n - k) / t, k + 1) << 'n';
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
//     if (n == 0 || m == 0) {
//         if (n == m) {
//             std::cout << "YES\n";
//         } else {
//             std::cout << "NO\n";
//         }
//         return;
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



