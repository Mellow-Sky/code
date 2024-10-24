// #include <iostream>

// void vol() {
//     int a, b;
//     std::cin >> a >> b;
//     while(a) {
//         if(a >= b) {
//             std::cout << a << "\n";
//             return;
//         }
//         a--;
//         b -= 2;
//     }
//     std::cout << "0\n";
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

// int a, b;
// void vol() {
//     std::cin >> a >> b;
//     if (a >= b) {
//         std::cout << a << "\n";
//         return;
//     } else {
//         if (2 * a <= b) {
//             std::cout << "0\n";
//             return;
//         } else {
//             std::cout << a - (b - a) << "\n";
//             return;
//         }
//     }

// }

// int main() {
//     int t;
//     std::cin >> t;
//     while (t--) {
//         vol();
//     }

//     return 0;
// }



// #include <iostream>

// void vol() {
//     int a, b;
//     std::cin >> a >> b;

    
// }

// int main() {
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
//     int n, k;
//     std::cin >> n >> k;
//     std::vector <int> a(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }
    
// }


// int main() {
//     int t;
//     std::cin >> t;
//     while (t--) {
//         vol();
//     }
//     return 0;
// }



// #include <iostream>
// #include <vector>
// int main () {
//     // std::cout << __builtin_clz(0);
//     // auto t = 0;
//     // std::cin >> t;
//     // std::cout << a << sizeof(a);
//     // auto a = 0LL, b = 0LL;
//     // std::cin >> a >> b;
//     // std::cout << a + b;

//     std::vector <auto> a;
//     auto b = 0;
//     //std::cin >> b;
//     a.push_back(b);
//     std::cout << a.pop_back();

//     return 0;
// }



// #include <iostream>

// bool fermat() {
//   const int max_value = 1000;

//   // Endless loop with no side effects is UB
//   for (int a = 1, b = 1, c = 1; true;) {
//     if (((a * a * a) == ((b * b * b) + (c * c * c))))
//       return true;  // disproved :()
//     a++;
//     if (a > max_value) {
//       a = 1;
//       b++;
//     }
//     if (b > max_value) {
//       b = 1;
//       c++;
//     }
//     if (c > max_value) c = 1;
//   }

//   return false;  // not disproved
// }

// int main() {
//   std::cout << "Fermat's Last Theorem ";
//   fermat() ? std::cout << "has been disproved!\n"
//            : std::cout << "has not been disproved.\n";
// }



#include <iostream>
int main () {
    std::cout << -6 / 2;
    return 0;
}