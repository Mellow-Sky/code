#include <iostream>
#include <cmath>
int main () {
    int n, k, l, c, d, p, nl, np;
    std::cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    std::cout << std::min(std::min((k * l / nl), (c * d)), (p / np)) / n;
    return 0;
}