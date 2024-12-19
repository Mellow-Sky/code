// #include <iostream>
// int main () {
//     int t;
//     std::cin >> t;
//     while (t--) {
//         int n;
//         std::cin >> n;
//         std::cout << n - 1 << "\n";
//     } 
//     return 0;
// }



// #include <iostream>
// #include <string>
// int main () {
//     int t;
//     std::cin >> t;
//     while (t--) {
//         std::string s;
//         std::cin >> s;
//         for (int i = s.size() - 1; i >= 0; i--) {
//             if (s[i] == 'p') {
//                 std::cout << 'q';
//             } else if (s[i] == 'q') {
//                 std::cout << 'p';
//             } else {
//                 std::cout << s[i];
//             }
//         }
//         std::cout << "\n";
//     }
//     return 0;
// }


// #include <iostream>
// void vol() {
//     int m, a, b, c;
//     std::cin >> m >> a >> b >> c;
//     int ans = 0;
//     if (a < m) {
//         ans += a;
//         if (c > 0 && c < m - a) {
//             ans += c;
//             c = 0;
//         } else if (c > 0 && c >= m - a) {
//             ans += m - a;
//             c -= m - a;
//         }
//     } else {
//         ans += m;
//     }
//     if (b < m) {
//         ans += b;
//         if (c > 0 && c < m - b) {
//             ans += c;
//             c = 0;
//         } else if (c > 0 && c >= m - b) {
//             ans += m - b;
//             c -= m - b;
//         }
//     } else {
//         ans += m;
//     }
//     std::cout << ans << "\n";
// }
// int main () {
//     int  t;
//     std::cin >> t;
//     while (t--) {
//         vol();
//     }
//     return 0;
// }



// #include <iostream>
// #include <vector>
// #include <algorithm>
// bool b = true;
// int n;
// std::vector<int> a(n), b(n, 1), c(n, 1);
// void updata(std::vector<int> &b) {
//     bool tep = true;
//     for (auto &i : b) {
//         if (i > 1) {
//             i = 0;
//             tep = false;
//         }
//     }
//     if (tep) {
//         b = false;
//     }
// }
// void git(auto &a, auto &b) {
//     for (int i = 0; i < n; i++) {
//         if (b[i] == 1) {
//             c[a[i]]++;
//             b[i]--;
//         }
//     }
// }
// void vol() {
//     std::cin >> n;
//     for (int i = 0; i < n;i++) {
//         std::cin >> a[i];
//     }
//     int ans = 0;
//     b = true;
//     while (b) {
//         git(a, b);
//         updata(b);
//         ans++;
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
// #include <vector>
// void vol() {
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n), b(n + 1);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//         if (b[a[i]] == 0) {
//             std::cout << a[i] << " ";
//             b[a[i]]++;
//         }
//     }
//     for (int i = 1; i <= n; i++) {
//         if (b[i] == 0) {
//             std::cout << i << " ";
//         }
//     }
//     std::cout << "\n";
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
// void vol() {
//     int n, q;
//     std::cin >> n >> q;
//     std::vector<long long> a(n + 1, 0), presum(n + 1, 0), b(n + 1, 0);
//     for (int i = 1; i <= n; i++) {
//         std::cin >> a[i];
//         presum[i] += a[i] + presum[i - 1];
//         b[i] = presum[i] - presum[i - 1];
//     }
//     while (q--) {
//         int x;
//         std::cin >> x;
//         long long ans = 0;
//         for (int i = 1; i <= n; i++) {
//             if (b[i] <= x) {
//                 ans = presum[i];
//             } else {
//                 break;
//             }
//         }
//         std::cout << ans << " ";
//     }
//     std::cout << '\n';
// }
// int main () {
//     std::ios::sync_with_stdio(0), std::cout.tie(0), std::cin.tie(0);
//     int t;
//     std::cin >> t;
//     while (t--) {
//         vol();
//     }
//     return 0;
// }