// Problem: A. Minimize!
// Contest: Codeforces - Codeforces Round 971 (Div. 4)
// URL: https://codeforces.com/contest/2009/problem/0
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
const int N = 1e3;

using namespace std;
using ll = long long;

void solve(){
	int a, b;
	cin >> a >> b;
	cout << max(a, b) -  min(a, b) << endl;
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