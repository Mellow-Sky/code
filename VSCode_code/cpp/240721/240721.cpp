// #include<iostream>
// int main(){
//     int n;
//     std::cin >> n;
//     if(n == 1 || n == 2){
//         std::cout << "NO";
//     }else{
//         std::cout << "YES" << std::endl;
//         std::cout << 1 << " " << n - 1;
//     }

//     return 0;
// }

#include<iostream>
using ll = long long;
void vol(){
    ll a, b, n;
    std::cin >> a >> b >> n;
    if(a * 2 + b * 3 >= 2 * n){
        std::cout << "YES\n";
    }else{
        std::cout << "NO\n";
    }
}
int main(){
    int t;
    std::cin >> t;
    while(t--){
        vol();
    }

    return 0;
}