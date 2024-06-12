// Problem: E. Special Elements
// Contest: Codeforces - Codeforces Round 640 (Div. 4)
// URL: https://codeforces.com/contest/1352/problem/E
// Memory Limit: 64 MB
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
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int cnt = 0;
	int sum = 0;
	for(int i = 0; i < n; i++){
		int l = 0, r = l + 1, sum = 0;
		while(r < n){
			sum += a[r++];
			if(r == i){
				sum = 0;
				l++;
				r = l + 1;
			}
			if(l == i){
				sum = 0;
				l = i + 1;
				r = l + 1;
			}
			if(sum == a[i]){
				sum = 0;
				cnt++;
				break;
			}
		}
	}
	cout << cnt << '\n';
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