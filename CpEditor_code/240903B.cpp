// Problem: osu!mania
// Contest: Codeforces
// URL: https://m1.codeforces.com/contest/2009/problem/B
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
	char vec[N][4];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < 4; j++) {
			cin >> vec[i][j];
		}
	}
	for(int i = n - 1; i >= 0; i--) {
		for(int j = 3; j >= 0; j--) {
			if(vec[i][j] == '#') {
				cout << j + 1 << " ";
			}		
		}
	}
	cout << endl;
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