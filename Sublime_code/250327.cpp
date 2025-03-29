// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     std::vector<int> a(110, -1);
//     for (int i = 0; i < 100; i++) {
//         std::cin >> a[i];
//     }
//     int cnt = 0;
//     std::map<int, int> mp;
//     for (int i = 0; i < 100; i++) {
//         if (a[i] == 2) {
//             for (int j = i; j < 100; j++) {
//                 if (a[j] == 0) {
//                     for (int k = j; k < 100; k++) {
//                         if (a[k] == 2) {
//                             for (int l = k; l < 100; l++) {
//                                 if (a[l] == 3) {
//                                     for (int r = l + 1; r < 100; r++) {
//                                         if (a[r] == 0) { // month
//                                             for (int m = r + 1; m < 100; m++) {
//                                                 if (a[m] >= 1 && a[m] <= 9) {
//                                                     for (int z = m + 1; z < 100; z++) {
//                                                         if (a[m] == 2) {
//                                                             if (a[z] == 0) {
//                                                                 for (int x = z + 1; x < 100; x++) {
//                                                                     if (a[x] >= 1 && a[x] <= 9) {
//                                                                         cnt++;
//                                                                         int p = 20230000 + a[r] * 1000 + a[m] * 100 + a[z] * 10 + a[x];
//                                                                         mp[p]++;
//                                                                     }
//                                                                 }
//                                                             } else if (a[z] == 1) {
//                                                                 for (int x = z + 1; x < 100; x++) {
//                                                                     if (a[x] >= 0 && a[x] <= 9) {
//                                                                         cnt++;
//                                                                         int p = 20230000 + a[r] * 1000 + a[m] * 100 + a[z] * 10 + a[x];
//                                                                         mp[p]++;
//                                                                     }
//                                                                 }
//                                                             } else if (a[z] == 2) {
//                                                                 for (int x = z + 1; x < 100; x++) {
//                                                                     if (a[x] >= 0 && a[x] <= 8) {
//                                                                         cnt++;
//                                                                         int p = 20230000 + a[r] * 1000 + a[m] * 100 + a[z] * 10 + a[x];
//                                                                         mp[p]++;
//                                                                     }
//                                                                 }
//                                                             }
//                                                         } else if (a[z] == 0) {
//                                                             for (int x = z + 1; x < 100; x++) {
//                                                                 if (a[x] >= 1 && a[x] <= 9) {
//                                                                     cnt++;
//                                                                     int p = 20230000 + a[r] * 1000 + a[m] * 100 + a[z] * 10 + a[x];
//                                                                     mp[p]++;
//                                                                 }
//                                                             }
//                                                         } else if (a[z] == 1 || a[z] == 2) {
//                                                             for (int x = z + 1; x < 100; x++) {
//                                                                 if (a[x] >= 0 && a[x] <= 9) {
//                                                                     cnt++;
//                                                                     int p = 20230000 + a[r] * 1000 + a[m] * 100 + a[z] * 10 + a[x];
//                                                                     mp[p]++;
//                                                                 }
//                                                             }
//                                                         } else if (a[z] == 3) {
//                                                             for (int x = z + 1; x < 100; x++) {
//                                                                 if (a[x] == 1 && (a[m] == 1 || a[m] == 3 || a[m] == 5 || a[m] == 7 || a[m] == 8)) {
//                                                                     cnt++;
//                                                                     int p = 20230000 + a[r] * 1000 + a[m] * 100 + a[z] * 10 + a[x];
//                                                                     mp[p]++;
//                                                                 }
//                                                                 if (a[x] == 0) {
//                                                                     cnt++;
//                                                                     int p = 20230000 + a[r] * 1000 + a[m] * 100 + a[z] * 10 + a[x];
//                                                                     mp[p]++;
//                                                                 }
//                                                             }
//                                                         }
//                                                     }
//                                                 }
//                                             }
//                                         } else if (a[r] == 1) {
//                                             for (int m = r + 1; m < 100; m++) {
//                                                 if (a[m] == 0 || a[m] == 1 || a[m] == 2) {
//                                                     for (int z = m + 1; z < 100; z++) {
//                                                         if (a[z] == 0) {
//                                                             for (int x = z + 1; x < 100; x++) {
//                                                                 if (a[x] >= 1 && a[x] <= 9) {
//                                                                     cnt++;
//                                                                     int p = 20230000 + a[r] * 1000 + a[m] * 100 + a[z] * 10 + a[x];
//                                                                     mp[p]++;
//                                                                 }
//                                                             }
//                                                         } else if (a[z] == 1 || a[z] == 2) {
//                                                             for (int x = z + 1; x < 100; x++) {
//                                                                 if (a[x] >= 0 && a[x] <= 9) {
//                                                                     cnt++;
//                                                                     int p = 20230000 + a[r] * 1000 + a[m] * 100 + a[z] * 10 + a[x];
//                                                                     mp[p]++;
//                                                                 }
//                                                             }
//                                                         } else if (a[z] == 3) {
//                                                             for (int x = z + 1; x < 100; x++) {
//                                                                 if (a[x] == 1 && (a[m] == 0 || a[m] == 2)) {
//                                                                     cnt++;
//                                                                     int p = 20230000 + a[r] * 1000 + a[m] * 100 + a[z] * 10 + a[x];
//                                                                     mp[p]++;
//                                                                 }
//                                                                 if (a[x] == 0) {
//                                                                     cnt++;
//                                                                     int p = 20230000 + a[r] * 1000 + a[m] * 100 + a[z] * 10 + a[x];
//                                                                     mp[p]++;
//                                                                 }
//                                                             }
//                                                         }
//                                                     }
//                                                 }
//                                             }
//                                         }
//                                     }
//                                 }
//                             }
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     std::cout << mp.size();
// }

// int main() {
//     std::ios::sync_with_stdio(false), std::cout.tie(nullptr), std::cin.tie(nullptr);
//     int t;
//     std::cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     int n = 23333333;
//     for (int i = 1; i < n; i++) {
//         double x = i * 1.0 / n;
//         double y = (n - i) * 1.0 / n;
//         double res = 0;
//         res -= x * std::log2(x) * i + y * std::log2(y) * (n - i);
//         if (std::fabs(res - 11625907.5798) < 0.0001) {
//             std::cout << i;
//             break;
//         }
//     }
// }

// int main() {
//     std::ios::sync_with_stdio(false), std::cout.tie(nullptr), std::cin.tie(nullptr);
//     int t;
//     t = 1;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// int n, min = 1e9 + 1, max = 0;

// bool check1(int mid, std::vector<std::pair<int, int> > &arr) {
//     for (auto i : arr) {
//         if (i.first / mid > i.second) {
//             return true;
//         } else if (i.first / mid < i.second) {
//             return false;
//         }
//     }
//     min = std::min(min, mid);
//     max = std::max(max, mid);
//     return true;
// }
// bool check2(int mid, std::vector<std::pair<int, int> > &arr) {
//     for (auto i : arr) {
//         if (i.first / mid > i.second) {
//             return true;
//         } else if (i.first / mid < i.second) {
//             return false;
//         }
//     }
//     min = std::min(min, mid);
//     max = std::max(max, mid);
//     return false;
// }

// int main () {
//     std::cin >> n;
//     std::vector<std::pair<int, int> > a(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i].first >> a[i].second;
//     }
//     int l = 0, r = 1e9 + 1;
//     while (l + 1 < r) {
//         int mid = (l + r) >> 1;
//         if (check1(mid, a)) {
//             l = mid;
//         } else {
//             r = mid;
//         }
//     }
//     l = 0, r = 1e9 + 1;
//     while (l + 1 < r) {
//         int mid = (l + r) >> 1;
//         if (check2(mid, a)) {
//             l = mid;
//         } else {
//             r = mid;
//         }
//     }
//     std::cout << min << " " << max;
//     return 0;
// }




#include <iostream>
int main () {
    int n;
    std::cin >> n;
    int min = 0, max = 1e9 + 1;
    for (int i = 0; i < n; i++) {
        int x, y;
        std::cin >> x >> y;
        min = std::max(min, x / (y + 1) + 1);
        max = std::min(max, x / y);
    }
    std::cout << min << " " << max;
    return 0;
}