// #include<iostream>
// #include<vector>
// int main() {
//     int n, target;
//     std::cin >> n >> target;
//     std::vector<int> nums(n, 0);
//     for(int i = 0; i < n; i++) {
//         std::cin >> nums[i];
//     }
//     int ans = n + 1;
//     int l = 0, r = 0;
//     int sum = 0;
//     while(r < n) {
//         if(sum < target) {
//             sum += nums[r];
//         }
//         while(sum >= target){   
//             ans = std::min(ans, r - l + 1);
//             sum -= nums[l];
//             l++;
//         }
//         r++;
//     }
//     std::cout << ans;
//     return 0;
// }



// #include<iostream>
// #include<vector>
// int main() {
//     int n, k;
//     std::cin >> n >> k;
//     std::vector<int> nums(n, 0);
//     for (int i = 0; i < n; i++) {
//         std::cin >> nums[i];
//     }
//     int s = 1;
//     int l = 0;
//     int ans = 0;
//     for (int r = 0; r < n; r++) {
//         s *= nums[r];
//         while (s >= k) {
//             s /= num[l];
//             l++;
//         }
//         ans += r - l + 1;
//     }
//     return 0;
// }




// #include<iostream>
// #include<string>
// #include<map>
// int main() {
//     std::string s;
//     std::cin >> s;
//     int n = s.size();
//     std::map<char, int> mp;
//     int l = 0, ans = 0;
//     for(int i = 0; i < n; i++) {
//         if(mp[s[i]] == 0) {
//             mp[s[i]]++;
//         } else {
//             mp[s[l]]--;
//             l++;
//         }
//         ans = std::max(ans, i - l + 1);
//     }
//     std::cout << ans;
//     return 0;
// }



#include<iostream>
#include<string>
#include<map>
int main() {
    std::string s;
    std::cin >> s;
    int n = s.size();
    std::map<char, int> mp;
    int l = 0, r = 0, ans = 0;
    while(r < n) {
        mp[s[r]]++;
        
    }

    std::cout << ans;
    return 0;
}