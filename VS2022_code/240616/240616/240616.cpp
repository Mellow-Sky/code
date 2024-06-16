// Problem: B. New Bakery
// Contest: Codeforces - Codeforces Round 953 (Div. 2)
// URL: https://codeforces.com/contest/1978/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<algorithm>
const int N = 1e3;

using namespace std;
using ll = long long;

void solve() {
	ll n, a, b;
	cin >> n >> a >> b;
	ll mx = n * a;
	ll k = min(n, b);
	ll sum = 0, temp = 0;
	for (int i = 1; i <= k; i++) {
		if (b - i + 1 < a) {
			break;
		}
		else {
			sum = sum + b - i + 1;
			temp = i;
		}
	}
	temp = n - temp;
	mx = max(sum + temp * a, mx);
	cout << mx << '\n';
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