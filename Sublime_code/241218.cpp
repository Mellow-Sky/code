// #include <bits/stdc++.h>
// using ll = long long;
// const int N = 3e5;
// ll a[N], dt[N], dti[N];
// ll n, q;

// int lowbit(int x) {
//     return x & -x;
// }
// void update(int x, ll w) {
//     for (int i = x; i <= n; i += lowbit(i)) {
//         dt[i] += w;
//         dti[i] += w * x;
//     }
// }
// ll getsum(int k) {
//     ll res = 0;
//     for (int i = k; i > 0; i -= lowbit(i)) {
//         res += (k + 1) * dt[i] - dti[i];
//     }
//     return res;
// }
// void solve() {
//     std::cin >> n >> q;
//     for (int i = 1; i <= n; i++) {
//         std::cin >> a[i];
//     }
//     for (int i = 1; i <= n; i++) {
//         update(i, a[i]), update(i + 1, -a[i]);
//     }
//     while (q--) {
//         int p;
//         std::cin >> p;
//         if (p == 1) {
//             ll l, r, v;
//             std::cin >> l >> r >> v;
//             update(l, v);
//             update(r + 1, -v);
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
//     // std::cin >> t;
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
//     for (int i = 1; i <= n; i++) {
//         std::cin >> a[i];
//     }
//     int ans = 0;
//     for (int i = 1; i <= n; i++) {
//         bool b = false;
//         for (int j = 1; j <= n; j++) {
//             if (i != j) {
//                 if (std::abs(a[i] - a[j]) % k == 0) {
//                     b = true;
//                     break;
//                 }
//             }
//         }
//         if (!b) {
//             std::cout << "YES\n" << i << "\n";
//             return;
//         }
//     }
//     std::cout << "NO\n";
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
//     int n, k;
//     std::cin >> n >> k;
//     std::vector<std::vector<int> > v(k);
//     for (int i = 1; i <= n; i++) {
//         int x;
//         std::cin >> x;
//         v[x % k].push_back(i);
//     }
//     int ans = 0;
//     for (int i = 0; i < k; i++) {
//         if (v[i].size() == 1) {
//             ans = v[i].front();
//             break;
//         }
//     }
//     if (ans) {
//         std::cout << "YES\n" << ans << "\n";
//     } else {
//         std::cout << "NO\n";
//     }
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
//     int n;
//     std::cin >> n;
//     std::map<int, int> mp;
//     std::set<int> st;
//     for (int i = 0; i < n; i++) {
//         int x;
//         std::cin >> x;
//         mp[x]++;
//         st.insert(x);
//         st.insert(x + 1);
//     }
//     int ans = 0;
//     int last = 0;
//     for (auto i : st) {
//         int c = mp[i];
//         ans += std::max(0, c - last);
//         last = c;
//     }
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
//     int n;
//     std::cin >> n;
//     std::vector<std::vector<int>> b(2, std::vector<int>(n));
//     std::vector a(2, std::vector<int>(n));
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

