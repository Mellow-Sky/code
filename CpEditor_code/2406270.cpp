// Problem: A. Catch the Coin
// Contest: Codeforces - Educational Codeforces Round 167 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1989/problem/0
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
	for(int i = 0; i < n; i++){
		int x, y;
		cin >> x >> y;
		if(y >= -1){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
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