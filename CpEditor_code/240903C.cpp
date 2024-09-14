// Problem: The Legend of Freya the Frog
// Contest: Codeforces
// URL: https://m1.codeforces.com/contest/2009/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
const int N = 1e3;

using namespace std;
using ll = long long;

void solve(){
	int x, y, k;
	cin >> x >> y >> k;
	int a, b;
	a = x / k + (x % k > 0 ? 1 : 0);
	b = y / k + (y % k > 0 ? 1 : 0);
	if(a <= b) {
		cout << 2 * b << endl;
	}else {
		cout << 2 * a - 1 << endl;
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