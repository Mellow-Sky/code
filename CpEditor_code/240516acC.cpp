// Problem: 连点成线
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/90070/C
// Memory Limit: 1048576 MB
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
	map<int, set<int> > mp, mq;
	for(int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		mp[a].insert(b);
		mq[b].insert(a);
	}
	int ans = 0;
	for(auto [x, y] : mp) {
		ans = max(ans, *(--y.end()) - *y.begin());
	}
	for(auto [x, y] : mq) {
		ans = max(ans, *(--y.end()) - *y.begin());
	}
	cout << ans;
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