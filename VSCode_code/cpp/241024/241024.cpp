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