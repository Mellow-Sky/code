// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     int a;
//     std::cin >> a;
//    std::cout << "Bob";
// }

// int main() {
//     std::ios::sync_with_stdio(0), std::cout.tie(0), std::cin.tie(0);
//     int t;
//     t = 1;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     std::string s;
//     std::cin >> s;
//     std::cout << "Happy New Year!";
// }

// int main() {
//     std::ios::sync_with_stdio(0), std::cout.tie(0), std::cin.tie(0);
//     int t;
//     t = 1;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     ll a = 0;
//     for (int i = 1; i <= 9; i++) {
//         a += (i * i * i);
//     }
//     std::cout << a << "\n";
//     int x = 10;
//     while (true) {
//         ll p = a;
//         while (p >= 100) {
//             p /= 10;
//         }
//         ll sum = p + (a % 100);
//         if (sum * sum == a) {
//             std::cout << a << "\n";
//         }
//         a += (x * x * x);
//         x++;
//     }
// }

// int main() {
//     std::ios::sync_with_stdio(0), std::cout.tie(0), std::cin.tie(0);
//     int t;
//     t = 1;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     int n = 2025;
//     while (n <= 9999) {
//         int p = (n / 100) + (n % 100);
//         if (p * p == n) {
//             std::cout << n << "\n";
//         }
//         n++;
//     }
// }

// int main() {
//     std::ios::sync_with_stdio(0), std::cout.tie(0), std::cin.tie(0);
//     int t;
//     t = 1;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }



