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


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArraySum(vector<int>& A, int k) {
    int n = A.size();
    if (k >= n) { // 如果操作次数 k 大于或等于数组长度，直接返回数组所有元素的和
        return 0;
    }

    // 前缀和数组，表示从前面选 i 个元素的和
    vector<int> frontSum(k + 1, 0);
    // 后缀和数组，表示从后面选 i 个元素的和
    vector<int> backSum(k + 1, 0);

    // 计算前缀和
    for (int i = 1; i <= k; ++i) {
        frontSum[i] = frontSum[i - 1] + A[i - 1];
    }

    // 计算后缀和
    for (int i = 1; i <= k; ++i) {
        backSum[i] = backSum[i - 1] + A[n - i];
    }

    int maxSum = 0;
    // 计算从前面选 i 个元素，从后面选 k - i 个元素的最大和
    for (int i = 0; i <= k; ++i) {
        maxSum = max(maxSum, frontSum[i] + backSum[k - i]);
    }

    return maxSum;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    int result = maxArraySum(A, k);
    cout << result << endl;

    return 0;
}
