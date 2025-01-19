// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     std::vector<std::string> a = {"20250121", "20250123","20250126", "20250206", "20250208",
//     "20250211"};
//     int n;
//     std::cin >> n;
//     std::cout << a[n - 1];
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
//     std::vector<int> b(9, 0);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//         b[a[i] - 1]++;
//     }
//     std::sort(b.begin(), b.end());
//     int x = n % 9;
//     int y = b[0], l = 1, r = 0;
//     for (int i = 1; i < 9; i++) {
//         if (y == b[i]) {
//             l++;
//         } else {
//             r++;
//         }
//     }
//     if (r == 0) {
//         std::cout << "YES\n";
//         return;
//     }
//     if (r == x) {
//         std::cout << "YES\n";
//     } else {
//         std::cout << "NO\n";
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
//     int a, b, c, d;
//     std::cin >> a >> b >> c >> d;
//     int x = a + b;
//     if (b + x == c && x + c == d) {
//         std::cout << "3\n";
//     } else if ((b + x == c) || (x + c == d) || (b == c && c == d) || (d - c == c - b)) {
//         std::cout << "2\n";
//     } else if (!(b + x == c && x + c == d)) {
//         std::cout << "1\n";
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

// bool cmp(int a, int b) {
//     return a > b;
// }

// void solve() {
//     int n, m;
//     std::cin >> n >> m;
//     std::priority_queue<std::vector<int> > pq;
//     for (int i = 0; i < n; i++) {
//         std::vector<int> tmp;
//         for (int j = 0; j < m; j++) {
//             int x;
//             std::cin >> x;
//             tmp.push_back(x);
//         }
//         std::sort(tmp.begin(), tmp.end(), cmp);
//         pq.push(tmp);
//     }
//     std::vector<std:vector<int> > b(n, std::vector<int> (m, 0));
//     while (!pq.empty()) {
//         std::vector<int> tmp(pq.top);
//         pq.pop();

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
//     int n, m;
//     std::cin >> n >> m;
//     std::vector<std::vector<int> >a(n, std::vector<int> (m, 0));
//     std::vector<int> b(n, 0);
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             std::cin >> a[i][j];
//         }
//         std::sort(a[i].begin(), a[i].end());
//         b[a[i][0]] = i + 1;
//     }

//     std::sort(a.begin(), a.end(), [](std::vector<int>& x, std::vector<int>& y) {
//         return x[0] < y[0];
//     });

//     int x = 0;
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             if (a[j][i] != x) {
//                 std::cout << "-1\n";
//                 return;
//             }
//             x++;
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         std::cout << b[a[i][0]] << " ";
//     }
//     std::cout << "\n";
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
//     int n, m;
//     std::cin >> n >> m;
//     std::vector<std::vector<int> > a;
//     std::vector<int> b(n, 0);
//     for (int i = 0; i < n; i++) {
//         std::vector<int> tmp;
//         for (int j = 0; j < m; j++) {
//             int x;
//             std::cin >> x;
//             tmp.push_back(x);
//         }
//         std::sort(tmp.begin(), tmp.end());
//         a.push_back(tmp);
//         b[a[i][0]] = i + 1;
//     }

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m - 1; j++) {
//             if (a[i][j + 1] - a[i][j] != n) {
//                 std::cout << "-1\n";
//                 return;
//             }
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         std::cout << b[i] << " ";
//     }
//     std::cout << "\n";
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
//     int n, k;
//     std::cin >> n >> k;
//     std::vector<int> a(n + 1);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }
//     std::vector<bool> b(n + 1, false);

//     int cnt = 0;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (j == i || b[j] || b[i]) {
//                 continue;
//             }
//             if (a[i] + a[j] == k) {
//                 cnt++;
//                 b[i] = true;
//                 b[j] = true;
//             }
//         }
//     }
//     std::cout << cnt << "\n";
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
//     int n, k;
//     std::cin >> n >> k;
//     std::vector<int> a(n);
//     std::vector<bool> b(n, false);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }
//     std::sort(a.begin(), a.end());
//     int cnt = 0;
//     for (int i = 0; i < n; i++) {
//         if (b[i]) {
//             continue;
//         }
//         auto index = std::lower_bound(a.begin(), a.end(), k - a[i]);
//         if (index != a.end() && !b[index - a.begin()] && a[index - a.begin()] == k - a[i]) {
//             cnt++;
//             b[i] = true;
//             b[index - a.begin()] = true;
//         }
//     }
//     std::cout << cnt << "\n";
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
    std::vector<int> a(n + 1, 0);
    int max = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        int x = std::min(a[i], a[i + 1]);
        a[i] -= x;
        a[i + 1] -= x;
    }
    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1] < a[i]) {
            std::cout << "NO\n";
            return;
        }
    }
    std::cout << "YES\n";
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