#include<iostream>
#include<vector>
bool zhi(int n) {
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a;
    for(int i = 2; i <= 800; i++) {
        if(zhi(i)) {
            a.push_back(i);
        }
    }
    int cnt = 0;
    for(int i = 2; i <= n; i++) {
        for(auto j : a) {
            if(j > n) {
                break;
            }
            int x = j;
            while(x <= i) {
                if(x == i) {
                    cnt++;
                    //std::cout << i << std::endl;
                    break;
                }
                x *= x;
            }
        }
    }
    std::cout << n - cnt - 1;
    return 0;
}