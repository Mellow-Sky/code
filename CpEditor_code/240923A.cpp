// Problem: A. Robin Helps
// Contest: Codeforces - Codeforces Round 974 (Div. 3)
// URL: https://codeforces.com/contest/2014/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
const int N = 1e3;

using namespace std;
using ll = long long;

void solve(){
	int n, k;
	cin >> n >> k;
	vector<int> vec(n);
	int ans = 0;
	for(int i = 0; i < n; i++) {
		cin >> vec[i];
	}
	//sort(vec.begin(), vec.end());
	int a = 0;
	for(int i = 0; i < n; i++) {
		if(vec[i] >= k) {
			a += vec[i];
		}else if(vec[i] == 0 && a != 0) {
			a -= 1;
			ans++;
		}
	}
	cout << ans << endl;
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