// Problem: B. Robin Hood and the Major Oak
// Contest: Codeforces - Codeforces Round 974 (Div. 3)
// URL: https://codeforces.com/contest/2014/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
const int N = 1e3;

using namespace std;
using ll = long long;

void solve(){
	int n, k;
	cin >> n >> k;
	ll ans = k * (n + n + k - 1) / 2;
	if(ans % 2 == 0) {
		cout << "YES\n";
	}else {
		cout << "NO\n";
	}
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