// Problem: B. New Bakery
// Contest: Codeforces - Codeforces Round 953 (Div. 2)
// URL: https://codeforces.com/contest/1978/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
const int N = 1e3;

using namespace std;
using ll = long long;

void solve(){
	ll n, a, b;
	cin >> n >> a >> b;
	ll mx = n * a;
	ll k = min(n, b);
	ll sum = 0, temp = 0;
	ll l = 1, r = k;
	while(l < r){
		ll mid = (l + r + 1) >> 1;
		ll x = b - mid + 1;
		if(x <= a){
			r =	mid - 1;
		}else{
			l = mid;
		}
	}
	sum = (b + b - l + 1) * l / 2;
	mx = max(sum + (n - l) * a, mx);
	cout << mx << '\n';
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