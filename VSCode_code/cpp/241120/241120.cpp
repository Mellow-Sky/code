// #include <iostream>
// #include <string>
// #include <algorithm>
// int main () {
//     std::string s;
//     std::cin >> s;
//     if (s[0] >= 'a' && s[0] <= 'z') {
//         for (int i = 1; i < s.size(); i++) {
//             if (s[i] >= 'a' && s[i] <= 'z') {
//                 std::cout << s;
//                 return 0;
//             }
//         }
//         s[0] -= 32;
//         std::transform(s.begin() + 1, s.end(), s.begin() + 1, ::tolower);
//         std::cout << s;
//     } else {
//         for (int i = 1; i < s.size(); i++) {
//             if (s[i] >= 'a' && s[i] <= 'z') {
//                 std::cout << s;
//                 return 0;
//             }
//         }
//         std::transform(s.begin(), s.end(), s.begin(), ::tolower);
//         std::cout << s;
//     }
//     return 0;
// }




#include <iostream>
#include <string>
#include <algorithm>
int main () {
    std::string s;
    std::cin >> s;
    bool b = false;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            b = true;
            break;
        }
    }
    if (b) {
        std::cout << s;
    } else {
        if (s[0] >= 'a' && s[0] <= 'z') {
            std::transform(s.begin(), s.begin() + 1, s.begin(), ::toupper);
            std::transform(s.begin() + 1, s.end(), s.begin() + 1, ::tolower);
            std::cout << s;
        } else {
            std::transform(s.begin(), s.end(), s.begin(), ::tolower);
            std::cout << s;
        }
    }
    return 0;
}