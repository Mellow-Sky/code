#include<iostream>
#include<vector>


using i64 = long long;

void vol() {
    i64 n, k;
    std::cin >> n >> k;
    std::vector<i64> a(n);
    for(int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
}

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        vol();
    }
    return 0;
}