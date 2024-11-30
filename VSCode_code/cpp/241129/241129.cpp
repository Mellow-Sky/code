// #include <iostream>
// #include <string>
// int main () {
//     std::string a, b;
//     std::cin >> a >> b;
//     std::cout << b << "\n" << a;
//     return 0;
// }



// #include <iostream>
// #include <vector>
// void vol() {
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n);
//     int max = 0;
//     int min = 1e9 + 2;
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//         max = std::max(max, a[i]);
//         min = std::min(min, a[i]);
//     }
//     if (max == a[n - 1] && min == a[0]) {
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




#include <iostream>
#include <string>
int main () {
    int q;
    std::cin >> q;
    while (q--) {
        std::string s;
        std::cin >> s;
        int a;
        for (auto i : s) {
            if (i == '1') {
                a++;
            }
        }
        if (s.size() % 2 == 1) {
            std::cout << "YES\n";
        } else if (a % 2 == 0) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
    return 0;
}