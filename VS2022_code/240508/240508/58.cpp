#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int N = 0x3f3f3f3f;
using ll = long long;

ll n, c;
vector<ll>a(1);

bool check(ll mid) {
    ll num = 0;
    ll nn = 1;
    for (ll i = 2; i <= n; i++) {
        num += a[i] - a[i - 1];
        if (num >= mid) {
            nn++;
            num = 0;
        }
        if (nn >= c) return true;
    }
    return false;
}

int main()
{
    std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> c;
    a.resize(n + 1);
    for (ll i = 1; i <= n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    ll l = 0, r = N;
    while (l + 1 < r) {
        ll mid = (l + r) >> 1;
        if (check(mid)) l = mid;
        else r = mid;
    }
    cout << l << '\n';
    return 0;
}