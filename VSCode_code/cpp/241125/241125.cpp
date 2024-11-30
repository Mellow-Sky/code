#include <iostream>
int main () {
    int a, b;
    std::cin >> a >> b;
    int ans = 0;
    while (a <= b) {
        a *= 3;
        b *= 2;
        ans++;
    }
    std::cout << ans;
}