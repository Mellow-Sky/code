// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     int n;
//     std::string h;
//     int m;
//     std::cin >> n >> h >> m;
//     std::set<std::string> z, x, c;
//     for (int i = 0; i < n; i++) {
//         std::string q, w, r;
//         std::cin >> q >> w >> r;
//         if (w[2] == h[2] && w[3] == h[3] && (m == (w[5] - '0') * 10 + (w[6] - '0'))) {
//             int y = (r[0] - '0') * 10 + (r[1] - '0');
//             int a = (r[3] - '0') * 10 + (r[4] - '0');
//             int b = (r[6] - '0') * 10 + (r[7] - '0');
//             if ((y == 9 && a == 0 && b == 0) || (y >= 7 && y < 9)
//              || (y >= 18 && y < 20) || (y == 20 && a == 0 && b == 0)) {
//                 z.insert(q);
//             } else if ((y == 13 && a == 0 && b == 0) || (y >= 11 && y < 13)) {
//                 x.insert(q);
//             } else if ((y >= 22 || y < 1) || (y == 1 && a == 0 && b == 0)) {
//                 c.insert(q);
//             }
//         }
//     }
//     std::cout << z.size() << " " << x.size() << " " << c.size() << "\n";
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
//     if (n % 2 == 0) {
//         std::cout << "No\n";
//     } else {
//         std::cout << "Yes\n";
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
//     std::string s;
//     std::cin >> s;
//     std::map<char, int> mp;
//     for (int i = 0; i < 8; i ++) {
//         mp[s[i]]++;
//     }
//     if (mp['c'] == 1 && mp['d'] == 1 && mp['e'] == 1 && mp['n'] == 1 && mp['o'] == 2 && mp['r'] == 1 && mp['w'] == 1) {
//         std::cout << "happy new year";
//     } else {
//         std::cout << "I AK IOI";
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
//     int n, a, b, c;
//     std::cin >> n >> a >> b >> c;
//     int sum = a + b + c;
//     if (sum >= n && sum <= (n / 3 * 2 * 3 + n % 3 * 2)) {
//         std::cout << "Yes\n";
//     } else {
//         std::cout << "No\n";
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
//     std::cout << "Yes\n";
//     if (n == 1) {
//         std::cout << "1 2 3 1";
//     } else if (n == 2) {
//         std::cout << "1 2 4 5 2 3 5 6 3 1";
//     } else if (n == 3) {
//         std::cout << "1 2 4 7 8 4 5 2 3 5 8 9 5 6 9 10 6 3 1";
//     } else if (n == 4) {
//         std::cout << "1 2 4 7 11 12 7 8 4 5 2 3 5 8 12 13 8 9 5 6 9 13 14 9 10 14 15 10 6 3 1";
//     } else if (n == 5) {
//         std::cout << "1 2 4 7 11 16 17 11 12 7 8 4 5 2 3 5 8 12 17 18 12 13 8 9 5 6 9 13 18 19 13 14 9 10 14 19 20 14 15 20 21 15 10 6 3 1";
//     } else if (n == 6) {
//         std::cout << "1 2 4 7 11 16 22 23 16 17 11 12 7 8 4 5 2 3 5 8 12 17 23 24 17 18 12 13 8 9 5 6 9 13 18 24 25 18 19 13 14 9 10 14 19 25 26 19 20 14 15 20 26 27 20 21 27 28 21 15 10 6 3 1";
//     } else if (n == 7) {
//         std::cout << "1 2 4 7 11 16 22 29 30 22 23 16 17 11 12 7 8 4 5 2 3 5 8 12 17 23 30 31 23 24 17 18 12 13 8 9 5 6 9 13 18 24 31 32 24 25 18 19 13 14 9 10 14 19 25 32 33 25 26 19 20 14 15 20 26 33 34 26 27 20 21 27 34 35 27 28 35 36 28 21 15 10 6 3 1";
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
//     int x, y, z, a, b, c;
//     std::cin >> x >> y >> z >> a >> b >> c;
//     std::cout << std::max(x * a, std::max(y * b, z * c)) << "\n";
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
//     int ans = 0;
//     int pos = s.find("uwawauwa");
//     if (pos < 2) {
//         pos = s.find("uwawauwa", pos + 1);
//     }
//     int prepos = 0;
//     while (pos != s.npos) {
//         int cnt = 0;
//         for (int i = prepos; i < pos - 1; i++) {
//             if (s[i] == 'u') {
//                 cnt++;
//             }
//         }
//         ans = ans * 2 + cnt;
//         prepos = pos;
//         pos = s.find("uwawauwa", pos + 1);
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
//     std::string s;
//     std::cin >> s;
//     int cnt = 0, ans = 0;
//     for (int i = 0; i < n; i++) {
//         std::string tmp = s.substr(i + 1, 8);
//         if (tmp == "uwawauwa") {
//             ans += cnt;
//         }
//         cnt += s[i] == 'u';
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
//     int n, m;
//     std::cin >> n >> m;
//     std::vector<std::vector<int>> a(n + 1, std::vector<int> (m + 1, 0));
//     std::map<int, ll> mp1, mp2;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= m; j++) {
//             int x;
//             std::cin >> x;
//             mp1[i + j] += x;
//             mp2[i - j] += x;
//             a[i][j] = x;
//         }
//     }
//     ll ans = 0;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= m; j++) {
//             ll sum = mp1[i + j] + mp2[i - j] - a[i][j];
//             ans = std::max(ans, sum);
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


#include <bits/stdc++.h>
using ll = long long;

const int N = 3e5;

void solve() {

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