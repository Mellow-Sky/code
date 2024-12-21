// #include <bits/stdc++.h>
// using ll = long long;
// using i32 = int;
// using i64 = long long;
// using u32 = unsigned int;
// using u64 = unsigned long long;

// const int N = 3e5;

// void solve() {
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }
//     int pos = -1;
//     for (int i = 0; i < n - 1; i++) {
//         if (a[i] != 0) {
//             pos = i;
//             break;
//         }
//     }
//     ll ans = 0;
//     if (pos == -1) {
//         for (int i = 0; i < n - 1; i++) {
//             ans += a[i];
//         }
//         std::cout << ans << "\n";
//     } else {
//         ll cnt = 0;
//         for (int i = pos; i < n - 1; i++) {
//             if (a[i] == 0) {
//                 cnt++;
//             } else {
//                 ans += a[i];
//             }
//         }
//         std::cout << ans + cnt << "\n";
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



// #include <bits/stdc++.h>
// using ll = long long;
// using i32 = int;
// using i64 = long long;
// using u32 = unsigned int;
// using u64 = unsigned long long;

// const int N = 3e5;

// void solve() {
//     std::string s;
//     std::cin >> s;
//     if ((s[0] == 'y' || s[0] == 'Y') && (s[1] == 'e' || s[1] == 'E') && (s[2] == 's' || s[2] == 'S')) {
//         std::cout << "YES\n";
//     } else {
//         std::cout << "NO\n";
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




// #include <bits/stdc++.h>
// using ll = long long;
// using i32 = int;
// using i64 = long long;
// using u32 = unsigned int;
// using u64 = unsigned long long;

// const int N = 3e5;

// void solve() {
//     int n;
//     std::cin >> n;
//     std::map<int, int> mp;
//     for (int i = 0; i < n; i++) {
//         int x;
//         std::cin >> x;
//         mp[x]++;
//     }
//     if (mp.size() == 1) {
//         std::cout << "YES\n";
//     } else if (mp.size() > 2) {
//         std::cout << "NO\n";
//     } else {
//         int arr[2], pos = 0;
//         for (auto i : mp) {
//             arr[pos++] = i.second;
//         }
//         if (n % 2 == 0 && arr[0] == arr[1]) {
//             std::cout << "YES\n";
//         } else if (n % 2 == 0 && arr[0] != arr[1]) {
//             std::cout << "NO\n";
//         } else if (n % 2 != 0 && std::abs(arr[0] - arr[1]) == 1) {
//             std::cout << "YES\n";
//         } else {
//             std::cout << "NO\n";
//         }
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
using i32 = int;
using i64 = long long;
using u32 = unsigned int;
using u64 = unsigned long long;

const int N = 3e5;

void solve() {

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