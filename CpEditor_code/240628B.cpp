// Problem: 好数组
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/85347/B
// Memory Limit: 524288 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
const int N = 1e3;

using namespace std;
using ll = long long;

void solve(){
	int n;
	cin >> n;
	vector<ll>a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	ll x = a[n - 1] - a[0];
	if(x < a[n - 1] * a[0]){
		cout << "YES\n";
	}else{
		cout << "NO\n";
	}
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