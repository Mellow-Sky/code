// Problem: B1. The Strict Teacher (Easy Version)
// Contest: Codeforces - Codeforces Round 972 (Div. 2)
// URL: https://codeforces.com/contest/2005/problem/B1
// Memory Limit: 256 MB
// Time Limit: 1500 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
const int N = 1e3;

using namespace std;
using ll = long long;

void solve(){
	ll n, m, q;
	cin >> n >> m >> q;
	ll b1, b2;
	cin >> b1 >> b2;
	ll a;
	cin >> a;
	if(a == b1 || a == b2) {
		cout << 0 << endl;
		return;
	}
	if(a < b1) {
		cout << b1 - 1 << endl;
		return;
	}
	if(a > b2) {
		cout << n - b2 << endl;
		return;
	}
	cout << (b1 + b2) / 2 - b1 << endl;
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