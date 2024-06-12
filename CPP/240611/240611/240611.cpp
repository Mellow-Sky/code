#include<iostream>
using namespace std;
using ll = long long;

ll i, j, k, n, m;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    for (i = 1; i * i <= m; i++) {
        if (!(m % i)) {
            if (i <= n)k ^= 1;
            if (i * i != m && ((m / i) <= n))k ^= 1;
        }
    }
    if (k)cout << "ON";
    else cout << "OFF";
}