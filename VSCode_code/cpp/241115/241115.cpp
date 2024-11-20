// #include <iostream>
// #include <vector>
// #define INF 0X3F3F3F3F
// #define N 100

// struct edge{int v, w;};

// std::vector<edge> e[N]; 
// int d[N], vis[N];
// int n, m, s;// n个点, m条边， s为源点

// void Dijkstra(int s) {
//     for (int i = 0; i <= n; i++) {
//         d[i] = INF;
//     }
//     d[s] = 0;
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

// int main () {
//     int q;
//     std::cin >> n >> m >> s >> q;
//     for (int i = 0; i < m; i++) {
//         int a, b, c;
//         std::cin >> a >> b >> c;
//         e[a].push_back({b, c});
//     }
//     Dijkstra(s);
//     std::cout << d[q];
//     return 0;
// }




// #include <iostream>
// #include <numeric>
// #include <vector>

// int allGcd(std::vector<int> a, int n, int index) {
//     a[index] = n - index + 1;
//     int gcd = a[1];
//     for (int i = 2; i <= n; i++) {
//         gcd = std::gcd(gcd, a[i]);
//     }
//     return gcd;
// }

// void vol() {
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n + 3);
//     for (int i = 1; i <= n; i++) {
//         std::cin >> a[i];
//     }
//     int gcd = allGcd(a, n, 0);
//     if (gcd != 1) {
//         int x = allGcd(a, n, n), y = allGcd(a, n, n - 1);
//         if (x == 1) {
//             std::cout << 1 << "\n";
//         } else if (y == 1) {
//             std::cout << 2 << "\n";
//         } else{
//             std::cout << 3 << "\n";
//         }
//     } else {
//         std::cout << 0 << "\n";
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
// void vol() {
//     std::string s;
//     std::cin >> s;
//     int x = 0, y = 0;
//     for(int i = 0; i < s.size(); i++) {
//         if (s[i] == '1') {
//             x++;
//         } else {
//             y++;
//         }
//     }
//     int size = 0;
//     if (x != y) {
//         for (int i = 0; i < s.size(); i++) {
//             if (s[i] == '1') {
//                 if (y == 0) {
//                     std::cout << s.size() - size << "\n";
//                     return;
//                 } else {
//                     y--;
//                     size++;
//                 }
//             } else {
//                 if (x == 0) {
//                     std::cout << s.size() - size << "\n";
//                     return;
//                 } else {
//                     x--;
//                     size++;
//                 }
//             }
//         }
//     } else {
//         std::cout << 0 << "\n";
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


int main () {
    return 0;
}


