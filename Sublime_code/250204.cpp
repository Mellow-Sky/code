// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n + 1, 0);
//     ll sum = 0;
//     for (int i = 1; i <= n; i++) {
//         std::cin >> a[i];
//         sum += a[i] - i;
//     }
//     if (sum) {
//         std::cout << -1 << "\n";
//         return;
//     }
//     std::sort(a.begin() + 1, a.end());
//     ll ans = 0;
//     for (int i = 1; i <= n; i++) {
//         if (a[i] < i) {
//             ans += i - a[i];
//         }
//     }
//     std::cout << ans << "\n";
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



#include <bits/stdc++.h>
using ll = long long;

const int N = 3e5;

void solve() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {

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