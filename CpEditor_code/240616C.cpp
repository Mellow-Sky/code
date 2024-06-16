// Problem: C. Manhattan Permutations
// Contest: Codeforces - Codeforces Round 953 (Div. 2)
// URL: https://codeforces.com/contest/1978/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
const int N = 1e3;

using namespace std;
using ll = long long;

void solve(){
	ll n, k;
	cin >> n >> k;
	if(k & 1){
		cout << "NO\n";
		return;
	}
	k /= 2;
	vector<int> a(n + 1, 0);
	ll i = 1, j = n;
	while(i < j && j - i < k){
		k -= j - i;
		a[j] = i;
		a[i] = j;
		i++;
		j--;
	}
	if(j - i >= k){
		a[i] = i + k;
		a[i + k] = i;
	}else{
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
	for(int i = 1; i <= n; i++){
		if(a[i] == 0){
			a[i] = i;
		}
		cout << a[i] << " ";
	}
	cout << '\n';
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