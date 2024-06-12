// Problem: A. Strange Splitting
// Contest: Codeforces - Codeforces Global Round 26
// URL: https://codeforces.com/contest/1984/problem/0
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
	vector<int> a(n);
	string s[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i=1; i < n - 1; i++){
		if(a[i] != a[i + 1]){
			cout << "YES\n";
			cout<<"R";
			for(int j = 0; j < n - 1;j++){
				cout<<"B";
			}
			cout<<'\n';
			return;
		}
	}
	if(a[1] - a[0] != 0){
		cout<<"YES\n";
		cout<<"RR";
		for(int i = 0; i < n - 2; i++){
			cout << "B";
		}
		cout << '\n';
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