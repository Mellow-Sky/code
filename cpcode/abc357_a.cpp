// Problem: A - Sanitize Hands
// Contest: AtCoder - SuntoryProgrammingContest2024（AtCoder Beginner Contest 357）
// URL: https://atcoder.jp/contests/abc357/tasks/abc357_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
const int N = 1e3;

using namespace std;
using ll = long long;

void solve(){
	int n, m;
	cin >> n >> m;
	vector<int>a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(a[i] <= m){
			m -= a[i];
			cnt++;
		}else {
			break;
		}
	}
	cout << cnt;
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