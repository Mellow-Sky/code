// Problem: 小红的最大价值
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/85350/A
// Memory Limit: 524288 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
const int N = 1e3;

using namespace std;
using ll = long long;

void solve(){
	ll n, k;
	cin >> n >> k;
	vector<ll> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	ll ans;
	if(a[n - 1] - a[0] > k){
		ans = max(a[n - 1], a[0]);
	}else{
		ans = min(a[n - 1], a[n - 2]);
	}
	cout << ans;
}

int main(){
	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	int t;
	//cin >> t;
	t=1;
	while (t--) {
		solve();
	}

	return 0;
}