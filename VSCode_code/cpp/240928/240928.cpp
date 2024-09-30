// #include<iostream>
// #include<vector>
// #include<algorithm>
// int main() {
//     std::vector<int> a(3);
//     for(int i = 0; i < 3; i++) {
//         std::cin >> a[i];
//     }
//     std::sort(a.begin(), a.end());
//     if(a[0] == 5 && a[1] == 5 && a[2] == 7) {
//         std::cout << "YES";
//     } else {
//         std::cout << "NO";
//     }


//     return 0;
// }


// #include<iostream>
// #include<string>
// #include<algorithm>
// #include<vector>
// bool cmp(std::string a, std::string b) {
//     if(a[0] < b[0]) {
//         return true;
//     } else {
//         return false;
//     }
// }

// int main() {
//     int n, l;
//     std::cin >> n >> l;
//     std::string a;
//     std::string s = "";
//     std::vector<std::string> v(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a;
//         std::sort(a.begin(), a.end());
//         v[i] = a;
//     }
//     std::sort(v.begin(), v.end(), cmp);
//     for(int i = 0; i < n; i++) {
//         s += v[i];
//     }
//     std::cout << s;
//     return 0;
// }


// #include<iostream>
// #include<string>
// #include<vector>
// #include<algorithm>
// int main() {
//     int n, l;
//     std::cin >> n >> l;
//     std::string s[1000];
//     for(int i = 0; i < n; i++) {
//        std::cin >> s[i];
//     }
//     std::sort(s, s + n);
//     for(int i = 0; i < n; i++)
//         std::cout << s[i];
//     return 0;
// }


#include<iostream>
#include<vector>
