#include <bits/stdc++.h>
using ll = long long;
void vol() {
    int n;
    std::cin >> n;
    ll cnt = 0;
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        while (x % 2 == 0) {
            x /= 2;
            cnt++;
        }
    }
    if (cnt >= n) {
        std::cout << "0\n";
    } else {
        ll x = n - cnt;
        ll ans = 0;
        std::vector<int> a;
        for (int i = n; i >= 2; i--) {
            int y = 0;
            int temp = i;
            bool b = false;
            while (temp % 2 == 0) {
                y++;
                temp /= 2;
                b = true;
            }
            if (b) {
                a.push_back(y);
            }
        }
        std::sort(a.begin(), a.end());
        int size = a.size();
        for (int i = size - 1; i >= 0; i--) {
            x -= a[i];
            ans++;
            if (x <= 0) {
                std::cout << ans << "\n";
                return;
            }
        }
        std::cout << "-1\n";
    }
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