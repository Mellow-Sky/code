#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::vector<int> v(10);
    for (int i = 0; i < 10; i++) {
        std::cin >> v[i];
    }
    std::unique(v.begin(), v.end());
    for (int i = 0; i < 10; i++) {
        std::cout << v[i] << " ";
    }
}

int main() {
    std::ios::sync_with_stdio(0), std::cout.tie(0), std::cin.tie(0);
    int t;
    //t = 1;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}