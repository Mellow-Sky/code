// #include<iostream>
// #include<string>
// int main() {
//     int n;
//     std::cin >> n;
//     while(n--) {
//         std::string s1, s2;
//         std::cin >> s1 >> s2;
//         int size = std::min(s1.size(), s2.size());
//         int cnt = 0;
//         for(int i = 0 ; i < size; i++) {
//             if(s1[i] == s2[i]) {
//                 cnt++;
//             } else {
//                 break;
//             }
//         }
//         if(cnt != 0) {
//             std::cout << s1.size() + s2.size() - cnt + 1 << "\n";   
//         }else {
//             std::cout << s1.size() + s2.size() << "\n";       
//         }
//     }
//     return 0;
// }



// #include <iostream>
// #include <vector>

// void vol() {
//     int n, r;
//     std::cin >> n >> r;
//     int sum = 0;
//     std::vector<int> arr(n + 1);
    
// }

// int main () {
//    int t;
//    std::cin >> t;
//    while(t--) {
//     vol();
//    }
    
//     return 0;
// }





// #include<iostream>
// #include<vector>
// #include<algorithm>
// void vol() {
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n);
//     std::vector<int> b(n), c(n);
//     int max = 0, min = 1001;
//     for(int i = 0; i < n; i++) {
//         std::cin >> a[i];
//         max = std::max(max, a[i]);
//         min = std::min(min, a[i]);
//     }
//     std::cout << (max - min) * (n - 1) << "\n";

// }

// int main() {
//     int t;
//     std::cin >> t;
//     while(t--) {
//         vol();
//     }


//     return 0;
// }



// #include<iostream>

// void vol() {
//     int n;
//     std::cin >> n;
//     std::cout << "1";
//     for(int i = 1; i < n; i++) {
//         std::cout << "0";
//     }
//     std::cout << "\n";
// }

// int main(){
//     int t;
//     std::cin >> t;
//     while(t--) {
//         vol();
//     }

//     return 0;
// }


// #include<iostream>
// #include<string>
// void vol() {
//     int n;
//     std::cin >> n;
//     int a = 0, b = 0;
//     std::string s;
//     std::cin >> s;
//     for(int i = 0; i < n; i++) {
//         if(s[i] == '1') {
//             a++;
//         } else {
//             b++;
//         }
//     }
//     if(a >= b) {
//         std::cout << "Yes\n";
//     } else {
//         std::cout << "No\n";
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



// #include<iostream>
// #include<string>
// void vol(){
//     int n;
//     std::cin >> n;
//     std::string s;
//     std::cin >> s;

//     if(n == 2) {
//         if(s[0] == '0' && s[1] == '0') {
//             std::cout << "No\n";
//             return;
//         }else {
//             std::cout << "Yes\n";
//             return;
//         }
//     }

//     if(n >= 3) {
//         if((s[s.size() - 1] == '0' && s[s.size() - 2] == '0') ||
//          (s[s.size() - 1] == '0' && s[s.size() - 2] == '0' && s[s.size() - 3] == '1')) {
//             std::cout << "No\n";
//         } else {
//             std::cout << "Yes\n";
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


// #include<iostream>
// #include<vector>

// void vol() {
//     int n, q;
//     std::cin >> n >> q;
//     std::vector<int> arr(n + 1);
//     std::string s;
//     for(int i = 1; i <= n; i++) {
//         std::cin >> arr[i];
//     }
//     std::cin >> s;

//     for(int i = 0; i < q; i++) {
//         int x;
//         std::cin >> x;
//         if(s[x] == 'R') {
//             s[x] = 'L';
//         } else {
//             s[x] = 'R';
//         }

//         bool b = false;
//         for(int i = 1; i <= n; i++) {
//             if(i == 1 && s[i] != 'R' && arr[i] > arr[i + 1]) {
//                 s[i] = 'R';

//             } else if(s[i] != 'R' && arr[i] > arr[i + 1]) {
//                 s[i] = 'R';
//             }
//         }
//     }


// }

// int main(){
//     int t;
//     std::cin >> t;
//     while(t--) {
//         vol();
//     }
//     return 0;
// }


#include<iostream>
#include<string>

void vol() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    for(int i = 0; i < n - 1; i++) {
        if(s[0] == '1' || s[n - 1] == '1' || s[i] == s[i + 1] == '1') {
            std::cout << "Yes\n";
            return;
        }
    }
    std::cout << "No\n";
}

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        vol();
    }
    return 0;
}