// #include<iostream>
// int main() {
//     int w;
//     std::cin >> w;
//     if (w > 2 && (w - 2) % 2 == 0) {
//         std::cout << "YES";
//     } else {
//         std::cout << "NO";
//     }
//     return 0;
// }



// #include<iostream>
// #include<algorithm>
// void vol() {
//     int n;
//     std::cin >> n;
//     int x, y;
//     std::cin >> x >> y;
//     std::cout << (n + std::min(x, y) - 1) / std::min(x, y) << std::endl; 
// }

// int main() {
//     int t;
//     std::cin >> t;
//     while(t--) {
//         vol();
//     }
//     return 0;
// }


// #include<iostream>
// #include<string>
// int main() {
//     int n;
//     std::cin >> n;
//     while (n--) {
//         std::string s;
//         std::cin >> s;
//         if (s.size() > 10) {
//             std::cout << s[0] << s.size() - 2 << s[s.size() - 1] << std::endl;
//         } else {
//             std::cout << s << std::endl;
//         }
//     }
//     return 0;
// }




// #include <iostream>
// void vol () {
//     int a, b;
//     std::cin >> a >> b;
//     if (a % 2 != 0) {
//         std::cout << "NO\n";
//         return;
//     }
//     b %= 2;
//     if (b != 0 && a < 2) {
//         std::cout << "NO\n";
//     } else {
//         std::cout << "YES\n";
//     }
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
// int main () {
//     int ans = 0;
//     for (int i = 1; i <= 5; i++) {
//         for (int j = 1; j <= 5; j++) {
//             int x;
//             std::cin >> x;
//             if(x == 1) {
//                 ans = ((i - 3 > 0) ? (i - 3) : - (i - 3)) + ((j - 3 > 0) ? (j - 3) : - (j - 3));
//             }
//         }
//     }
//     std::cout << ans;
//     return 0;
// }



#include<iostream>
#include<algorithm>
void vol() {
    int n, m, k;
    std::cin >> n >> m >> k;
    std::cout << std::min(n, k) * std::min(m, k) << std::endl;
}

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        vol();
    }
    return 0;
}