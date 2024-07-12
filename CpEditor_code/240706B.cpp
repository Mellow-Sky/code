// Problem: B. K-Sort
// Contest: Codeforces - EPIC Institute of Technology Round Summer 2024 (Div. 1 + Div. 2)
// URL: https://codeforces.com/contest/1987/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
const int N = 1e3;

using namespace std;
using ll = long long;

void solve(){
	ll n;
	cin >> n;
	vector<ll> a(n + 1, 0);
	for(ll i = 1; i <= n; i++){
		cin >> a[i];
	}
	ll ans = 0;
	ll ma = 0;
	for(ll i = 1; i <= n; i++){
		if(a[i - 1] > a[i]){
			ans += a[i - 1] - a[i];
			ma = max(ma, a[i - 1] - a[i]);
			a[i] = a[i - 1];
		}
	}
	cout << ans + ma << '\n';
}

int main(){
	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	int t;
	cin >> t;
	//t=1;
	while (t--) {
		solve();
	}

	return 0;
}