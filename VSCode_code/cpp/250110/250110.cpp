#include <iostream>
#include <string>
#include <map>
int main () {
    std::ios::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);
    int q;
    std::cin >> q;
    std::map<std::string, std::map<std::string, int> > mp;
    std::map<std::string, int> tmp;
    int cnt = 0;
    while (q--) {
        int op;
        std::cin >> op;
        if (op == 1) {
            std::string s1, s2;
            std::cin >> s1 >> s2;
            if (tmp[s1] == 0) {
                cnt++;
            }
            if (mp[s1][s2] == 0) {
                mp[s1][s2]++;
                tmp[s1]++;
            }
        } else if (op == 2) {
            std::string s;
            std::cin >> s;
            std::cout << tmp[s] << "\n";
        } else if (op == 3) {
            std::string s1, s2;
            std::cin >> s1 >> s2;
            if (mp[s1][s2]) {
                std::cout << "1\n";
            } else {
                std::cout << "0\n";
            }
        } else if (op == 4) {
            std::cout << cnt << "\n";
        }
    }
    return 0;
}