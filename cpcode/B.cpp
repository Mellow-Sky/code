// Problem: B. Equalize Prices
// Contest: Codeforces - Codeforces Round 570 (Div. 3)
// URL: https://codeforces.com/contest/1183/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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

void vol()
{
	ll n,k;cin>>n>>k;
	vector<ll>a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	
	sort(a.begin(),a.end());
	if(a[0]+k>=a[n-1]-k){
		cout<<a[0]+k<<'\n';
	}else cout<<"-1\n";
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