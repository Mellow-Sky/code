#include <iostream>
#include <vector>
#include <algorithm>
void vol() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    int max = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    max = *std::max_element(a.begin(), a.end() - 1);
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