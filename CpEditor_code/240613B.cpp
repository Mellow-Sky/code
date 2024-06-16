// Problem: B. Choosing Cubes
// Contest: Codeforces - Codeforces Round 950 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1980/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
const int N = 1e3;

using namespace std;
using ll = long long;
bool cmp(int x, int y){
	return x > y;
}
void solve(){
	int n, f, k;
	cin >> n >> f >> k;
	vector<int>a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int x = a[k - 1];
	sort(a.begin(), a.end(), cmp);
	int y = a[f - 1];
	if(x < y){
		cout << "NO\n";
	}else if(x > y){
		cout << "YES\n";
	}else{
		if(f - 1 == n){
			cout << "NO\n";
			return;
		}else if(a[f] == x){
			cout << "MAYBE\n";
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