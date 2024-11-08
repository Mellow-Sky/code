// #include <iostream>
//  int main () {
//     int a;
//     std::cin >> a;
//     int x = a - 2;
//     if (a % 2 == 0 && x > 0 && x % 2 == 0) {
//         std::cout << "YES\n";
//     } else {
//         std::cout << "NO\n";
//     }
//     return 0;
//  }


#include <iostream>
#include <string>
#include <algorithm>
int main () {
    std::string s;
    std::cin >> s;
    int a = 0, b = 0;
    for (auto i : s) {
        if (i >= 'a' && a <= 'z') {
            a++;
        } else {
            b++;
        }
    }
    if (a >= b) {
        std::transform(s.begin(), s.end(),s.begin(), ::tolower);
        std::cout << s;
    } else {
        std::transform(s.begin(), s.end(),s.begin(), ::toupper);
        std::cout << s;
    }
    return 0;
}