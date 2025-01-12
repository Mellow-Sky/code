// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     int n;
//     std::cin >> n;
//     int x = (n / 7 * 15);
//     if (n % 7 > 5) {
//         x += 15;
//     } else {
//         x += (n % 7) * 3;
//     }
//     std::cout << x;
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
//     std::string s;
//     std::cin >> s;
//     std::map<char, int> mp;
//     int max = 0;
//     for (int i = 0; i < n; i++) {
//         mp[s[i]]++;
//         max = mp[s[i]];
//     }
//     std::string ans;
//     for (auto i : mp) {
//         if (i.second >= max) {
//             max = i.second;
//             ans = i.first;
//         }
//     }
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
//     std::vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }
//     ll x = a[0];
//     for (int i = 1; i < n; i++) {
//         x = std::__gcd(x, a[i]);
//     }
//     std::cout << x * n;
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
//     int n, m, k;
//     std::cin >> n >> m >> k;
//     std::priority_queue<int> pq;
//     for (int i = 0; i < n; i++) {
//         int x;
//         std::cin >> x;
//         pq.push(x);
//     }
//     ll ans = 0;
//     while (!pq.empty()) {
//         int x = pq.top();
//         pq.pop();
//         if (x != 0 && x % 2 == 0 && m != 0) {
//             x /= 2;
//             pq.push(x);
//             m--;
//         } else if (x != 0 && x % 2 == 1 && k != 0) {
//             x ^= 1;
//             pq.push(x);
//             k--;
//         } else {
//             ans += x;
//         }
//     }
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
//     int n, a, b;
//     std::cin >> n >> a >> b;
//     int x = std::max(a, b) - std::min(a, b) - 1;
//     if (x == 0) {
//         std::cout << "NO\n";
//         return;
//     }
//     if (x % 2 == 0) {
//         std::cout << "NO\n";
//     } else {
//         std::cout << "YES\n";
//     }

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



// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n + 1, 0), b(n + 1, 0), c(n + 1, 0);
//     for (int i = 1; i <= n; i++) {
//         std::cin >> a[i];
//     }
//     ll sum = 0, tmp = 0;
//     for (int i = 1; i <= n; i++) {
//         std::cin >> b[i];
//         c[i] = b[i] - a[i];
//         if (c[i] > 0) {
//             tmp++;
//             if (tmp >= 2) {
//                 std::cout << "NO\n";
//                 return;
//             }
//              sum += c[i];
//         }
//     }

//     for (int i = 1; i <= n; i++) {
//         if (c[i] > 0) {
//             continue;
//         }
//         if (c[i] == 0 && sum != 0) {
//             std::cout << "NO\n";
//             return;
//         }
//         if (c[i] < 0 && -c[i] >= sum) {
//             continue;
//         } else {
//             std::cout << "NO\n";
//             return;
//         }
//     }
//     std::cout << "YES\n";
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



// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n), b(n), c(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }
//     for (int i = 0; i < n; i++) {
//         std::cin >> b[i];
//         c[i] = b[i] - a[i];
//     }
//     int cnt = 0, x = 0;
//     for (int i = 0; i < n; i++) {
//         if (c[i] > 0) {
//             cnt++;
//             if (cnt >= 2) {
//                 std::cout << "NO\n";
//                 return;
//             }
//             x = c[i];
//         }
//     }
//     for (int i = 0; i < n; i++) {
//         if (c[i] > 0) {
//             continue;
//         }
//         if (-c[i] < x) {
//             std::cout << "NO\n";
//             return;
//         }
//     }
//     std::cout << "YES\n";
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
    int n, m;
    std::cin >> n >> m;
    std::string s;
    std::cin >> s;
    std::vector<std::vector<int> > a(n, std::vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> a[i][j];
        }
    }
    int x = 0, y = 0;
    for (auto i : s) {
        if (i == 'D') {
            int tmp = 0;
            for (int i = 0; i < m; i++) {
                tmp += a[x][i];
            }
            a[x][y] = -tmp;
            x++;
        } else if (i == 'R') {
            int tmp = 0;
            for (int i = 0; i < n; i++) {
                tmp += a[i][y];
            }
            a[x][y] = -tmp;
            y++;
        }
    }
    int tmp = 0;
    for (int i = 0; i < m; i++) {
        tmp += a[n - 1][i];
    }
    a[n - 1][m - 1] = -tmp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << a[i][j] << " ";
        }
        std::cout << "\n";
    }
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