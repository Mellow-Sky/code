// #include <iostream>
// #include <map>
// void vol() {
//     int n;
//     std::cin >> n;
//     std::map<int, int> mp;
//     int ans = 0;
//     for (int i = 0; i < n; i++) {
//         int x;
//         std::cin >> x;
//         mp[x]++;
//         if (mp[x] == 2) {
//             ans++;
//             mp[x] -= 2;
//         }
//     }
//     std::cout << ans << "\n";
// }
// int main () {
//     int t;
//     std::cin >> t;
//     while (t--) {
//         vol();
//     }
//     return 0;
// }



// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// void vol() {
//     int n;
//     std::cin >>  n;
//     std::vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (std::count(a.begin(), a.end(), std::abs(a[i] + a[j]))) {
//                 std::cout << a[i] << "\n";
//                 return;
//             }
//         }
//     }
// }
// int main () {
//     int t;
//     std::cin >> t;
//     while (t--) {
//         vol();
//     }
//     return 0;
// }





// #include <iostream>
// #include <limits.h>
// void vol() {
//     int n;
//     std::cin >> n;
//     int max = INT_MIN;
//     int min = INT_MAX;
//     for (int i = 0; i < n; i++) {
//         int x;
//         std::cin >> x;
//         max = std::max(max, x);
//         min = std::min(min, x);
//     }
//     if (min < 0) {
//         std::cout << min << "\n";
//     } else {
//         std::cout << max << "\n";
//     }
// }
// int main () {
//     int t;
//     std::cin >> t;
//     while (t--) {
//         vol();
//     }
//     return 0;
// }




// #include <iostream>
// int main () {
//     int n;
//     std::cin >> n;
//     int ans = 0;
//     if (n >= 100) {
//         ans += n / 100;
//         n %= 100;
//     }
//     if (n >= 20) {
//         ans += n / 20;
//         n %= 20;
//     }
//     if (n >= 10) {
//         ans += n / 10;
//         n %= 10;
//     }
//     if (n >= 5) {
//         ans += n / 5;
//         n %= 5;
//     }
//     ans += n;
//     std::cout << ans;
//     return 0;
// }



// #include <iostream>
// #include <map>
// #include <vector>
// void vol() {
//     int n;
//     std::cin >> n;
//     std::map<int, int> mp;
//     for (int i = 0; i < n; i++) {
//         int x;
//         std::cin >> x;
//         mp[x]++;
//     }
//     if (mp[1] == 1) {
//         std::cout << "YES\n";
//         return;
//     }else if (mp[1] >= 2) {
//         std::cout << "NO\n";
//         return;
//     }
//     std::vector<int> a;
//     for (auto i : mp) {
//         a.push_back(i.first);
//     }
    
//     for (int i = 0; i < a.size() - 1; i++) {
//         if (mp[1] < 2 || (a[i] % a[i + 1] == 1 || a[i + 1] % a[i] == 1 || a[i + 1] - a[i] == 1)) {
//             std::cout << "YES\n";
//             return;
//         }
//     }
//     std::cout << "NO\n";
// }
// int main () {
//     int t;
//     std::cin >> t;
//     while (t--) {
//         vol();
//     }
//     return 0;
// }




// #include <iostream>
// #include <algorithm>
// #include <vector>
// void vol() {
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }
//     std::sort(a.begin(), a.end());
//     if (a[0] != a[1]) {
//         std::cout << "YES\n";
//         return;
//     }
//     for (int i = 2; i < n; i++) {
//         if (a[i] % a[0] != 0) {
//             std::cout << "YES\n";
//             return;
//         }
//     }
//     std::cout << "NO\n";
// }
// int main () {
//     int t;
//     std::cin >> t;
//     while (t--) {
//         vol();
//     }
//     return 0;
// }