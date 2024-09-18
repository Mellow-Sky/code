// Problem: 构造序列
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/90070/B
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
	if(n == m) {
		cout << n + m;
		return;
	}
	cout << 2 * min(n, m) + 1;
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