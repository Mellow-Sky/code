#include<iostream>

using namespace std;
const int N = 110;

int a[N], b[N];

void vol() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)cin >> a[i];
    for (int i = 1; i <= n; i++)cin >> b[i];
    int diff = 0, ans = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i - diff] > b[i]) {
            ans++;
            diff++;
        }
    }
    cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        vol();
    }
    return 0;
}