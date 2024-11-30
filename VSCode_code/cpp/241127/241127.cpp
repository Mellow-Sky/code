// #include <iostream>
// int main () {
//     int t;
//     std::cin >> t;
//     while (t--) {
//         int n, m;
//         std::cin >> n >> m;
//         std::cout << (n * m % 2 == 0 ? n * m / 2 : n * m / 2 - 1) << "\n";
//     }
//     return 0;
// }



//
//#include <iostream>
//int main () {
//    int t;
//    std::cin >> t;
//    while (t--) {
//        int n, m;
//        std::cin >> n >> m;
//        std::cout << n * (m >> 1) << '\n';
//    }
//}

#include <iostream>
 #include <string> 
 std::string s; 
 int n; 
 bool check(int i) {
    if (i < 0) {
        return false;
    }
   if (s[i] == '1'  && s[i + 1] == '1'  && s[i + 2] == '0' && s[i + 3] == '0') {
        return true;
   }

}
void vol() {
    std::cin >> s;
    n = s.size();

int main () {
    int t;
    std::cin >> t;
    while (t--) {
        vol();
    }
    return 0;
}
