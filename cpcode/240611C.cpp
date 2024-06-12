// Problem: C. Good Prefixes
// Contest: Codeforces - Codeforces Round 952 (Div. 4)
// URL: https://codeforces.com/contest/1985/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
const int N = 1e3;

using namespace std;
using ll = long long;

void solve(){
	int n, cnt = 0;
	cin >> n;
	vector<ll> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	if(a[0] == 0){
		cnt++;
	}
	vector<ll> b(n);
	b[0] = a[0];
	for(int i = 1; i < n; i++){
		b[i] = b[i - 1] + a[i];
	}
	ll mx = a[0];
	for(int i = 1; i < n; i++){
		mx = max(mx, a[i]);
		if(b[i] - mx == mx){
			cnt++;
		}
	}
	
	cout << cnt << '\n';
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