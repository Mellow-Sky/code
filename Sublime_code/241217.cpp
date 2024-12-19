// #include <bits/stdc++.h>
// using ll = long long;

// void vol() {
//     int n;
//     std::cin >> n;
//     std::string s;
//     std::cin >> s;
//     int ans = n - 1;
//     for (int i = 1; i < n - 1; i++) {
//         if (s[i - 1] == s[i + 1]) {
//             ans--;
//         }
//     }
//     std::cout << ans << "\n";
// }

// int main() {
//     std::ios::sync_with_stdio(0), std::cout.tie(0), std::cin.tie(0);
//     int t;
//     //t = 1;
//     std::cin >> t;
//     while (t--) {
//         vol();
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// using ll = long long;
// const int N = 3e5 + 9;
// std::vector<int> X;
// ll a[N];

// // 操作和询问
// struct Q {
//     ll a, b;
// } add[N], que[N];

// int getindex(ll x) {
//     return std::lower_bound(X.begin(), X.end(), x) - X.begin() + 1;
// }

// void vol() {
//     int n, q;
//     std::cin >> n >> q;
//     // 离线处理
//     for (int i = 1; i <= n; i++) {
//         ll x, w;
//         std::cin >> x >> w;
//         X.push_back(x);
//         add[i] = {x, w};
//     }

//     for (int i = 1; i <= q; i++) {
//         ll l, r;
//         std::cin >> l >> r;
//         X.push_back(l), X.push_back(r);
//         que[i] = {l, r};
//     }
//     // 排序去重
//     std::sort(X.begin(), X.end());
//     X.erase(std::unique(X.begin(), X.end()), X.end());

//     for (int i = 1; i <= n; i++) {
//         // 由大到小
//         int x = getindex(add[i].a);
//         ll w = add[i].b;
//         a[x] += w;
//     }
//     // 前缀和
//     for (int i = 1; i <= X.size(); i++) {
//         a[i] += a[i - 1];
//     }

//     for (int i = 1; i <= q; i++) {
//         int l = getindex(que[i].a);
//         int r = getindex(que[i].b);
//         std::cout << a[r] - a[l - 1] << "\n";
//     }
// }

// int main() {
//     std::ios::sync_with_stdio(0), std::cout.tie(0), std::cin.tie(0);
//     int t;
//     t = 1;
//     //std::cin >> t;
//     while (t--) {
//         vol();
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// using ll = long long;
// const int N = 3e5 + 9;
// ll n, q, a[N], t[N];

// int lowbit(int x) {
//     return x & -x;
// }
// void update(ll k, ll x) {
//     for (int i = k; i <= n; i += lowbit(i)) {
//         t[i] += x;
//     }
// }
// ll getsum(int k) {
//     ll res = 0;
//     for (int i = k; i > 0; i -= lowbit(i)) {
//         res += t[i];
//     }
//     return res;
// }
// void solve() {
//     std::cin >> n >> q;
//     for (int i = 1; i <= n; i++) {
//         std::cin >> a[i];
//     }
//     for (int i = 1; i <= n; i++) {
//         update(i, a[i]);
//     }
//     while (q--) {
//         int p;
//         std::cin >> p;
//         if (p == 1) {
//             ll k, v;
//             std::cin >> k >> v;
//             update(k, v);
//         } else {
//             ll l, r;
//             std::cin >> l >> r;
//             std::cout << getsum(r) - getsum(l - 1) << "\n";
//         }
//     }
// }

// int main() {
//     std::ios::sync_with_stdio(0), std::cout.tie(0), std::cin.tie(0);
//     int t;
//     t = 1;
//     //std::cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// using ll = long long;
// const int N = 3e5;

// void solve() {
//     int a, b;
//     std::cin >> a >> b;
//     std::cout << "3\n";
//     std::cout << b << " " << b << " " << 3 * a - 2 * b << "\n";
// }

// int main() {
//     std::ios::sync_with_stdio(0), std::cout.tie(0), std::cin.tie(0);
//     int t;
//     t = 1;
//     // std::cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }