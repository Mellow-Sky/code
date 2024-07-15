// Problem: A. Split the Multiset
// Contest: Codeforces - Codeforces Round 958 (Div. 2)
// URL: https://codeforces.com/contest/1988/problem/0
// Memory Limit: 512 MB
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
	if(n == 1 || n == 2){
		cout << 0 << endl;
	}else{
		cout << n / k + 1 + n % k << endl;
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