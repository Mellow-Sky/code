// Problem: B. Collatz Conjecture
// Contest: Codeforces - Codeforces Round 955 (Div. 2, with prizes from NEAR!)
// URL: https://codeforces.com/contest/1982/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
const int N = 1e3;

using namespace std;
using ll = long long;

void solve() {
	int x, y, k;
	cin >> x >> y >> k;
	while(x >= y && k > 0) {
		int t = min(k, y - x % y);
		k -= t;
		x += t;
		while(x % y == 0) {
			x /= y;
		}
	}
	if (x < y) {
		x = (x - 1 + k) % (y - 1) + 1;
	}
	cout << x << "\n";
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