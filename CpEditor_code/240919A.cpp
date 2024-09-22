// Problem: A. Zhan's Blender
// Contest: Codeforces - Codeforces Round 973 (Div. 2)
// URL: https://codeforces.com/contest/2013/problem/0
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
const int N = 1e3;

using namespace std;
using ll = long long;

void solve(){
	int n;
	cin >> n;
	int x, y;
	cin >> x >> y;
	if(x <= y) {
		cout << (n + x - 1) / x << endl;
		return;
	}else {
		cout << (n + y - 1) / y << endl;
		return;
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