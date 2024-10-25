// #include <iostream>
// #include <set>

// void vol () {
//     int n;
//     std::cin >> n;
//     int cnt = 0;
//     std::set<int> set {0};
//     long long sum = 0;
//     for (int i = 0; i < n; i++) {
//         int x;
//         std::cin >> x;
//         sum += x;
//         if (set.count(sum)) {
//             cnt++;
//             sum = 0;
//             set.clear();
//         }
//         set.emplace(sum);
//     }
//     std::cout << cnt << "\n";
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
    int n;
    std::cin >> n;
    std::vector<int> a(n + 2, 0);
    for (int i = 1; i <= n; i++) {
        std::cin >> a[i];
    }
    std::vector<int> b(n + 2, 0);
    int cnt = 0;
    int l = 1, r = n;
    while (l <= r) {
        if (a[l] != b[l - 1] && a[r] != b[r + 1]) {
            b[l] = a[l];
            b[r] = a[r];
        } else if (a[r] != b[l - 1] && a[l] != b[r + 1]) {
            b[l] = a[r];
            b[r] = a[l];
        } else {
            b[l] = a[l];
            b[r] = a[r];
        }
        l++;
        r--;
    }
    for (int i = 1; i < n; i++) {
        if (b[i] == b[i + 1]) {
            cnt++;
        }
    }
    std::cout << cnt << "\n";
}
int main () {
    int t;
    std::cin >> t;
    while (t--) {
        vol();
    }
    return 0;
}