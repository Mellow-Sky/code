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
	vector<ll> a(n + 2, 0);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	ll sum = 0;
	for(int i = 0; i < n; i++){
		sum += a[i];
		if(a[i + 1] > 0){
			if(sum < 0){
				sum *= -1;
			}
		}
	}
	if(sum < 0){
		sum *= -1;
	}
	cout << sum << '\n';
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