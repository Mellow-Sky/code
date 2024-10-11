// #include<iostream>
// int main() {
//     double a, b, h;
//     std::cin >> a >> b >> h;
//     std::cout << (a + b) * h / 2;
//     return 0;
// }


// #include<iostream>
// #include<string>
// int main() {
//     std::string a, b, c;
//     std::cin >> a >> b >> c;
//     int da = 0, db = 0, dc = 0;
//     int x = 1;
//     while(true) {
//         if(x == 1) {
//             if(da < a.size()) {
//                 if(a[da] == 'a') {
//                     da++;
//                 } else if(a[da] == 'b') {
//                     da++;
//                     x = 2;
//                     continue;
//                 } else if(a[da] == 'c') {
//                     da++;
//                     x = 3;
//                     continue;
//                 }
//             } else {
//                 std::cout << "A";
//                 break;
//             }
//         } else if(x == 2) {
//             if(db < b.size()) {
//                 if(b[db] == 'a') {
//                     db++;
//                     x = 1;
//                     continue;
//                 } else if(b[db] == 'b') {
//                     db++;
//                     continue;
//                 } else if(b[db] == 'c') {
//                     db++;
//                     x = 3;
//                     continue;
//                 }
//             } else {
//                 std::cout << "B";
//                 break;
//             }

//         } else if(x == 3) {
//             if(dc < c.size()) {
//                 if(c[dc] == 'a') {
//                     x = 1;
//                     dc++;
//                     continue;
//                 } else if(c[dc] == 'b') {
//                     x = 2;
//                     dc++;
//                     continue;
//                 } else if(c[dc] == 'c') {
//                     dc++;
//                     continue;
//                 }
//             } else {
//                 std::cout << "C";
//                 break;
//             }
//         }
//     }
//     return 0;
// }






// #include<iostream>
// #include<string>
// int main() {
//     std::string s;
//     std::cin >> s;
//     long long ans = 0, k = 1 << (s.size() - 1), t;
//     t = k / 2;
//     for(long long i = s.size() - 1; i >= 0; i--) {
//         ans += (s[i] - '0') * k;
//         k = k * 5 + t;
//     }
//     std::cout << ans;
//     return 0;
// }



// #include<iostream>
// #include<algorithm>
// int main() {
//     int n, m;
//     std::cin >> n >> m;
//     long long sum = 0, sur = 0;
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++) {
//             sum += (n - i) * (m - j);
//             sur += std::min((n - i), (m - j));
//         }
//     }
//     std::cout << sur << " " << sum - sur;
//     return 0;
// }






// #include<iostream>
// int a[2000];
// int main() {
//     std::ios::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);
//     int n;
//     std::cin >> n;
//     for(int i = 0; i < 2 * n; i++) {
//         std::cin >> a[i];
//     }
//     int index = 0;
//     int temp = 0;
//     int b[2000];
//     for(int i = 1; i <= 2000; i++) {
//         while(true){
//             if(a[index] / i != a[index + 1]) {
//                 index = 0;
//                 break;
//             }
//             if(index == 2 * n - 2) {
//                 b[temp++] = i;
//                 index = 0;
//                 break;
//             }
//             index += 2;
//         }
//     }
//     std::cout << b[0] << " " << b[temp - 1];
//     return 0;
// }






// #include<iostream>
// #include<algorithm>
// int main() {
//     int n;
//     std::cin >> n;
//     int mmin = 0, mmax = 2e9;
//     while(n--) {
//         int a, b;
//         std::cin >> a >> b;
//         mmin = std::max(mmin, a / (b + 1) + 1);
//         mmax = std::min(mmax, a / b);
//     }
//     std::cout << mmin << " " << mmax;
//     return 0;
// }







// #include<iostream>
// int main() {
//     long long n;
//     double d;
//     std::cin >> n >> d;
//     long long sum = 1;
//     for(int i = 0; i < n; i++) {
//         sum *= 2;
//     }
//     printf("%.0lf", sum * d);
//     return 0;
// }






