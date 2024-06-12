// Problem: D. Alice, Bob and Candies
// Contest: Codeforces - Codeforces Round 640 (Div. 4)
// URL: https://codeforces.com/contest/1352/problem/D
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
	vector<int>vec(n);
	for(int i = 0; i < n; i++){
		cin >> vec[i];
	}
	int a = 0, b = 0, cnt =0;
	bool bo = true;
	int ta = 0, tb = 0;
	int l = 0, r = n - 1;
	while(l <= r){
		if(cnt % 2 == 0){
			int templ = 0;
			while(l <= r && templ <= tb){
				templ += vec[l++];
			}
			ta = templ;
			a += templ;
		}else{
			int tempr = 0;
			while(l <= r && tempr <= ta){
				tempr += vec[r--];
			}
			tb = tempr;
			b += tempr;
		}
		cnt++;
	}
	cout << cnt << " " << a << " " << b << '\n';
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