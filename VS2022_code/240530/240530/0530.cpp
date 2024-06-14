#include <iostream>
#include <string>
#include <regex>

void verifyPassword() {
    int n;
    std::cin >> n;
    std::string password;
    std::cin >> password;

    std::regex digitPattern("\\d+");
    std::regex letterPattern("[a-zA-Z]+");

    bool containsDigits = std::regex_search(password, digitPattern);
    bool containsLetters = std::regex_search(password, letterPattern);

    if (containsDigits && containsLetters) { // 如果既包含数字又包含字母
        std::cout << "YES\n";
    }
    else {
        std::cout << "NO\n";
    }
}

int main() {
    std::ios::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);
    int t;
    std::cin >> t;
    while (t--) {
        verifyPassword();
    }
    return 0;
}
