// Problem: B. Square or Not

// Contest: Codeforces - Codeforces Round 970 (Div. 3)
// URL: https://codeforces.com/contest/2008/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
const int N = 1e3;

using namespace std;
using ll = long long;

void solve(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int temp = sqrt(n);
	if(temp * temp != n) {
		cout << "NO" << endl;
		return;
	}
	for(int i = 0; i < temp; i++) {
		if(s[i] - '0' == 0) {
			cout << "NO" << endl;
			return;
		}
	}
	for(int i = s.size() - temp; i < s.size(); i++) {
		if(s[i] - '0' == 0) {
			cout << "NO" << endl;
			return;
		}
	}
	
	int size = temp;
	for(int i = 0; i < temp - 2; i++) {
		int num = 0;
		for(int j = 0; j < temp; j++) {
			if((j == 0 || j == temp - 1) && s[size] - '0' != 1) {
				cout << "NO" << endl;
				return;
			}
			num += s[size++] - '0';
		}
		if(num != 2) {
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
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