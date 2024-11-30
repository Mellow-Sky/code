#include <iostream>
#include <vector>
#include <map>
void vol() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    std::map<int, int> mp;
    bool b1 = false, b2 = false;
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        mp[x]++;
        if (mp[x] == 2 && !b1) {
            b1 = true;
            a[i] = 2;
        } else if (mp[x] == 2 && !b2) {
            b2 = true;
            a[i] = 3;
        } else {
            a[i] = 1;
        }
    }
    if (b1 && b2) {
        for (auto i : a) {
            std::cout << i << " ";
        }
        std::cout << "\n";
    } else {
        std::cout << "-1\n";
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