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
//     std::vector<bool> alis(a.size(), true), bob(a.size(), true);
//     while (l < a.size()) {
//         if (a[l] == 0) {
//             l++;
//             continue;
//         }
//         if (a[r] == 1)
//         a[l]--;
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
void vol() {
    int n, k;
    std::cin >> n >> k;
    std::string s;
    std::cin >> s;
    
}
int main () {
    int t;
    std::cin >> t;
    while (t--) {
        vol();
    }
    return 0;
}