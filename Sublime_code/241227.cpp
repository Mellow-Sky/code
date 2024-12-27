#include <bits/stdc++.h>

const int N = 3e5;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    int max = 0, min = 1001;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        max = std::max(max, a[i]);
        min = std::min(min, a[i]);
    }
    std::cout << (max - min) * (n - 1) << "\n";
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