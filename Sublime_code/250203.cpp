// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n, 0);
//     bool b = false;
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//         if (a[i] == 1) {
//             b = true;
//         }
//     }
//     if (b) {
//         std::cout << "-1\n";
//     } else {
//         std::cout << "10000000019\n";
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
//     std::vector<int> a(n + 1, 0);
//     for (int i = 0; i < n - 1; i++) {
//         int x, y;
//         std::cin >> x >> y;
//         a[x]++;
//         a[y]++;
//     }
//     std::vector<int> b;
//     for (int i = 1; i <= n; i++) {
//         if (a[i] == 3) {
//             std::cout << "-1\n";
//             return;
//         } else if (a[i] == 1) {
//             b.push_back(i);
//         }
//     }
//     for (auto i : b) {
//         std::cout << i << " ";
//     }
//     std::cout << "\n";
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
//     std::vector<std::vector<int> > a(n, std::vector<int> (n, 0));
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             std::cin >> a[i][j];
//         }
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
//     std::vector<int> a(n);
//     std::map<int, int> mp;
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//         mp[a[i]]++;
//     }
//     std::sort(a.begin(), a.end());
//     if (n % 2 != 0 || mp.size() != 2 || mp[a[0]] != mp[a[n - 1]]) {
//         std::cout << "No\n";
//     } else {
//         std::cout << "Yes\n";
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
//     std::vector<int> a(n + 1, 0);
//     for (int i = 1; i <= n; i++) {
//         std::cin >> a[i];
//     }
//     std::sort(a.begin(), a.end());
//     if ((n / 2) % 2 == 1) {
//         int x = a[(n / 4) + 1], y = a[n - (n / 4)];
//         ll ans = 0;
//         for (int i = 1; i < (n / 4) + 1; i++) {
//             ans += (x - a[i]);
//             a[i] = x;
//         }
//         for (int i = (n / 4) + 2; i <= n / 2; i++) {
//             ans += (a[i] - x);
//             a[i] = x;
//         }
//         for (int i = n / 2 + 1; i < n - (n / 4); i++) {
//             ans += (y - a[i]);
//             a[i] = y;
//         }
//         for (int i = n - (n / 4) + 1; i <= n; i++) {
//             ans += (y - a[i]);
//             a[i] = y;
//         }
//         if (ans == 0 && x == y) {
//             std::cout << n / 2 << "\n";
//         } else if (x == y) {
//             std::cout << n / 2 + ans << "\n";
//         } else {
//             std::cout << ans << "\n";
//         }
//     } else {
//         int x = a[n / 4], y = a[n - n / 4];
//         ll ans = 0;
//         for (int i = 1; i < n / 4; i++) {
//             ans += (x - a[i]);
//             a[i] = x;
//         }
//         for (int i = n / 4 + 1; i <= n / 2; i++) {
//             ans += (a[i] - x);
//             a[i] = x;
//         }
//         for (int i = n / 2 + 1; i < n - n / 4; i++) {
//             ans += (y - a[i]);
//             a[i] = y;
//         }
//         for (int i = n - n / 4 + 1; i <= n; i++) {
//             ans += (a[i] - y);
//             a[i] = y;
//         }
//         if (ans == 0 && x == y) {
//             std::cout << n / 2 << "\n";
//         } else if(x == y) {
//             std::cout << n / 2 + ans << "\n";
//         } else {
//             std::cout << ans << "\n";
//         }
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


#include <bits/stdc++.h>
using ll = long long;

const int N = 3e5;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    ll sum = 0;
    std::map<int, int> mp;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        sum += a[i];
        mp[a[i]]++;
    }
    ll x = (n * (n + 1)) / 2;
    if (sum != x) {
        std::cout << "-1\n";
    } else {
        ll ans = 0;
        std::vector<int> b;
        for (int i = 1; i <= n; i++) {
            if (mp.find(i) == mp.end()) {
                b.push_back(i);
            }
        }
        for (int i = 0; i < b.size(); i++) {
            ans += b[i];
        }
        std::cout << ans << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(0), std::cout.tie(0), std::cin.tie(0);
    int t;
    t = 1;
    while (t--) {
        solve();
    }
    return 0;
}