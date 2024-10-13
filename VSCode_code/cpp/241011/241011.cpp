// #include<iostream>
// #include<vector>
// void vol() {
//     int n;
//     std::cin >> n;
//     long long ans = 0;
//     std::vector<int> a(n);
//     for(int i = 0; i < n; i++) {
//         std::cin >> a[i];
//         ans += a[i];
//     }
//     std::cout << ans - 2 * a[n - 2] << std::endl;
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
// #include<map>
// int main() {
//     std::map<unsigned char, std::string> a;
//     a['a'] = "ÄãºÃ";
//     std::cout << a['a'];

//     return 0;
// }




#include<iostream>
#include<string>
void vol() {
    int n;
    std::cin >> n;
    std::string s = "aeiou";
    int arr[5];
    for(int i = 0; i < 5; i++) {
        arr[i] = n % 5 >= (i + 1) ? n / 5 + 1 : n / 5;
    }

    for(int i = 0, x = 0; i < 5; i++, x++) {
        for(int j = 0; j < arr[x]; j++) {
            std::cout << s[i];
        }
    }
    std::cout << std::endl;
}
int main() {
    int t;
    std::cin >> t;
    while(t--) {
        vol();
    }
    return 0;
}