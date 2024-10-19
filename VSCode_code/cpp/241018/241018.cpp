// #include<iostream>
// int main() {
//     int n;
//     std::cin >> n;
//     std::cout << (n + 5) * 3 << " " << (n * 3) + 5;
//     return 0;
// }


// #include<iostream>
// int main() {
//     int n, a, b;
//     std::cin >> n >> a >> b;
//     int x = a + b, y = a - b;
//     if(x <= n && y >= 0) {
//         std::cout << y << " " << x;
//     }else if(x <= n && y < 0) {
//         std::cout << x;
//     }else if(x > n && y >= 0) {
//         std::cout << y;
//     }else {
//         std::cout << "No solution";
//     }
//     return 0;
// }



// #include<iostream>
// int main() {
//     int n;
//     std::cin >> n;
//     int ans = 1e5;
//     for(int i = 0; i < n; i++) {
//         int a, b;
//         std::cin >> a >> b;
//         ans = std::min(ans, a + (b - 1) * 7);
//     }
//     std::cout << ans + 1;
//     return 0;
// }




// #include<iostream>
// #include<vector>
// int main() {
//     int n;
//     std::cin >> n;
//     std::vector<int> arr(2 * n + 1);
//     for(int i = 1; i <= 2 * n; i++) {
//         std::cin >> arr[i]; 
//     }
//     bool b = true;
//     for(int i = 1; i <= 2 * n; i++) {
//         if(i != arr[arr[i]] || arr[i] == i) {
//             b = false;
//             break;
//         }
//     }
//     if(b) {
//         std::cout << "Yes";
//     }else {
//         std::cout << "No";
//     }
//     return 0;
// }



#include<iostream>
int main(){
    


    return 0;
}