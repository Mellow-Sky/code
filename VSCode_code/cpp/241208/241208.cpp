// #include <iostream>
// #include <string>
// void vol() {
//     int n, m;
//     std::cin >> n >> m;
//     int ans = 0;
//     bool b = true;
//     for (int i = 0; i < n; i++) {
//         std::string s;
//         std::cin >> s;
//         if (b && s.size() <= m) {
//             ans++;
//             m -= s.size();
//         } else {
//             b = false;
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
// void vol() {
//     long long n;
//     std::cin >> n;
//     long long num1 = 0, num2 = 0, s1 = 0, s2 = 0;
//     bool b = false;
//     for (int i = 1; i <= n; i++) {
//         int x;
//         std::cin >> x;
//         if (b) {
//             num1 += x;
//             s1++;
//             b = false;
//         } else {
//             num2 += x;
//             s2++;
//             b = true;
//         }
//     }
//     if ((num1 + num2) % n == 0 && (num1 % s1 == 0 && num2 % s2 == 0) && num1 / s1 == num2 / s2) {
//         std::cout << "YES\n";
//     } else {
//         std::cout << "NO\n";
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
// #include <string>
// #include <algorithm>
// void vol () {
//     std::string s;
//     std::cin >> s;
//     int two = std::count(s.begin(), s.end(), '2'), three = std::count(s.begin(), s.end(), '3');
//     long long num = 0;
//     for (auto i : s) {
//         num += i - '0';
//     }
//     for (int i = 0; i <= two; i++) {
//         for (int j = 0; j <= three; j++) {
//             if ((num + i * 2 + j * 6) % 9 == 0) {
//                 std::cout << "YES\n";
//                 return;
//             }
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
// #include <string>
// #include <cmath>
// void vol() {
//     std::string s;
//     std::cin >> s;
//     for (int i = 0; i < s.size(); i++) {
//         int max = s[i] - '0', pos = i;
//         for (int j = i; j < std::min((int)s.size(), i + 9); j++) {
//             if (s[j] - '0' - (j - i) > max) {
//                 max = s[j] - '0' - (j - i);
//                 pos = j;
//             }

//         }
//         while (pos > i) {
//             std::swap(s[pos], s[pos - 1]);
//             pos--;
//         }
//         s[i] = char(max + '0');
//     }
//     std::cout << s << "\n";
// }
// int main () {
//     int t;
//     std::cin >> t;
//     while (t--) {
//         vol();
//     }
//     return 0;



// #include <iostream>
// int main () {
//     int n, k;
//     std::cin >> n >> k;
//     int p = n / 2 * 2;
//     if (n % 2 == 0) {
//         p--;
//     }
//     if (p >= k) {
//         std::cout << "YES\n";
//     } else {
//         std::cout << "NO\n";
//     }
//     return 0;
// }



// #include <iostream>
// #include <string>
// #include <vector>
// #include <map>
// #include <cmath>
// void vol() {
//     int n;
//     std::cin >> n;
//     std::string s;
//     std::cin >> s;
//     std::map<char, std::vector<int> > mp;
//     int ans = 1e5 + 10;
//     for (int i = 0; i < n; i++) {
//         mp[s[i]].push_back(i);
//     }
//     for (auto i : mp) {
//         int x = i.second.size();
//         for (int j = 1; j < x; j++) {
//             ans = std::min(ans, std::min(i.second[x - 1] - i.second[0] - 1, n - i.second[x - 1] + i.second[0] - 1));
//             ans = std::min(ans, std::min(i.second[j] - i.second[j - 1] - 1, n - i.second[j] + i.second[j - 1] - 1));
//         }
//     }
//     if (ans != 1e5 + 10) {
//         std::cout << ans << "\n";
//     } else {
//         std::cout << -1 << "\n";
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
// #include <string>
// #include <cmath>
// int main () {
//     std::string s;
//     std::cin >> s;
//     int ans = 0;
//     for (int i = 0; i < s.size() - 1; i++) {
//         for (int j = i + 1; j < s.size(); j++) {
//             int l = i, r = j;
//             int size = 1;
//             bool b = true;
//             while (b && l < j) {
//                 if (s[l] == s[r]) {
//                     l++;
//                     r++;
//                     size++;
//                 } else {
//                     b = false;
//                 }
//             }
//             ans = std::max(l, ans);
//         }
//     }
//     return 0;
// }



#include <iostream>
#include <map>
#include <string>
int main () {
    std::string s;
    std::cin >> s;
    std::map<char, int> mp;
    for (auto i : s) {
        mp[i]++;
    }
    std::cout << mp.size();
    return 0;
}