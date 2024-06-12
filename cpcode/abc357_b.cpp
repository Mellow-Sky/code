// Problem: B - Uppercase and Lowercase
// Contest: AtCoder - SuntoryProgrammingContest2024（AtCoder Beginner Contest 357）
// URL: https://atcoder.jp/contests/abc357/tasks/abc357_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
const int N = 1e3;

using namespace std;
using ll = long long;

void solve(){
	string s;
	cin >> s;
	int a = 0, b = 0;
	for(auto &i :s){
		if(i >= 'A' && i <= 'Z'){
			a++;
		}else {
			b++;
		}
	}
	if(a > b){
		for(auto &i :s){
			if(i >= 'a' && i <= 'z'){
				i -= 32;
			}
		}
	}else{
		for(auto &i :s){
			if(i >= 'A' && i <= 'Z'){
				i += 32;
			}
		}
	}
	cout << s;
}

int main(){
	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	int t;
	//cin >> t;
	t=1;
	while (t--) {
		solve();
	}

	return 0;
}