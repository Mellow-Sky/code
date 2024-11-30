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



