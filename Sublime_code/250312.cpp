#include <bits/stdc++.h>
using ll = long long;

const int N = 3e5;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n, 0);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    int m;
    std::cin >> m;
    std::vector<int> b(m, 0);
    for (int i = 0; i < m; i++) {
        std::cin >> b[i];
    }

    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (abs(a[i] - b[j]) <= 1) {
                b[j] = 102;
                ans++;
                break;
            }
        }
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false), std::cout.tie(nullptr), std::cin.tie(nullptr);
    int t;
    t = 1;
    while (t--) {
        solve();
    }
    return 0;
}