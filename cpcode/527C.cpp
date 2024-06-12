// Problem: C. Chamo and Mocha's Array
// Contest: Codeforces - Codeforces Round 947 (Div. 1 + Div. 2)
// URL: https://codeforces.com/problemset/problem/1975/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
bool check(ll mid){
	
}

void vol()
{
	ll n;cin>>n;
	vector<ll>a(n);
	for(int i=0;i<n;i++)cin>>a[i];

	if(n==2)cout<<min(a[0],a[1])<<'\n';
	else {
		ll mx=min(a[0],a[1]);
		for(int i=0;i<n-1;i++){
			mx=max(mx,a[i]);
		}
		cout<<mx<<'\n';
	}
	
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