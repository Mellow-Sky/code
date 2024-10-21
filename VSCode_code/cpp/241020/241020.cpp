// #include<iostream>
// #include<string>
// int main() {
//     std::string s;
//     std::cin >> s;
//     if((s[0] == 'Y' || s[0] == 'y') && (s[1] == 'e' || s[1] == 'E') && (s[2] == 's' || s[2] == 'S') && s.size() == 3) {
//         std::cout << "accept";
//     }else {
//         std::cout << "wrong answer";
//     }
//     return 0;
// }



// #include<iostream>
// #include<vector>

// std::vector<int> a;

// int main() {
//     int x;
//     std::cin >> x;
//     //fun(x);
//     for(int i = x; i >= 2; i--) {
//         if(x % i == 0) {
//             a.push_back(i);
//         }
//     }
//     for(auto &i : a) {
//         int j = i;
//         bool b = false;
//         int cnt = 1;
//         while(j <= x) {
//             if(j == x) {
//                 b = true;
//             }
//             j *= j;
//             cnt++;
//         }
//         if(b) {
//             std::cout << "=" << i << "^" << cnt << "\n";
//         }
//     }
//     return 0;
// }#include<iostream>
// #include<vector>

// std::vector<int> a;

// int main() {
//     int x;
//     std::cin >> x;
//     std::cout << x << "\n";
//     //fun(x);
//     for(int i = x; i >= 2; i--) {
//         if(x % i == 0) {
//             a.push_back(i);
//         }
//     }
//     for(auto &i : a) {
//         int j = i;
//         bool b = false;
//         int cnt = 1;
//         while(j <= x) {
//             if(j == x) {
//                 b = true;
//                 break;
//             }
//             j *= i;
//             cnt++;
//         }
//         if(b) {
//             std::cout << "=" << i << "^" << cnt << "\n";
//         }
//     }
//     return 0;
// }



// #include<iostream>
// #include<vector>
// int main() {
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n + 1);
//     int cnt = 0;
//     for(int i = 0; i < n; i++) {
//         std::cin >> a[i];
//         for(int j = 0; j < i; j++) {
//             if(a[i] == a[j]) {
//                 cnt++;
//             }
//         }
//         std::cout << cnt << " ";
//     }

//     return 0;
// }



// #include<iostream>
// #include<vector>
// #include<map>
// std::map<int, int>mp;
// int main() {
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n + 1);
//     std::vector<int> b(n + 1);
//     for(int i = 1; i <= n; i++) {
//         std::cin >> a[i];
//     }
//     for(int i = 1; i <= n; i++) {
//         mp[a[i]]++;
//         int temp = 0;
//         if(mp[a[i]] >= 2) {
//             temp += mp[a[i]] - 1;
//         }
//         b[i] = b[i - 1] + temp;
//         std::cout << b[i] << " ";
//     }

//     return 0;
// }


// #include<iostream>
// #include<vector>
// #include<map>
// std::map<long long, long long>mp;
// int main() {
//     long long n;
//     std::cin >> n;
//     std::vector<long long> a(n + 1, 0);
//     std::vector<long long> b(n + 1, 0);
//     for(long long i = 1; i <= n; i++) {
//         std::cin >> a[i];
//         mp[a[i]]++;
//         b[i] = b[i - 1] + mp[a[i]] - 1;
//         std::cout << b[i] << " ";
//     }
//     return 0;
// }



// #include<iostream>

// void vol() {
//     int arr[2][2];
//     int min = 1e9 + 1;
//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 2; j++) {
//             std::cin >> arr[i][j];
//             min = std::min(arr[i][j], min);
//         }
//     }
//     if((arr[0][0] < arr[0][1] && arr[0][0] < arr[1][0]) && (arr[1][1] < arr[0][1] && arr[1][1] < arr[1][0])) {
//         if(arr[0][0] + arr[1][1] % 2 == 0) {
//             std::cout << "yukari\n";
//             return;
//         }else{
//             std::cout << "kou\n";
//             return;
//         }
//     }
//     if(arr[0][1] < arr[0][0] && arr[0][1] < arr[1][1] && arr[1][0] < arr[0][0] && arr[1][0] < arr[1][1]) {
//         if(arr[0][1] + arr[1][0] % 2 == 0) {
//             std::cout << "yukari\n";
//             return;
//         }else {
//             std::cout << "kou\n";
//             return;
//         }
//     }
    

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
#include<string>
int main() {
    std::string s;
    std::cin >> s;
    int n = s.size();
    for(int l = 0; l < n - 1; l++) {
        int r = l + 1;
        while(r < n) {
            if(s[l] != s[r]) {
                char c = s[l];
                s[l] = s[r];
                s[r] = c;
            }
            r++;
        }
    }
    std::cout << s;
    return 0;
}