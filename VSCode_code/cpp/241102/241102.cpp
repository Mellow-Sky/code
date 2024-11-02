// #include <iostream>
// #include <vector>

// void vol() {
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n);
//     int p = 0, q = 0;
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//         if (i & 1) {
//             p = std::max(p, a[i]);
//         } else {
//             q = std::max(q, a[i]);
//         }
//     }
//     int max = 0;
//     if (n & 1) {
//         max = std::max(q + ((n / 2) + 1), p + (n / 2));
//     } else {
//         max = std::max(q + (n / 2), p + (n / 2));
//     }
//     //int max = std::max(p + (n & 1 == 0 ? n / 2 : n / 2 + 1), q + (n / 2));
//     std::cout << max << "\n";
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
// void vol () {
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }
//     for (int i = 0; i < n - 1; i++) {
//         int temp = a[i] - a[i + 1];
//         if ((temp == 5 || temp == -5) || (temp == 7 || temp == -7)) {
//             continue;
//         } else {
//             std::cout << "NO\n";
//             return;
//         }
//     }
//     std::cout << "YES\n";
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
// #include <map>
// #include <set>
// #include <algorithm>
// bool cmp(int x, int y) {
//     return x > y;
// }
// void vol() {
//     int n, k;
//     std::cin >> n >> k;
//     std::vector<long long> a;
//     std::map<long long, long long> mp;
//     std::set<long long> st;
//     for (int i = 0; i < n; i++) {
//         int x, y;
//         std::cin >> x >> y;
//         mp[x] += y;
//         st.insert(x);
//     }
//     for (auto i : st) {
//         a.push_back(mp[i]);
//     }
//     std::sort(a.begin(), a.end(), cmp);
//     long long sum = 0;
//     for (int i = 0; i < k; i++) {
//         sum += a[i];
//     }
//     std::cout << sum << "\n";
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
// #include <set>
// bool cmp(long long x, long long y) {
//     return x > y;
// }
// void vol() {
//     int n, k;
//     std::cin >> n >> k;
//     std::vector<long long> a(2e5 + 10, 0);
//     std::vector<long long> b;
//     std::set<long long> st;
//     for (int i = 0; i < k; i++) {
//         long long x, y;
//         std::cin >> x >> y;
//         a[x] += y;
//         b.push_back(x);
//     }
//     for (auto i : b) {
//         st.insert(a[i]);
//     }
//     long long sum = 0;
//     //std::sort(a.begin(), a.end(), cmp);
//     // for (int i = 0; i < k; i++) {
//     //     sum += a[i];
//     // }
//     for (auto it = st.rbegin(); it != st.rend(); it++) {
//         if(n) {
//             sum += *it;
//         } else {
//             break;
//         }
//         n--;
//     }
//     std::cout << sum << "\n";
// }
// int main () {
//     int t;
//     std::cin >> t;
//     while (t--) {
//         vol();
//     }
//     return 0;
// }



#include <iostream>
#include <string>
void vol() {
    std::string s;
    std::cin >> s;
    int q;
    std::cin >> q;
    int c = s.find("1100");
    int d = c + 3;
    while (q--) {
        int x;
        std::cin >> x;
        char y;
        std::cin >> y;
        s[x - 1] = y;
        x--;
        if (x >= c && x <= d) {
            if (s.find("1100") == std::string::npos) {
                c = 0;
                d = s.size();
                std::cout << "NO\n";
            } else {
                c = s.find("1100");
                d = c + 3;
                std::cout << "YES\n";
            }
        } else {
            std::cout << "YES\n";
        }
    } 
}
int main () {
    int t;
    std::cin >> t;
    while (t--) {
        vol();
    }

    return 0;
}