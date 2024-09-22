// Problem: B. Battle for Survive
// Contest: Codeforces - Codeforces Round 973 (Div. 2)
// URL: https://codeforces.com/contest/2013/problem/B
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
	vector<int> vec(n);
	for(int i = 0; i < n; i++) {
		cin >> vec[i];
	}
	int sum = 0;
	for(int i = 0; i < n - 2; i++) {
		sum += vec[i];
	}
	cout << vec[n - 1] - vec[n - 2] + sum << endl;
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