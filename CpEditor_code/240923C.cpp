// Problem: C. Robin Hood in Town
// Contest: Codeforces - Codeforces Round 974 (Div. 3)
// URL: https://codeforces.com/contest/2014/problem/C
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
	vector<int> vec(n);
	for(int i = 0; i < n; i++) {
		cin >> vec[i];
	}
	if(n <= 2) {
		cout << "-1\n";
		return;
	}
	sort(vec.begin(), vec.end());
	ll sum = accumulate(vec.begin(), vec.end(), 0LL);
	ll x = max(0LL, 2LL * n * vec[n / 2] - sum + 1);
	cout << x << endl;
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