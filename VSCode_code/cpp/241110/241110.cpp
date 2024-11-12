// #include <iostream>
// #include <string>
// #include <vector>
// int main () {
//     int n;
//     std::cin >> n;

//     std::string s;
//     std::cin >> s;

//     std::vector<int> a;
//     std::vector<char> b;
//     for (int i = 0; i < n; i++) {
//         if (s[i] >= 'a' && s[i] <= 'z') {
//             std::cout << s[i];
//         }
//         if (s[i] >= '0' && s[i] <= '9') {
//             a.push_back(s[i] - '0');
//         } else if (s[i] >= 'A' && s[i] <= 'Z'){
//             b.push_back(s[i]);
//         }
//     }
//     for (auto i : a) {
//         std::cout << i;
//     }
//     for (auto i : b) {
//         std::cout << i;
//     }
//     return 0;
// }


// #include <iostream>

// int main () {
//     int n;
//     std::cin >> n;
//     while (n--) {
//         int a, b, c, d;
//         std::cin >> a >> b >> c >> d;
//         std::cout << (a / b) - ((c / d) - 1) << " ";
//     }
//     return 0;
// }



// #include <iostream>

// bool check(int b, int c, int d, int mid) {
//     if (((double)mid) / (double)b >= (double)c / (double)d) {
//         return false;
//     } else {
//         return true;
//     }
// }

// int main () { 
//     std::ios::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);
//     int n;
//     std::cin >> n;
//     while (n--) {
//         long long a, b, c, d;
//         std::cin >> a >> b >> c >> d;
//         long long l = 0, r = (b * c) / d + 1;
//         while (l + 1 < r) {
//             int mid = (l + r) >> 1;
//             if (check(b, c, d, mid)) {
//                 l = mid;
//             } else {
//                 r = mid;
//             }
//         }
//         std::cout << a - l << " ";
//     }
//     return 0;
// }


// #include <iostream>

// int main () {
//     int n;
//     std:cin >> n;
//     while (n--) {
//         double a, b, c, d;
//         std::cin >> a >> b >> c >> d;
//         int x = (b * c) / d;
//         std::cout << a - x << " ";
//     }
//     return 0;
// }


// #include <iostream>
// #include <vector>
// #include <string>

// int main () {
//     int n, c;
//     std::cin >> n >> c;
//     int size = 0, temp = c;
//     while (temp) {
//         temp /= 10;
//         size++;
//     }
//     int x = n - size - 2;


//     return 0;
// }


// #include <iostream>
// #include <vector>
// int main () {
//     int n;
//     std::cin >> n;
//     std::vector<long long> a;
//     while (n--) {
//         long long a, b, c, d;
//         std::cin >> a >> b >> c >> d;
//         long long x = b * c;
//         long long l = 0, r = x;
//         while (l + 1 < r) {
//             long long mid = l + r >> 1;
//             if (mid * d < x) {
//                 l = mid;
//             } else {
//                 r = mid;
//             }
//         }
//         a.push_back(a - l);
//         //std::cout << a - l << " ";
//     }
//     for (auto i : a) {
//         std:cout << i << " ";
//     }
//     return 0;
// }



// #include <iostream>
// #include <string>
// int main () {
//     int n;
//     std::cin >> n;
//     int ans = 0;
//     while (n--) {
//         std::string s;
//         std::cin >> s;
//         if (s[1] == '+') {
//             ans++;
//         } else {
//             ans--;
//         }
//     }
//     std::cout << ans;
//     return 0;
// }