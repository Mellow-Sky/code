// Problem: B. Large Addition
// Contest: Codeforces - Codeforces Global Round 26
// URL: https://codeforces.com/contest/1984/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
const int N = 1e3;

using namespace std;
using ll = long long;

void solve(){
	string s;
	cin >> s;
	bool b = true;
	int si = s.size();
	if(si == 2){
		if(s[0] == '1' && s[1] >= '0' && s[1] <= '8'){
			cout<<"YES\n";
		}else{
			cout << "NO\n";
		}
		return;
	}
	
	for(int i = 1; i <= si - 2; i++){
		if(s[i] > '1' && s[i] <= '9'){
			break;
		}
		if(s[i] == '0'){
			b = false;
			break;
		}
	}
	
	if(b == true && s[0] == '1' && s[si - 1] >= '0' && s[si - 1] <= '8'){
		cout<<"YES\n";
	}else{
		cout << "NO\n";
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