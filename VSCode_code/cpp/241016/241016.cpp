#include<iostream>
#include<map>
int main() {
    int n;
    std::cin >> n;
    std::map<int, int> x, y;
    bool b = false;
    for(int i = 0; i < n; i++) {
        int a, b;
        std::cin >> a >> b;
        x[a]++;
        y[b]++;
        if(x[a] == 3 || y[b] == 3) {
            b = true;
        }
    }
    if(b) {
        std::cout << "Yes";
    } else {
        std::cout << "No";
    }
}