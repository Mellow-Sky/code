// #include<iostream>
// using namespace std;
// int main() {
//     std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     double n, m;
//     cin >> n >> m;
//     cout << n / m;

//     return 0;
// }


// #include<iostream>
// #include<string>
// using namespace std;

// string n1 = "https://www.nowcoder.com";
// string n2 = "www.nowcoder.com ";
// string a1 = "https://ac.nowcoder.com";
// string a2 = "ac.nowcoder.com";

// void vol() {
//     string str;
//     cin >> str;
//     bool bn1 = true, bn2 = true;
//     bool ba1 = true, ba2 = true;
//     int size = 0;
//     if(str.length() >= a1.length()) {
//         size = a1.length();
//     }else if(str.length() >= a2.length()) {
//         size = a2.length();
//     }
//     for(int i = 0; i < size; i++) {
//         if(n1[i] != str[i]) {
//             bn1 = false;
//         }
//         if(n2[i] != str[i]) {
//             bn2 = false;
//         }
//         if(a1[i] != str[i]) {
//             ba1 = false;
//         }
//         if(a2[i] != str[i]) {
//             ba2 = false;
//         }
//         if(i >= 8 && str[i] == "/") {
//             break;
//         }
//     }
//     if(bn1 || bn2) {
//         cout << "Nowcoder\n";
//         return;
//     }
//     if(ba1 || ba2) {
//         cout << "Ac\n";
//         return;
//     }
//     cout << "No\n";

// }

// int main() {
//     std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     int n;
//     cin >> n;
//     while(n--) {
//         vol();
//     }

//     return 0;
// }



// #include<iostream>
// #include<string>
// using namespace std;
// int main() {
//     std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     int n;
//     cin >> n;
//     while(n--) {
//         string str;
//         cin >> str;
//         if(str.find("https://www.nowcoder.com") == 0 || !str.find("www.nowcoder.com") == 0) {
//             cout<< "Nowcoder\n";
//         }else if(str.find("ac.nowcoder.com") == 0 || str.find("https://ac.nowcoder.com") == 0) {
//             cout << "Ac\n";
//         }else {
//             cout << "No\n";
//         }
//     }

//     return 0;
// }


#include<iostream>
using namespace std;
int main() {
    std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    


    return 0;
}