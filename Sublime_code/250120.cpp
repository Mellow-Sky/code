// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     int n;
//     std::cin >> n;
//     int a = 0, b = 0;
//     for (int i = 0; i < n; i++) {
//         int x;
//         std::cin >> x;
//         if (x % 2 == 0) {
//             a++;
//         } else {
//             b++;
//         }
//     }
//     if (a != 0) {
//         std::cout << b + 1 << "\n";
//     } else {
//         std::cout << b - 1 << "\n";
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



#include <bits/stdc++.h>
using ll = long long;

const int N = 3e5;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n), b(2, 0);
    int cnt = 0;
    std::map<int, int> mp;
    bool bo = false;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        mp[a[i]]++;

        if (mp[a[i]] == 2) {
            b[cnt] = a[i];
            cnt++;
        }
        if (!bo && cnt == 2) {
            for (int i = 0; i < 2; i++) {
                std::cout << b[i] << " " << b[i] << " ";
            }
            std::cout << "\n";
            bo = true;
        }
        if (!bo && mp[a[i]] == 4) {
            for (int i = 0; i < 4; i++) {
                std::cout << a[i] << " ";
            }
            std::cout << "\n";
            bo = true;
        }
    }
    if (bo) {
        return;
    }
    for (int i = n - 1; i >= 0; i--) {
        for (int j = i - 1; j >= 0; j--) {
            if (mp[a[i] - a[j]] >= 2) {
                std::cout << a[i] << " " << a[j] << " " << a[i] - a[j] << " " << a[i] - a[j] << "\n";
                return;
            }
        }
    }
    std::cout << "-1\n";
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