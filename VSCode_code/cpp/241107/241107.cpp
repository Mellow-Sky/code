#include <iostream>
#include <vector>
long long n, m;

bool check(long long mid, std::vector<long long>& a) {
    // num为mid高度以上能得到的木材长度总和
    long long num = 0;
    for (long long i = 1; i <= n; i++) {
        // 如果木材高度大于mid累加
        if (a[i] > mid) {
            num += a[i] - mid;
        }
        // 如果得到的超过了所需长度m则返回true，让l右移
        if (num >= m) {
            return true;
        }
    }
    return false;
}

int main () {
    std::cin >> n >> m;
    std::vector<long long> a(n + 1, 0);

    long long l = 0, r = 0;

    for (int i = 1; i <= n; i++) {
        std::cin >> a[i];
        // r为木材的最长长度
        r = std::max(r, a[i]);
    }
    // 上界加1
    r++;
    while (l + 1 < r) {
        long long mid = (l + r) >> 1;
        if (check(mid, a)) {
            // 最大化
            l = mid;
        } else {
            r = mid;
        }
    }
    std::cout << l << "\n";
    return 0;
}