#include<iostream>
int main() {
    int m, t, s;
    std::cin >> m >> t >> s;
    int sum = m * t;
    if(sum > s) {
        std::cout << m - ((s + t - 1) / t);
    }else {
        std::cout << 0;
    }
    return 0;
}