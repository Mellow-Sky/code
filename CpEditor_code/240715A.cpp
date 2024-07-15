// Problem: A. Only Pluses
// Contest: Codeforces - Codeforces Round 957 (Div. 3)
// URL: https://codeforces.com/contest/1992/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
const int N = 1e3;

using namespace std;
using ll = long long;

void solve(){
	vector<int> arr(3);
	for(int i = 0; i < 3; i++){
		cin >> arr[i];
	}
	for(int i = 0; i < 5; i++){
		sort(arr.begin(), arr.end());
		arr[0]++;
	}
	int num = arr[0] * arr[1] * arr[2];
	cout << num << endl;
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