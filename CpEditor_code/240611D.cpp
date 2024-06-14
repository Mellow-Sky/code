// Problem: D. Manhattan Circle
// Contest: Codeforces - Codeforces Round 952 (Div. 4)
// URL: https://codeforces.com/contest/1985/problem/D
// Memory Limit: 256 MB
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
	int cnt = 0;
	int mx = 0, x;
	vector<vector<char>> a(n + 2, vector<char>(m + 2, '.'));
	for(int i = 1; i <= n; i++){
		cnt = 0;
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
			if(a[i][j] == '#'){
				cnt++;
			}
		}
		if(cnt > mx){
			x = i;
		}
		mx = max(mx, cnt);
	}
	
	int my = 0, y;
	for(int i = 1; i <= m; i++){
		cnt = 0;
		for(int j = 1; j <= n; j++){
			if(a[j][i] == '#'){
				cnt++;
			}
		}
		if(cnt > my){
			y = i;
		}
		my = max(my, cnt);
	}
	cout << x << " " << y << "\n";
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