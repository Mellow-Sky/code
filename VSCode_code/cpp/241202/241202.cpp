// #include <iostream>
// #include <vector>
// #include <algorithm>
// void vol() {
//     int n, k;
//     std::cin >> n >> k;
//     std::vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }
//     std::sort(a.begin(), a.end());
//     int sum = 0;
//     for (int i = n - 1; i >= 0; i--) {
//         if (sum + a[i] <= k) {
//             sum += a[i];
//         } else {
//             break;
//         }
//     }
//     std::cout << k - sum << "\n";
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
// #include <map>
// #include <vector>
// #include <algorithm>
// void vol() {
//     int n;
//     std::cin >> n;
//     std::map<int, int> mp;
//     for (int i = 0; i < n; i++) {
//         int x;
//         std::cin >> x;
//         mp[x]++;
//     }
//     std::vector<int> a;
//     for (auto i : mp) {
//         a.push_back(i.second);
//     }
//     std::sort(a.begin(), a.end());
//     int l = 0, r = a.size() - 1;
//     std::vector<bool> bob(a.size(), true);
//     std::vector<int> anum(a.size(), 0);
//     bool b = true;
//     while (l < a.size()) {
//         if (b) {
//             if (a[l] == 1 && bob[l]) {
//                 anum[l] = 2;
//                 a[l]--;
//             } else if (a[l] == 0){
//                 l++;
//                 continue;
//             } else {
//                 anum[l] = 1;
//                 a[l]--;
//             }
//             b = false;
//         } else {
//             if (a[r] > 0) {
//                 a[r]--;
//                 bob[r] = false;
//             } else {
//                 r--;
//                 continue;
//             }
//             b = true;
//         }
//     }
//     int ans = 0;
//     for (auto i : anum) {
//         ans += i;
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
// void vol() {
//     int n, k;
//     std::cin >> n >> k;
//     std::string s;
//     std::cin >> s;
    
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
#include <map>
#include <vector>
#include <algorithm>
void vol() {
    int n;
    std::cin >> n;
    std::map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        mp[x]++;
    }
    std::vector<int> a;
    for (auto i : mp) {
        a.push_back(i.second);
    }
    std::sort(a.begin(), a.end());
    int ans = 0;
    bool b = true;
    for (auto i : a) {
        if (b && i == 1) {
            ans += 2;
            b = false;
        } else if (b) {
            ans++;
            b = false;
        } else if (!b && i == 1) {
            b = true;
        } else if (!b && i > 1) {
            ans++;
            b = true;
        }
    }
    std::cout << ans << "\n";
}
int main () {
    int t;
    std::cin >> t;
    while (t--) {
        vol();
    }
    return 0;
}