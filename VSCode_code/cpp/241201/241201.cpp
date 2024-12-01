// #include <iostream>
// #include <vector>
// #include <algorithm>
// int main () {
//     int l;
//     std::cin >> l;
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n);
//     int max = 0;
//     int min = 0;
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//         min = std::max(std::min(l - a[i] + 1, a[i]), min);
//         max = std::max(std::max(max, l - a[i] + 1), a[i]);
//     }
//     std::cout << min << " " << max;
//     return 0;
// }





// #include <iostream>
// #include <string>
// #include <vector>
// int main () {
//     int n;
//     std::cin >> n;
//     std::vector<std::string> a(n + 1);
//     std::vector<bool> b(n + 1, true);
//     b[n] = false;
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }
//     if (n == 1) {
//         std::cout << a[0];
//         return 0;
//     }
//     for (int i = 0; i < n; i++) {
//         int max = 0, index = 1;
//         while(index < n) {
//             if (!b[max] && b[index]) {
//                 max = index++;
//                 continue;
//             }
//             if (b[max] && b[index]) {
//                 int l = 0, r = 0;
//                 while (l < a[max].size() && r < a[index].size()) {
//                     if (a[index][r] > a[max][l]) {
//                         max = index;
//                     } else if (a[index][r] == a[max][l]) {
//                         r++;
//                         l++;
//                     } else {
//                         break;
//                     }
//                 }
//             }
//             index++;
//         }
//         std::cout << a[max];
//         b[max] = false;
//     }
//     return 0;
// }


// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>
// bool cmp(std::string a, std::string b) {
//     return a + b > b + a;
// }
// int main () {
//     int n;
//     std::cin >> n;
//     std::vector<std::string> a(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }
//     std::sort(a.begin(), a.end(), cmp);
//     for (int i = 0; i < n; i++) {
//         std::cout << a[i];
//     }
// }



// #include <iostream>
// #include <vector>
// #include <algorithm>
// void vol() {
//     int n, q;
//     std::cin >> n >> q;
//     std::vector<long long> a(n + 1), pre(n + 1, 0), premax(n + 1, 0);
//     for (int i = 1; i <= n; i++) {
//         std::cin >> a[i];
//         pre[i] = pre[i - 1] + a[i];
//         premax[i] = std::max(premax[i - 1], a[i]);
//     }   
//     while (q--) {
//         int k;
//         std::cin >> k;
//         int l = (std::upper_bound(premax.begin(), premax.end(), k) - premax.begin());
//         // int l = 0, r = n + 1;
//         // while (l + 1 < r) {
//         //     int mid = l + r >> 1;
//         //     if (premax[mid] <= k) {
//         //         l = mid;
//         //     } else {
//         //         r = mid;
//         //     }
//         // }
//         std::cout << pre[l - 1] << " ";
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
// #include <string>
// int main () {
//     std::string s;
//     std::cin >> s;
//     if (s[0] >= 'a' && s[0] <= 'z') {
//         s[0] -= 32;
//         std::cout << s;
//     } else {
//         std::cout << s;
//     }
//     return 0;
// }





// #include <iostream>
// #include <map>
// void vol() {
//     int n, k;
//     std::cin >> n >> k;
//     std::map<int, int> mp;
//     for (int i = 0; i < n; i++) {
//         int x;
//         std::cin >> x;
//         mp[x]++;
//     }
//     for (auto i : mp) {
//         if (i.second >= k) {
//             std::cout << k - 1 << "\n";
//             return;
//         }
//     }
//     std::cout << n << "\n";
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
//     std::vector<int> a(4);
//     for (int i = 0; i < 4; i++) {
//         std::cin >> a[i];
//     }
//     for (int i = 0; i < 3; i++) {
//         if (a[i] != a[i + 1]) {
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
// int main () {
//     int x, y, k, t;
//     std::cin >> x >> y >> k >> t;
//     char c;
//     std::cin >> c;
//     if (c == 'G' && k >= t) {
//         std::cout << t;
//     } else if (c == 'G' && k < t) {
//         std::cout << k + x + t;
//     } else if (c == 'R') {
//         std::cout << k + t;
//     }
//     return 0;
// }






// #include <iostream>
// #include <string>
// void vol() {
//     int n;
//     std::cin >> n;
//     std::string s;
//     std::cin >> s;
//     if (n == 1 && s[0] == '1') {
//         std::cout << "1\n1 1\n";
//         return;
//     } else if (n == 1 && s[0] == '0') {
//         std::cout << 0;
//         return;
//     }
//     std::cout << "2\n1 " << (n % 2 == 0 ? n - 1 : n) << "\n";
//     std::cout << "2 " << (n % 2 == 0 ? n : n - 1) << "\n";
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
// void vol() {
//     int n;
//     std::cin >> n;
//     std::string s;
//     std::cin >> s;
//     std::cout << n << '\n';
//     for (int i = 1; i <= n; i++) {
//         std::cout << i << " " << i << "\n";
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
//     long long n, k;
//     std::cin >> n >> k;
//     std::vector<long long> a(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }
//     std::vector<long long> b(2 * k);

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
// #define INF 0X3F3F3F3F
// #define N 1000

// struct edge{int v, w;};

// int d[N];
// int n;// n个点, m条边， s为源点

// void Dijkstra(int s, auto &e) {
//     for (int i = 0; i <= n; i++) {
//         d[i] = INF;
//     }
//     d[s] = 0;
//     std::vector<int> vis(N, 0);
//     for (int i = 1; i < n; i++) {
//         int u = 0;
//         for (int j = 1; j <= n; j++) {
//             if (!vis[j] && d[j] < d[u]) {
//                 u = j;
//             }
//         }
//         vis[u] = 1;
//         for (auto ed : e[u]) {
//             int v = ed.v, w = ed.w;
//             d[v] = std::min(d[v], d[u] + w);
//         }
//     }

// }
// void vol() {
//     std::cin >> n;
//     std::vector<edge> e[N];
//     for (int i = 1; i <= n; i++) {
//         for (int j = i; j <= n; j++) {
//             e[i].push_back({j, i ^ j});
//         }
//     }
//     Dijkstra(1, e);
//     long long ans = d[1];
//     for (int i = 2; i <= n; i++) {
//         ans ^= d[i];
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



#include <iostream>
#include <vector>
#include <algorithm>
void vol() {
    int n, k;
    std::cin >> n >> k;
    std::vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    if (n == 2) {
        std::cout << a[0] + a[1] << "\n";
        return;
    }
    if (n == 1) {
        std::cout << a[0] << "\n";
        return;
    }
    if (k >= n - 2) {
        long long max = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                max = std::max(max, a[i] + a[j]);
            }
        }
        std::cout << max << "\n";
    } else {
        long long max = 0;
        for (int i = 0; i <= k; i++) {
            for (int j = n - 1; j >= n - k + i - 1; j--) {
                max = std::max(max, a[i] + a[j]);
            }
        }
        std::cout << max << "\n";
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