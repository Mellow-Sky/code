// Problem: C. K-th Not Divisible by n
// Contest: Codeforces - Codeforces Round 640 (Div. 4)
// URL: https://codeforces.com/contest/1352/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
const int N = 1e3;

using namespace std;
using ll = long long;

void solve() {
	int n, k;
	cin >> n >> k;
	int cnt = 0;
	for (int i = 1; ; i++) {
		if (i % n != 0) {
			cnt++;
		}
		if (cnt == k) {
			cout << i << '\n';
			return;
		}
	}
}

int main() {
	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	int t;
	cin >> t;
	//t=1;
	while (t--) {
		solve();
	}

	return 0;
}