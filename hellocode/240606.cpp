//#include<iostream>
//#include<vector>
//
//using namespace std;
//using ll = long long;
//
//void vol() {
//    ll n, m;
//    cin >> n >> m;
//    vector<ll> a(n + 1);
//    for (int i = 1; i <= n; i++) cin >> a[i];
//    ll x;
//    while (m--) {
//        cin >> x;
//        ll l = 1, r = n, mid;
//        while (l < r) {
//            mid = (l + r) >> 1;
//            if (a[mid] >= x) {
//                r = mid;
//            } else if (a[mid] < x) {
//                l = mid + 1;
//            }
//        }
//        if (a[l] == x) { cout << l << " "; }
//        else cout << "-1 ";
//    }
//}
//
//int main() {
//    std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    vol();
//    return 0;
//}



