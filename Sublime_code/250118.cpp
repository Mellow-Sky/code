// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     std::string s;
//     std::cin >> s;
//     int a = s[0] - '0', b = s[2] - '0';
//     std::cout << a * b;
// }

// int main() {
//     std::ios::sync_with_stdio(0), std::cout.tie(0), std::cin.tie(0);
//     int t;
//     t = 1;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     ll x;
//     std::cin >> x;
//     ll pp = 1, ans = 0;
//     for (ll i = 1; i <= x; i++) {
//         pp *= i;
//         if (pp == x) {
//             ans = i;
//             break;
//         }
//     }
//     std::cout << ans;
// }

// int main() {
//     std::ios::sync_with_stdio(0), std::cout.tie(0), std::cin.tie(0);
//     int t;
//     t = 1;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e7 + 10;

// void solve() {
//     int q;
//     std::cin >> q;
//     std::vector<int> a(N, 0), b(N, 0);
//     int index = 1, pre = 1;
//     ll sum = 0;
//     while (q--) {
//         int op;
//         std::cin >> op;
//         if (op == 1) {
//             int l;
//             std::cin >> l;
//             if (a[pre] == 0) {
//                 a[pre] = l;
//                 b[pre] = 0;
//                 sum += l;
//             } else {
//                 a[index + 1] = l;
//                 b[index + 1] = sum;
//                 sum += l;
//                 index++;
//             }
//         } else if (op == 2) {
//             int m = a[pre];
//             sum -= m;
//             for (int i = pre; i <= index; i++) {
//                 b[i] -= m;
//             }
//             pre++;
//         } else if (op == 3) {
//             int k;
//             std::cin >> k;
//             std::cout << b[pre + k - 1] << "\n";
//         }
//     }
// }

// int main() {
//     std::ios::sync_with_stdio(0), std::cout.tie(0), std::cin.tie(0);
//     int t;
//     t = 1;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using ll = long long;

// const int N = 3e5;

// void solve() {
//     int q;
//     std::cin >> q;
//     std::queue<int> que, pq;
//     ll sum = 0, popsum = 0;;
//     while (q--) {
//         int op;
//         std::cin >> op;
//         if (op == 1) {
//             int l;
//             std::cin >> l;
//             pq.push(l);
//             if (!que.empty()) {
//                 que.push(sum);
//                 sum += l;
//             } else {
//                 que.push(l);
//                 sum += l;
//             }
//         } else if (op == 2) {
//             if (!que.empty()) {
//                 sum -= pq.front();
//                 popsum += pq.front();
//                 pq.pop();
//                 que.pop();
//             }
//         } else if (op == 3) {
//             int k;
//             std::cin >> k;
//             k--;
//             std::queue<int> tmp(que);
//             int ans = 0;
//             while (k--) {
//                 tmp.pop();
//             }
//             ans = tmp.front();
//             std::cout << ans - popsum << "\n";
//         }
//         if (que.empty() || pq.empty()) {
//             popsum = 0;
//         }
//     }
// }

// int main() {
//     std::ios::sync_with_stdio(0), std::cout.tie(0), std::cin.tie(0);
//     int t;
//     t = 1;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using ll = long long;

const int N = 3e5;

void solve() {
    int q;
    std::cin >> q;
    ll sum = 0;
    std::deque<ll> dq;
    while (q--) {
        int op;
        std::cin >> op;
        if (op == 1) {
            int l;
            std::cin >> l;
            dq.push_back(sum);
            sum += l;
        } else if (op == 2) {
            dq.pop_front();
        } else if (op == 3) {
            int k;
            std::cin >> k;
            std::cout << dq[k - 1] - dq.front()<< "\n";
        }
    }
}

int main() {
    std::ios::sync_with_stdio(0), std::cout.tie(0), std::cin.tie(0);
    int t;
    t = 1;
    while (t--) {
        solve();
    }
    return 0;
}