// #include <iostream>
// int main () {
//     long long n, k;
//     std::cin >> n >> k;
//     long long x = n & 1 ? n / 2 + 1 : n / 2;
//     if (k > x) {
//         std::cout << (k - x) * 2;
//     } else {
//         std::cout << k * 2 - 1;
//     }
//     return 0;
// }



// #include <iostream>
// void vol() {
//     int n;
//     std::cin >> n;
//     for (int i = 0; i < n; i++) {
//         int a;
//         std::cin >> a;
//         std::cout << n + 1 - a << " ";
//     }
//     std::cout << "\n";
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
// #include <string>
// int main () {
//     std::string s;
//     std::cin >> s;
//     int a = 0, b = 0;
//     bool c = true;
//     for (int i = 0; i < s.size(); i++) {
//         if (c && s[i] == '0') {
//             b++;
//             c = false;
//         } else if (c && s[i] == '1') {
//             a++;
//             c = false;
//         } else if (s[i] == '1') {
//             b++;
//             c = true;
//         } else if (s[i] == '0') {
//             a++;
//             c = true;
//         }
//     }
//     std::cout << b << "\n" << a;
//     return 0;
// }



// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string a;
//     cin >> a;
//     for (int i = 0; i <a.size(); i += 2) {
//         if (a[i] == '1') {
//             a[i] = '0';
//         }
//         else {a[i] = '1';}
//     }
//     int n = 0;
//     for (int j = 0; j < a.size(); j++)
//     {
//         if (a[j] == '1'){
//             n++;
//         }
//     }
//     cout << a.size()-n<<endl;
//     cout << n;
//     return 0;
// }




// #include <iostream>

// int main () {
//     long long n;
//     std::cin >> n;
//     long long sum = 0;
//     for (int i = 0; i < n; i++) {
//         long long x;
//         std::cin >> x;
//         sum += x;
//     }
//     std::cout << sum;
//     return 0;
// }



#include <iostream>
