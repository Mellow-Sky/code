// Problem: 连点成线
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/90070/C
// Memory Limit: 1048576 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
const int N = 1e5;

using namespace std;
using ll = long long;

void solve(){
	int n, m;
	cin >> n >> m;
	vector<vector<int> > vec(n + 1, vector<int>(n + 1, 0));
	for(int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		vec[a][b]++;
	}
	int ans = 0;
	for(int i = 1; i <= n; i++) {
		int left = 1, right = n;
		int a = -1, b = -1;
		bool b1 = true, b2 = true;
		while(left < right) {
			if(a != -1 && b != -1) {
				break;
			}
			if(b1 && vec[i][left] != 0) {
				a = left;
				b1 = false;
			}
			if(b2 && vec[i][right] != 0) {
				b = right;
				b2 = false;
			}
			right--;
			left++;
		}
		if(a != -1 && b != -1) {
			ans = max(ans, b - a);
		}
		
		
		left = 1, right = n;
		a = -1, b = -1;
		b1 = true, b2 = true;
		while(left < right) {
			if(b1 && vec[left][i] != 0) {
				a = left;
				b1 = false;
			}
			if(b2 && vec[right][i] != 0) {
				b = right;
				b2 = false;
			}
			right--;
			left++;
		}
		if(a != -1 && b != -1) {
			ans = max(ans, b - a);
		}
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