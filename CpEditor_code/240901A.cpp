// Problem: A. Sakurako's Exam
// Contest: Codeforces - Codeforces Round 970 (Div. 3)
// URL: https://codeforces.com/contest/2008/problem/0
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
const int N = 1e3;

using namespace std;
using ll = long long;

void solve(){
	int a, b;
	cin >> a >> b;
	if(b % 2 != 0) {
		if(a != 0 && a % 2 == 0) {
			cout << "YES" << endl;
		} else{
			cout << "NO" << endl;
		}
	} else {
		if(a % 2 == 0) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
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