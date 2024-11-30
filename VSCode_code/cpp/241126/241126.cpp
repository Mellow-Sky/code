#include <iostream>
#include <string>
#include <algorithm>
int main () {
    std::string string;
    std::cin >> string;
    int count = std::count(string.begin(), string.end(), '4') + std::count(string.begin(), string.end(), '7');
    if (count == 4 || count == 7) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
    return 0;
}