// Problem: E. Great Detective TJC
// Contest: Codeforces - The 15th Jilin Provincial Collegiate Programming Contest
// URL: https://codeforces.com/gym/103486/problem/E
// Memory Limit: 256 MB
// Time Limit: 500 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<queue>
#include<map>
#include<cstdlib>
#include<set>
#include<algorithm>
#include<cstdio>
const int N = 1e3;
using namespace std;
using ll = long long;
//0101
//0110
void vol()
{
	ll n; cin >> n;
	vector<ll>a(n + 1, 0);
	for (ll i = 1; i <= n; i++)cin >> a[i];
	sort(a.begin(),a.end());
	for (ll i = 1; i < n; i++) {
			if ((a[i] ^ a[i+1]) == 1) {
				cout << "Yes\n";
				return;
			}
	}
	cout << "No\n";
}

int main()
{
	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	//t=1;
	while (t--) {
		vol();
	}

	return 0;
}