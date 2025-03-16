// #include <bits/stdc++.h>
// #include "algorithm"

// #define pii pair<int, int>
// using namespace std;
// using ll = long long;
// const int N = 1005;

// int dir[] = {0, -1, 0, 1, 0};
// int n, m, ind = 2, ans = 0, cnt = 1;
// int st, ed;
// vector<pii > g[N];
// bool vis[N];
// vector<int> path;
// int in = -1;
// map<int, pii > mp;

// void dfs(int u, int fa) {
//     vis[u] = true;
//     for (auto [v, id]: g[u]) {
//         if (v == fa) continue;
//         if (vis[v]) {
//             in = v;
//             path.emplace_back(id);
//             return;
//         } else {
//             dfs(v, u);
//             if (in != -1) {
//                 if (in == -2)return;
//                 path.emplace_back(id);
//                 if (u == in) {
//                     in = -2;
//                 }
//                 return;
//             }
//         }
//     }
// }

// signed main() {
// #ifdef GLOCAL
//     freopen("./in.txt", "r", stdin);
//     freopen("./out.txt", "w", stdout);
// #endif
//     cin >> n;
//     for (int i = 0; i < n; ++i) {
//         int a, b;
//         cin >> a >> b;
//         g[a].emplace_back(b, i);
//         g[b].emplace_back(a, i);
//         mp[i] = pii(a, b);
//     }
//     dfs(1, -1);
//     sort(path.begin(), path.end(), [](int a, int b) {
//         return a > b;
//     });
//     cout << mp[path[0]].first << " " << mp[path[0]].second << endl;
//     return 0;
// }



// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     std::string s;
//     std::cin >> s;
//     int n = s.size(), cnt = 0;
//     std::vector<int> a;
//     bool b = (s[0] == 'B' || s[n - 1] == 'B');
//     for (int i = 0; i < n - 1; i++) {
//         if (s[i] == 'B' && s[i] == s[i + 1]) {
//             b = true;
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         if (s[i] == 'A') {
//             cnt++;
//         } else {
//             a.push_back(cnt);
//             cnt = 0;
//         }
//     }
//     if (cnt != 0) {
//         a.push_back(cnt);
//     }

//     if (a.empty()) {
//         std::cout << "0\n";
//         return;
//     }
//     std::sort(a.begin(), a.end());
//     int ans = 0;

//     if (b) {
//         ans += a[0];
//     }
//     for (int i = 1; i < a.size(); i++) {
//         ans += a[i];
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
ll n, x;

bool check(ll h, std::vector<ll> &a) {
    ll sum = 0;
    for (auto i : a) {
        sum += std::max(h - i, 0LL);
    }
    if (sum > x) {
        return true;
    }
    return false;
}

void solve() {
    std::cin >> n >> x;
    std::vector<ll> a(n, 0);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    ll l = 0, r = 2e10 + 7;
    while (l < r) {
        ll mid = l + (r - l + 1) / 2;
        if (check(mid, a)) {
            r = mid - 1;
        } else {
            l = mid;
        }
    }
    std::cout << l << '\n';
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