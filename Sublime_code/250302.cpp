// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     char c;
//     std::cin >> c;
//     if (c == 'U' || c == 'D') {
//         std::cout << 'L';
//     } else {
//         std::cout << 'U';
//     }
// }

// int main() {
//     std::ios::sync_with_stdio(false), std::cout.tie(nullptr), std::cin.tie(nullptr);
//     int t;
//     t = 1;
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
//     for (int i = 1; i <= n; i++) {
//         if (i & 1) {
//             std::cout << "1 ";
//         } else {
//             std::cout << "2 ";
//         }
//     }
//     std::cout << "\n";
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



// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     int x;
//     std::cin >> x;
//     std::cout << 1;
//     int size = 0;
//     while (x) {
//         size++;
//         x /= 10;
//     }
//     for (int i = 1; i < size; i++) {
//         std::cout << 0;
//     }
//     std::cout << 1 << "\n";
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

void solve() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        std::cin >> a[i];
    }

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