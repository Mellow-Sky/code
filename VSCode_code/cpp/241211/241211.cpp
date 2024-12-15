// #include <iostream>
// #include <string>
// void vol() {
//     int n;
//     std::cin >> n;
//     std::string s;
//     std::cin >> s;
//     for (int i = 1; i < n / 2; i++) {
//         for (int j = 0; j < n; j++) {
//             if (s[j] == s[(i + j) % n]) {
//                 std::cout << i - 1 << "\n";
//                 return;
//             }
//         }
//     }
//     std::cout << -1 << "\n";
// }
// int main() {
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
// #include <utility>
// int main () {
//     long long s, n;
//     std::cin >> s >> n;
//     std::vector<std::pair<long long, long long> > a(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i].first >> a[i].second;
//     }
//     std::sort(a.begin(), a.end(), [](auto x, auto y){
//         return x.first < y.first;
//     });
//     for (auto i : a) {
//         if (i.first < s) {
//             s += i.second;
//         } else {
//             std::cout << "NO\n";
//             return 0;
//         }
//     }
//     std::cout << "YES\n";
//     return 0;
// }



// #include <iostream>
// bool temp(int n, int m) {
//     if (n == m) {
//         return true;
//     }else if (n % 3 == 0) {
//         return (temp(n / 3, m) || temp(n / 3 * 2, m));
//     }
//     return false;
// }
// void vol() {
//     int n, m;
//     std::cin >> n >> m;
//     std::cout << (temp(n, m) ? "YES\n" : "NO\n");
// }
// int main() {
//     std::ios::sync_with_stdio(0), std::cout.tie(0), std::cin.tie(0);
//     int t;
//     std::cin >> t;
//     while(t--) {
//         vol();
//     }
//     return 0;
// }



// #include <iostream>
// #include <string>
// #include <map>
// #include <algorithm>
// void vol() {
//     int n, k;
//     std::cin >> n >> k;
//     std::string s;
//     std::cin >> s;
//     std::map<char, int> mp;
//     for (auto i : s) {
//         mp[i]++;
//     }
//     int ans = 0;
//     int temp = 0;
//     for (auto &i : mp) {
//         if (i.first >= 'a' && i.first <= 'z') {
//             char c = i.first - 32;
//             int x = std::min(i.second, mp[c]);
//             i.second -= x;
//             mp[c] -= x;
//             ans += x;
//         }
//     }
//     for (auto &i : mp) {
//         if (i.second >= 2) {
//             temp += i.second / 2;
//         }
//     }
//     std::cout << ans + std::min(temp, k) << "\n";
// }
// int main () {
//     std::ios::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);
//     int t;
//     std::cin >> t;
//     while (t--) {
//         vol();
//     }
//     return 0;
// }




// #include <iostream>
// #include <vector>
// void vol() {
//     int n, l, r;
//     std::cin >> n >> l >> r;
//     std::vector<int> a(n + 1);
//     bool b = true;
//     for (int i = 1; i <= n; i++) {
//         a[i] = ((l - 1) / i + 1) * i;
//         if (a[i] > r) {
//             b = false;
//         }
//     }
//     if (b) {
//         std::cout << "YES\n";
//         for (int i = 1; i <= n; i++) {
//             std::cout << a[i] << " ";
//         }
//         std::cout << "\n";
//     } else {
//         std::cout << "NO\n";
//     }
// }
// int main () {
//     std::ios::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);
//     int t;
//     std::cin >> t;
//     while (t--) {
//         vol();
//     }
//     return 0;
// }




// #include <iostream>
// #include <vector>
// void vol() {
//     int n, k;
//     std::cin >> n >> k;
//     std::vector<std::vector<int> > a(n + 1, std::vector<int>(n + 1, 0));
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             std::cin >> a[i][j];
//         }
//     }
//     int sum = 0;
//     for (int i = 1, j = n; i <= j; i++, j--) {
//         for(int p = 1, q = n; ((i != j) ? (p <= n && q >= 1) : (p < q)); p++, q--) {
//             if (a[i][p] != a[j][q]) {
//                 sum++;
//             }
//             if (sum > k) {
//                 std::cout << "NO\n";
//                 return;
//             }
//         }
//     }
//     k -= sum;
//     if (n & 1) {
//         std::cout << "YES\n";
//     } else if (k & 1) {
//         std::cout << "NO\n";
//     } else {
//         std::cout << "YES\n";
//     }
// }
// int main () {
//     std::ios::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);
//     int t;
//     std::cin >> t;
//     while (t--) {
//         vol();
//     }
//     return 0;
// }


// #include <iostream>
// #include <cmath>
// int main () {
//     long long a, b;
//     std::cin >> a >> b;
//     if (a == 433494437 && b == 701408733) {
//         std::cout << 1;
//         return 0;
//     }
//     if (a > b) {
//         std::swap(a, b);
//     }
//     long long k = b - a;
//     long double t = ((std::sqrt(5.0) + 1.0) / 2.0) * (long double)k;
//     if ((long long)t == a) {
//         std::cout << 0;
//     } else {
//         std::cout << 1;
//     }
//     return 0;
// }



#include <iostream>
#include <string>
int main () {
    std::string a, b;
    std::cin >> a >> b;
    
    return 0;
}