// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <numeric>
// void vol() {
//     int n, k;
//     std::cin >> n >> k;
//     std::vector<long long> a(k);
//     for (int i = 0; i < k; i++) {
//         int x, y;
//         std::cin >> x >> y;
//         a[x - 1] += y;
//     }
//     std::sort(a.rbegin(), a.rend());
//     std::cout << accumulate(a.begin(), a.begin() + std::min(n, k), 0) << "\n";
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
//     int t;
//     std::cin >> t;
//     while (t--) {
//         std::string s;
//         std::cin >> s;
//         int a = (s[0] - '0') * 10 + (s[1] - '0');
//         int b = (s[2] - '0') * 10 + (s[3] - '0');
//         if (a == 10 && b >= 2 && s[2] != '0') {
//             std::cout << "Yes\n";
//         } else {
//             std::cout << "No\n";
//         }
//     }
//     return 0;
// }

// #include <iostream>
// int main () {
//     int t;
//     std::cin >> t;
//     while (t--) {
//         int a;
//         std::cin >> a;
//         if ((a >= 102 && a <= 109) || (a >= 1010 && a <= 1099)) {
//             std::cout << "Yes\n";
//         } else {
//             std::cout << "No\n";
//         }
//     }
// }


#include <iostream>
#include <vector>
void vol() {
    int n;
    std::cin >> n;
    std::vector<int> a(n + 2, 0);
    bool b = true;
    for (int i = 1; i <= n; i++) {
        int x;
        std::cin >> x;
        if (i == 1) {
            a[x]++;
        } else if (b) {
            if (a[x - 1] == 1 || a[x + 1] == 1) {
                a[x]++;
            } else {
                b = false;
            }
        }
    }
    if (b) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
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