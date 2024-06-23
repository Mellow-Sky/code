// Problem: A. X Axis
// Contest: Codeforces - Codeforces Round 954 (Div. 3)
// URL: https://codeforces.com/contest/1986/problem/0
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
const int N = 1e3;

using namespace std;
using ll = long long;

void solve(){
	int a, b, c;
	cin >> a >> b >> c;
	cout << max(max(a, b), c) - min(min(a, b), c) << endl;
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