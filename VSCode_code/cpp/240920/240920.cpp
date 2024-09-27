// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     int n, k;
//     std::cin >> n >> k;
//     std::vector<int> vec(n);
//     int cnt = 0;
//     for(int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         cnt += x;
//         vec[i] = x;
//     }
//     int l = 0, r = n - 1;
//     for(int i = 0 ; i < k; i++) {
//         if(vec[l] > vec[r]) {
//             cnt -= vec[r];
//         }else {
//             cnt -= vec[l];
//         }
//         l++;
//         r--;
//     }
//     cout << cnt; 
//     return 0;
// }




// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     int n, k;
//     cin >> n >> k;
//     vector<int> vec(n, 0), l(k + 1, 0), r(k + 1, 0);
//     for(int i = 0; i < n; i++) {
//         cin >> vec[i];
//         sum += vec[i];
//     }
//     int cnt = 0;
//     for(int i = 0; i <= k; i++) {
//         int temp = 0;
//         for(int j = 0; j < i; j++) {
//             temp += vec[j];
//         }
//         for(int j = 0; j < i; j++) {
//             temp += vec[n - 1 - j];
//         }
//         cnt = max(cnt, temp);
//     }
//     cout << cnt;
//     return 0;
// }


