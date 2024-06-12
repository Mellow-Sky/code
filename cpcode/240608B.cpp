// Problem: B. Same Parity Summands
// Contest: Codeforces - Codeforces Round 640 (Div. 4)
// URL: https://codeforces.com/contest/1352/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
const int N = 1e3;

using namespace std;
using ll = long long;

void solve(){
	int n, k;
	cin >> n >> k;
	int n1 = n - k + 1;
	if(n1 > 0 && n1 & 1 ){
		cout<<"YES\n";
		for(int i = 0; i < k - 1 ;i++){
			cout << 1 << " ";	
		}
		cout << n1 <<'\n';
		return;
	}
	int n2 = n - 2 * (k - 1);
	if(n2 > 0 && !(n2&1)){
		cout << "YES\n";
		for(int i=0; i < k - 1; i++){
			cout << 2 << " ";
		}
		cout << n2 << '\n';
		return;
	}
	cout << "NO\n";
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