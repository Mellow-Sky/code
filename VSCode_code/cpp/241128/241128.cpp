#include <iostream>
void vol() {
    int n, k;
    std::cin >> n >> k;
    long long sum = 1;
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        sum *= x;
    }
    if (2023 % sum == 0) {
        std::cout << "YES\n";
        for (int i = 0; i < k - 1; i++) {
            std::cout << "1 ";
        }
        std::cout << (2023 / sum > 0 ? 2023 / sum : 1);
        std::cout << "\n";
    } else {
        std::cout << "NO\n";
    }
}
int main () {
    int t;
    std::cin >> t;
    while (t--) {
        vol();
    }
    return 0;
}