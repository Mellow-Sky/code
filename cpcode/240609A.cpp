// Problem: A. Tenzing and Tsondu
// Contest: Codeforces - CodeTON Round 5 (Div. 1 + Div. 2, Rated, Prizes!)
// URL: https://codeforces.com/contest/1842/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
const int N = 1e3;

using namespace std;
using ll = long long;

void solve(){
	ll n, m;
	cin >> n >> m;
	vector<ll>a(n, 0),b(m, 0);
	ll suma = 0, sumb = 0;
	for(ll i = 0; i < n; i++){
		cin >> a[i];
		suma += a[i];
	}
	for(ll i = 0; i < m; i++){
		cin >> b[i];
		sumb += b[i];
	}
	if(suma > sumb){
		cout << "Tsondu\n";
	}else if(suma < sumb){
		cout << "Tenzing\n";
	}else if(suma == sumb){
		cout << "Draw\n";
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