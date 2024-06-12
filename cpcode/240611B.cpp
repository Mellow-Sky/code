// Problem: B. Maximum Multiple Sum
// Contest: Codeforces - Codeforces Round 952 (Div. 4)
// URL: https://codeforces.com/contest/1985/problem/B
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
	int a = 0;
	map<int, int>mp;
	for(int i = 2; i <= n; i++){
		a = 0;
		for(int j = 1; j <= n; j++){
			a += j * i;
			if(j * i >= n){
				if(j * i > n){
					a -= j * i;
				}
				mp[i] = a;
				break;
			}
		}
	}
	int mx = 0;
	for(int i = 2; i <= n; i++){
		mx = max(mx, mp[i]);
	}
	for(int i = 2; i <= n; i++){
		if(mp[i] == mx){
			cout << i << '\n';
			return;
		}
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