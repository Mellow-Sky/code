#include <iostream>
#include <vector>
void vol() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    int max = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        max = std::max(max, a[i]);
    }
    std::cout << max + a[n - 1] << "\n";
}
int main () {
    int t;
    std::cin >> t;
    while (t--) {
        vol();
    }
    return 0;
}