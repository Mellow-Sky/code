#include <bits/stdc++.h>
using ll = long long;

void vol() {
    ll x, m;
    std::cin >> x >> m;
    int ans = 0;
    for (int i = 1; i <= std::min(2 * x, m); i++) {
        if (i != x && ((x % (i ^ x) == 0) || i % (i ^ x) == 0)) {
            ans++;
        }
    }
    std::cout << ans << "\n";
}
int main() {
    int t;
    //t = 1;
    std::cin >> t;
    while (t--) {
        vol();
    }
    return 0;
}