#include <iostream>
#include <string>
void vol() {
    int n;
    std::cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        std::string s;
        std::cin >> s;
        if (!s.find("bnu16-")) {
            ans++;
        }
    }
    std::cout << ans << "\n";
}
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        vol();
    }
    return 0;
}