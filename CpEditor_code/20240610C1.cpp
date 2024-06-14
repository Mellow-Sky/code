// Problem: C1. Magnitude (Easy Version)
// Contest: Codeforces - Codeforces Global Round 26
// URL: https://codeforces.com/contest/1984/problem/C1
// Memory Limit: 256 MB
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
	vector<int>a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	ll ma = 0, mn = 0;
	for(auto &i: a){
		tie(mn, ma) = make_pair(mn + i, max(ma + i, - mn - i));
	}
	cout << ma << '\n';
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