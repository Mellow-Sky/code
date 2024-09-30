// #include<iostream>
// #include<string>
// int main(){
//     std::string s;
//     std::cin >> s;
//     std::cout << s[1];
//     for(int i = 0; i < 5; i++) 
//     {
//         if(i != 1) {
//             std::cout <<s[i];
//         }
//     }
//     return 0;
// }


// #include<iostream>
// #include<vector>
// int main() {
//     long long n, x;
//     std::cin >> n >> x;
//     std::vector<long long> a(n);
//     for(int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }
//     long long cnt = 0;
//     for(int i = 0; i < n; i++) {
//         if(x > 0) {
//             x -= a[i];
//             cnt += a[i];
//         } else if(x < 0) {
//             x += a[i];
//             cnt += a[i];
//         }
//         if(x == 0) {
//             break;
//         }
        
//     }
//     std::cout << cnt;
//     return 0;
// }



// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<cmath>
// struct round{
//     int x;
//     int y;
//     int r;
// };

// bool cmp(round a, round b) {
//     double ax = a.x, ay = a.y, ar = a.r;
//     double bx = b.x, by = b.y, br = b.r;
//     double at = std::sqrt(ax * ax + ay * ay) - ar;
//     double bt = std::sqrt(bx * bx + by * by) - br;
//     if(at < bt) {
//         return false;
//     }else {
//         return true;
//     }
// }

// int main() {
//     long long n, k;
//     std::cin >> n >> k;
//     std::vector<round> a(n);
//     for(int i = 0; i < n; i++) {
//         std::cin >> a[i].x >> a[i].y >> a[i].r;
//     }
//     std::sort(a.begin(), a.end(), cmp);


//     return 0;
// }



// #include<iostream>
// #include<utility>
// #include<vector>
// int main() {
//     int n, k;
//     std::cin >> n >> k;
//     std::vector<std::pair<std::pair<int, int>, int>> a(n);
//     for(int i = 0; i < n; i++) {
//         std::cin >> a[i].first.first >> a[i].first.second >> a[i].second;
//     }
    

//     return 0;
// }


#include<iostream>
#include<vector>
#include<algorithm>
int main() {
    int n, q;
    std::cin >> n >> q;
    std::vector<int> a(n + 1);
    for(int i = 1; i <= n; i++) {
        std::cin >> a[i];
    }
    while(n--) {
        int l, r;
        std::cin >> l >> r;
        std::vector<int> b(r - l + 1);
        for(int i = l; i <= r; i++) {
            int t = 0;
            b[t++] = a[i];
            std::sort(b.begin(), b.end());
        }
        std::cout << b[b.size() / 2] << std::endl;
    }

    return 0;
}