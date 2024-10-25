// #include<iostream>
// #include<vector>
// #include<bitset>
// using namespace std;
// int main()
// {
//     vector<int>p;
//     bitset<50> w;
//     for (int i = 2; i < 50; i++)
// {
// for (int m = 2;m<=500&& m * i <= 50; ++m)
// {
//     w[i * p[m]] = 1;
//     if (i % p[m]==0)break;
// }
// if (p[i] == 1)p.push_back(i);
// }
// int n,m;
// cin >> n >> m;
// int s[55][55] = { 0 };
// for (int i = 1; i <= n; i++)
// {
//     for (int j = 1; j <= m; j++)
//     {
//         cin >> s[i][j];
//     }
// }
// int l = 0;
// for (int i = 1; i < n; i++)
// {	
//     for (int j = 1; j < m; j++)
//     {
// 	if (w[s[i][j]] == 1)
//         {
// 	if (w[s[i][j + 1]] == 0 && w[s[i][j - 1]] == 0 && w[s[i - 1][j]] == 0 && w[s[i - 1][j + 1]] == 0 && w[s[i - 1][j - 1]] == 0 && w[s[i + 1][j]] == 0 && w[s[i + 1][j + 1]] == 0 && w[s[i + 1][j - 1]] == 0)l++;
// 	}
//     }
// }cout << l;
// return 0;
// }



// #include <iostream>
// #include <vector>

// bool prime(int x) {
//     if(x <= 3) {
//         return x > 1;
//     }
//     for (int i = 2; i < x; i++) {
//         if(x % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int n, m;
//     std::cin >> n >> m;
//     //std::vector<std::vector<int> > a(n + 2, std::vector<int>(m + 2, 0));
//     int a[52][52];
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <=m; j++) {
//             std::cin >> a[i][j];
//         }
//     }
//     int cnt = 0;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= m; j++) {
//             if (prime(a[i][j])) {
//                 if (!prime(a[i - 1][j - 1]) && !prime(a[i - 1][j]) && !prime(a[i - 1][j + 1]) && !prime(a[i][j - 1])
//                 && !prime(a[i][j + 1]) && !prime(a[i + 1][j - 1]) && !prime(a[i + 1][j]) && !prime(a[i + 1][j + 1])) {
//                     cnt++;
//                 }
//             }
//         }
//     }
//     std::cout << cnt;
//     return 0;
// }



// #include <iostream>

// void vol() {
//     int n;
//     std::cin >> n;
//     int i = 1, x = 0;
//     bool b = true;
//     while (x <= n && x >= -n) {
//          if (b) {
//             x -= 2 * i - 1;
//             i++;
//             b = false;
//          } else {
//             x += 2 * i - 1;
//             i++;
//             b = true;
//          }
//     }
//     if (b) {
//         std::cout << "Kosuke\n";
//     } else {
//         std::cout << "Sakurako\n";
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


// #include <iostream>
// #include <vector>
// #include <map>
// void vol() {
//     int n;
//     std::cin >> n;
//     std::vector<std::vector<int> > a(n + 2, std::vector<int>(n + 2, 0));
//     std::map<int, int> mp;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             std::cin >> a[i][j];
//             mp[i - j] = std::min(mp[i - j], a[i][j]);
//         }
//     }
//     int cnt = 0;
//     for (int j = 1; j <= n; j++) {
//         if(mp[1 - j] < 0) {
//             cnt += mp[1 - j];
//         }
//     }
//     for (int i = 2; i <= n; i++) {
//         if(mp[i - 1] < 0) {
//             cnt += mp[i - 1];
//         }
//     }
//     std::cout << -cnt << "\n";
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
// #include <vector>

// void vol() {
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n + 1, 0);
//     for (int i = 1; i <= n; i++) {
//         std::cin >> a[i];
//     }
//     int l = 1, r = n;
//     int cnt = n;
//     while (l + 1 < r) {
//         int temp = 0;
//         for (int i = 1; i < n; i++) {
//             if (a[i] == a[i + 1]) {
//                 temp++;
//             }
//         }
//         cnt = std::min(cnt, temp);
//         if (a[l + 1] == a[l]) {
//             std::swap(a[r], a[l]);
//         }
//         l++;
//         r--;
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



// #include <iostream>
// #include <vector>

// void vol() {
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n + 2, 0);
//     std::vector<int> b(n + 2, 0);
//     for (int i = 1; i <= n; i++) {
//         std::cin >> a[i];
//         b[i] = a[i];
//     }
//     int l = 1, r = n;
//     int cnt = n + 1;
//     while (l < r) {
//         if ((a[l] == a[l + 1] || a[l] == a[l - 1]) && a[l] != a[r] && a[l] != a[r - 1] && a[l] != a[r + 1] && a[r] != a[l - 1] && a[r] != a[l + 1]) {
//             std::swap(a[l], a[r]);
//         }
//         if ((a[r] == a[r + 1] || a[r] == a[r - 1]) && a[r] != a[l] && a[r] != a[l - 1] && a[r] != a[l + 1] && a[l] != a[r - 1] && a[l] != a[r + 1]) {
//             std::swap(a[l], a[r]);
//         }
//         int temp = 0;
//         for (int i = 1; i < n; i++) {
//             if (a[i] == a[i + 1]) {
//                 temp++;
//             }
//         }
//         cnt = std::min(cnt, temp);
//         l++;
//         r--;
//     }
//     l = n / 2, r = (n + 1) / 2;
//     while (l >= 1 && r <= n) {
//         if ((b[l] == b[l + 1] || b[l] == b[l - 1]) && b[l] != b[r] && b[l] != b[r - 1] && b[l] != b[r + 1] && b[r] != b[l - 1] && b[r] != b[l + 1]) {
//             std::swap(b[l], b[r]);
//         }
//         if ((b[r] == b[r + 1] || b[r] == b[r - 1]) && b[r] != b[l] && b[r] != b[l - 1] && b[r] != b[l + 1] && b[l] != b[r - 1] && b[l] != b[r + 1]) {
//             std::swap(b[l], b[r]);
//         }
//         int temp = 0;
//         for (int i = 1; i < n; i++) {
//             if (b[i] == b[i + 1]) {
//                 temp++;
//             }
//         }
//         cnt = std::min(cnt, temp);
//         l--;
//         r++;
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


// #include <iostream>
// #include <vector>

// void vol() {
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }
//     int cnt = 0;
//     for (int i = 0; i < n; i++) {
//         int l = i, x = 0, b = i;
//         while (l < n && b < n) {
//             int r = l, temp = 0;
//             while (r < n) {
//                 temp += a[r];
//                 if (temp == 0) {
//                     l = r + 1;
//                     x++;
//                     break;
//                 }
//                 r++;
//                 b++;
//             }
//         }
//         cnt = std::max(cnt, x);
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

void vol () {
    int n;
    std::cin >> n;
    std::vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        std::cin >> a[i];
    }
    std::vector<int> b(n + 1, 0);
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        int l = i, r = i;
        int sum = 0;
        int temp = 0;
        temp += b[i - 1];
        while (l < n && r < n) {
            sum += a[r++];
            if(sum == 0) {
                temp++;
                l = r;
                sum = 0;
            }
        }
        b[i] = temp;
        cnt = std::max(cnt, b[i]);
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