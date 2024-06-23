// Problem: B. Matrix Stabilization
// Contest: Codeforces - Codeforces Round 954 (Div. 3)
// URL: https://codeforces.com/contest/1986/problem/B
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
	vector<vector<int> >a(n + 2, vector<int>(m + 2, 0));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i][j] > a[i - 1][j] && a[i][j] > a[i][j - 1] 
			&& a[i][j] > a[i + 1][j] && a[i][j] > a[i][j + 1]){
				a[i][j] = max(max(a[i - 1][j], a[i][j - 1]), max(a[i + 1][j],a[i][j + 1]));
			}
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cout << a[i][j] << " ";
		}
		cout << "\n";
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