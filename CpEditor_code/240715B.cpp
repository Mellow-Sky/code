// Problem: B. Make Majority
// Contest: Codeforces - Codeforces Round 958 (Div. 2)
// URL: https://codeforces.com/contest/1988/problem/B
// Memory Limit: 512 MB
// Time Limit: 1500 ms
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
	int zero = 0, one = 0;
	bool b = true;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '1'){
			one++;
			b = true;
			continue;
		}
		if(s[i] == '0' && b == true){
			zero++;
			b = false;
		}
	}
	if(one > zero){
		cout << "yes\n";
	}else{
		cout << "no\n";
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