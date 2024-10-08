// #include<iostream>
// #include<vector>
// #include<cmath>
// std::vector<int> a(10, 0);
// int ans = 2e9;
// int n, k;

// void vol(int x, int t) {
//     if(x >= n) {
//         ans = std::min(ans, x);
//         return;
//     }
//     if(t > 5) {
//         return;
//     }
//     for(int i = 0; i <= 9; i++) {
//         if(a[i] == 0) {
//             vol(x * 10 + i, t + 1);
//         }
//     }
// }

// int main() {
//     std::cin >> n >> k;
//     for(int i = 0; i < k; i++) {
//         int x;
//         std::cin >> x;
//         a[x]++;
//     }
//     vol(0, 0);
//     std::cout << ans;
//     return 0;
// }



// #include<iostream>

// int main() {
//     int n, ans = 0;
//     std::cin >> n;
//     for(int i = 1; i <= n; i++) {
//         ans += i;
//     }
//     std::cout << ans;
//     return 0;
// }



// #include<iostream>
// #include<string>
// int main() {
//     std::string s;
//     char ans[10];
//     std::cin >> s;
//     int index = 0;
//     for(int i = 0; i < s.size(); i++) {
//         if(s[i] == '0') {
//             ans[index++] = '0';
//         } else if(s[i] == '1') {
//             ans[index++] = '1';
//         } else if(s[i] == 'B' && index != 0) {
//             index--;
//         }
//     }
//     for(int i = 0; i < index; i++) {
//         std::cout << ans[i];
//     }

//     return 0;
// }



// #include<iostream>
// #include<vector>
// #include<cmath>
// int main() {
//     long long n;
//     std::cin >> n;
//     std::vector<long long> a(n);
//     long long sum = 0;
//     for(int i = 0; i < n; i++) {
//         std::cin >> a[i];
//         sum += a[i];
//     }
//     int p = (sum + n - 1) / n;
//     int q = sum / n;
//     long long ans1 = 0, ans2 = 0;
//     for(int i = 0; i < n; i++) {
//         ans1 += (a[i] - p) * (a[i] - p);
//         ans2 += (a[i] - q) * (a[i] - q);
//     }
//     std::cout << std::min(ans1, ans2);
//     return 0;
// }










// #include<iostream>
// #include<string>
// #include<map>

// int main() {
//     std::string s;
//     std::cin >> s;
//     std::map<char, int> m;
//     char c = '0';
//     for(int i = 0; i < s.length(); i++) {
//         m[s[i]]++;
//         if(m[s[i]] >= s.length() / 2) {
//             c = s[i];
//             break;
//         }
//     }
//     if(c == '0') {
//         std::cout << "-1 -1\n";
//         return 0;
//     }

//     int l = 0, r = s.length() - 1;
//     while(true) {
//         if(s[l] != c) {
//             l++;
//             continue;
//         }
//         break;
//     }
//     std::cout << l + 1 << " " << r;
//     return 0;
// }






// #include<iostream>
// #include<string>
// int main() {
//     std::string s;
//     std::cin >> s;
//     for(int i = 0; i < s.size(); i++) {
//         if(s[i] == s[i + 1]) {
//             std::cout << i + 1 << " " << i + 2;
//             return 0;
//         }
//         if(s[i] == s[i + 2]) {
//             std::cout << i + 1 << " " << i + 3;
//             return 0;
//         }
//     }
//     std::cout << -1 << " " << -1;
//     return 0;
// }






// #include<iostream>
// int main() {
//     long long n, k, x, y;
//     std::cin >> n >> k >> x >> y;
//     if(n > k) {
//         std::cout << (k * x) + (n - k) * y;
//         return 0;
//     }
//     std::cout << n * x;
//     return 0;
// }





// #include<iostream>
// #include<string>
// #include<map>

// int main() {
//     std::string s;
//     std::cin >> s;
//     std::map<char, int> m;
//     for(int i = 0; i < s.size(); i++) {
//         m[s[i]]++;
//     }
//     for(int i = 0; i < s.size(); i++) {
//         if(m[s[i]] % 2 != 0) {
//             std::cout << "No";
//             return 0;
//         }
//     }
//     std::cout << "Yes";
//     return 0;
// }



// #include<iostream>

// void vol() {
//     int a, b;
//     std::cin >> a >> b;
//     if(a % 2 != 0) {
//         std::cout << "NO\n";
//         return;
//     }
//     b %= 2;
//     if(b != 0 && a < 2) {
//         std::cout << "NO\n";
//         return;
//     }
//     std::cout << "YES\n";
//     return;
// }

// int main() {
//     int t;
//     std::cin >> t;
//     while(t--) {
//         vol();
//     }
//     return 0;
// }




#include<iostream>

int main() {
    


    return 0;
}