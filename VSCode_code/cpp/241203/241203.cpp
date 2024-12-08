// #include <iostream>
// void vol() {
//     int n;
//     std::cin >> n;
//     int sum = 0;
//     int ans = 0;
//     int y = 1;
//     int tmp = y * y;
//     for (int i = 0; i < n; i++) {
//         int x;
//         std::cin >> x;
//         sum += x;
//         while (sum > tmp) {
//             y += 2;
//             tmp = y * y;
//         }
//         if (sum == tmp) {
//             ans++;
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
// #include <string>
// #include <map>
// int n;
// std::string s;
// int check(std::string st, std::string str, int cnt, auto mp) {
//     if (str.size() == 1) {
//         return;
//     }
//     cnt++;
//     mp[st + str]
//     check(std::string(str.begin() + 1, str.end()), cnt);
// }
// void vol() {
//     std::cin >> n;
//     std::cin >> s;
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {

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
// #include <vector>
// void vol() {
//     int n, m;
//     std::cin >> n >> m;
//     std::vector<std::vector<int>> a(n, std::vector<int> (m, 0));
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             std::cin >> a[i][j];
//         }
//     }
//     if (n == 1 && m == 1) {
//         std::cout << -1 << "\n";
//         return;
//     }
//     for (int j = n - 1; j >= 0; j--) {
//         for (int i =  m - 1; i >= 0; i--) {
//             std::cout << a[j][i] << " ";
//         }
//         std::cout << "\n";
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






#include <iostream>
#include <vector>
void vol() {
    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<int>> a(n, std::vector<int> (m, 0));
    for (auto &i : a) {
        for (auto &j : i) {
            std::cin >> j;
        }
    }
    if (n == 1 && m == 1) {
        std::cout << -1 << "\n";
    } else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                std::cout << a[(i + 1) % n][(j + 1) % m] << "\n";
            }
            std::cout << "\n";
        }
    }

}
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        vol();
    }
    return 0;
}