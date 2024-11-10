#include <iostream>
#include <cmath>
int main () {
    std::ios::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);
    int a[5][5];
    int p, q;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cin >> a[i][j];
            if (a[i][j] == 1) {
                p = i;
                q = j;
            }
        }
    }
    std::cout << std::abs(p - 2) + std::abs(q - 2);
    return 0;
}