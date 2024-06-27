// Problem: B. Substring and Subsequence
// Contest: Codeforces - Educational Codeforces Round 167 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1989/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
const int N = 1e3;

using namespace std;
using ll = long long;

void solve(){
	string a, b;
	cin >> a >> b;
	map<char, int>mp;
	int l = a.size();
	for(int i = 0; i < a.size(); i++){
		mp[a[i]]++;
	}
	for(int i = 0; i < b.size(); i++){
		mp[b[i]]++;
		if(mp[b[i]] == 1){
			l++;
		}
	}
	cout << l << '\n';
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