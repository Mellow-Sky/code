// Problem: A. Simple Palindrome
// Contest: Codeforces - Codeforces Round 972 (Div. 2)
// URL: https://codeforces.com/contest/2005/problem/A
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
	string s = "aeiou";
	if(n <= 5) {
		for(int i = 0; i < n; i++) {
			cout << s[i];
		}
		cout << endl;
		return;
	}
	int a1 = 0, a2 = 0,a3 = 0, a4 = 0, a5 = 0;
	a1 = n % 5 >= 1 ? n / 5 + 1 : n / 5;
	a2 = n % 5 >= 2 ? n / 5 + 1 : n / 5;
	a3 = n % 5 >= 3 ? n / 5 + 1 : n / 5;
	a4 = n % 5 >= 4 ? n / 5 + 1 : n / 5;
	a5 = n % 5 >= 5 ? n / 5 + 1 : n / 5;
	for(int i = 0; i < a1; i++) {
		cout << "a";
	}
	for(int i = 0; i < a2; i++) {
		cout << "e";
	}
	for(int i = 0; i < a3; i++) {
		cout << "i";
	}
	for(int i = 0; i < a4; i++) {
		cout << "o";
	}
	for(int i = 0; i < a5; i++) {
		cout << "u";
	}
	cout << endl;
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