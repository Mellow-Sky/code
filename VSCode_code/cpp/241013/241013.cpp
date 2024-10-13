// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main() {
//     int n, arr[210];
//     cin >> n;
//     for(int i = 0; i < n; i++) {
//         cin>>arr[i];
//     }
//     int min_val = *min_element(arr, arr + n);
//     // for(int i = 0; i < n; i++) {
//     //         min_val = min(min_val, arr[i]);
//     // }    
//     for(int i = 0; i < n; i++) {
//         if(arr[i] == min_val) {
//             cout << i + 1 << endl;
//             swap(arr[0], arr[i]);
//             break;
//         }
//     }
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }


// #include<iostream>
// int main() {
//     int n;
//     std::cin >> n;
//     if(n >=10 && n <= 99 && n / 10 == n % 10) {
//         std::cout << "YES";
//     } else {
//         std::cout << "NO";
//     }

//     return 0;
// }



// #include<iostream>
// #include<vector>
// int main() {
//     int n, k;
//     std::cin >> n >> k;
//     std::vector<int> a(n);
//     for(int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }
//     int cnt = 0;
//     for(int i = 0; i < n - k + 1; i++) {
//         int l = i, r = i + k - 1;
//         int temp = 0;
//         while(l <= r) {
//             if(a[l] != a[r]) {
//                 temp++;
//             }
//             if(temp >= 2) {
//                 break;
//             }
//             l++;
//             r--;
//         }
//         if(temp == 1) {
//             cnt++;
//         }
//     }
//     std::cout << cnt;
//     return 0;
// }


#include<iostream>
#include<vector>
const int N = 150;
const int M = 150;
int n, m;
bool b = false;
std::vector<std::vector<int>> a(N, std::vector<int>(M));
void dfs(int x, int y) {
    if(x == n - 1 && y == m - 1) {
        b = true;
        return;
    }
    if(a[x][y] == a[x + 1][y]) {
        dfs(x + 1, y);
    }
    if(a[x][y] == a[x][y + 1]) {
        dfs(x, y + 1);
    }
}

void vol() {
    std::cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            std::cin >> a[i][j];
        }
    }
    b = false;
    dfs(0, 0);
    if(b) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
    }
}

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        vol();
    }
    return 0;
}