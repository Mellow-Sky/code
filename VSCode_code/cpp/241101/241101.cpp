// #include <iostream>

// void vol() {
//     int n;
//     std::cin >> n;
//     int a = 0, b = 0;
//     for (int i = 0; i < n; i++) {
//         int x, y;
//         std::cin >> x >> y;
//         a = std::max(a, x);
//         b = std::max(b, y);
//     }
//     std::cout << (a + b) * 2 << "\n";
// }

// int main () {
//     int t;
//     std::cin >> t;
//     while (t--) {
//         vol();
//     } 
//     return 0;
// }


// #include <iostream>
// #include <vector>
// void vol() {
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }
//     int max = 0;
//     for (int i = 0; i < n; i++) {
//         int temp = 0;
//         for (int j = i; j < n; j++) {
//             if (a[j] <= a[i]) {
//                 temp++;
//             }
//         }
//         max = std::max(max, temp);
//     }
//     std::cout << n - max << "\n";
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
#include <vector>
void vol() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
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