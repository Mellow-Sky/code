// Problem: A. Sum of Round Numbers
// Contest: Codeforces - Codeforces Round 640 (Div. 4)
// URL: https://codeforces.com/contest/1352/problem/A
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
	int cnt = 0, rank = 0;
	vector<int>a;
	while(n>0){
		if(n % 10 != 0){
			cnt++;
			a.push_back(n % 10 * pow(10,rank));
		}
		rank++;
		n /= 10;
	}
	cout << cnt <<'\n';
	for(auto &i :a){
		cout << i << ' ';
	}
	cout<<'\n';
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