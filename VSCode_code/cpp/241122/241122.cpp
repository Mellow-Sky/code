// #include <iostream>
// void vol() {
//     int a, b;
//     std::cin >> a >> b;
//     std::cout << a + b << "\n";
// }
// int main () {
//     int t;
//     std::cin >> t;
//     while (t--) {
//         vol();
//     }
//     return 0;
// }



#include <iostream>
#include <algorithm>
// void vol() {
//     int a, b, c;
//     std::cin >> a >> b >> c;
//     int max = std::max(a, std::max(b, c));
//     int min = std::min(a, std::min(b, c));
//     std::cout << (a + b + c) - max - min << "\n";
//}


// void vol () {
//     int arr[3];
//     for (int i = 0; i < 3; i++) {
//         std::cin >> arr[i];
//     }
//     std::sort(arr, arr + 3);
//     std::cout << arr[1] << "\n";
// }
// int main () {
//     int t;
//     std::cin >> t;
//     while (t--) {
//         vol();
//     }
//     return 0;
// }




#include <iostream>
#include <string>
#include <map>
int main () {
    int n;
    std::cin >> n;
    std::map<std::string, int> mp;
    while (n--) {
        std::string s;
        std::cin >> s;
        mp[s]++;
        if(mp[s] == 1) {
            std::cout << "OK\n";
        } else {
            std::cout << s << mp[s] - 1 << "\n";
        }
    }
}