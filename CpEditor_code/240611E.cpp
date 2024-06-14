// Problem: E. Secret Box
// Contest: Codeforces - Codeforces Round 952 (Div. 4)
// URL: https://codeforces.com/contest/1985/problem/E
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
const int N = 1e3;

using namespace std;
using ll = long long;

void solve(){
	int x, y, z;
	ll k;
	cin >> x >> y >> z >> k;
	ll ans = 0;
	ll cnt = 0;
	for(int a = 1; a <= x; a++){
		for(int b = 1; b <= y; b++){
			ll c = k / a / b;
			if(a * b * c != k || c > z){
				continue;
			}
			ans = max(ans, (ll)(x - a + 1) * (y - b + 1) * (z - c + 1));
		}
	}
	cout << ans << '\n';
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