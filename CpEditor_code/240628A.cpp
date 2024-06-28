// Problem: 三角形
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/85347/A
// Memory Limit: 524288 MB
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
	map<int, int>mp;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		mp[x]++;
		if(mp[x] == 3){
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
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