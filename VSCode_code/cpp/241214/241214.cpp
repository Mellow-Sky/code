// #include <iostream>
// #include <vector>
// void vol() {
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n), b(n + 1);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }
//     for (auto i : a) {
//         b[i]++;
//     }
//     int p = 0, q = 0;
//     for (auto i : b) {
//         if (i == 1) {
//             p++;
//         } else if (i > 1) {
//             q++;
//         }
//     }
//     std::cout << (p + 1) / 2 * 2 + q << "\n";
// }
// int main () {
//     int t;
//     std::cin >> t;
//     while (t--) {
//         vol();
//     }
//     return 0;
// }



#include<iostream>
using ll=long long;
int main(){
    ll t;std::cin>>t;while(t--){ll w,b;std::cin>>w>>b;std::cout<<[=](){ll ans=1;while(ans*(ans+1)/2<w+b)ans++;return (ans*(ans+1)/2>w+b?ans-1:ans);}()<<'\n';}
    return 0;
}