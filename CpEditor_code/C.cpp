// Problem: C. Computer Game
// Contest: Codeforces - Codeforces Round 570 (Div. 3)
// URL: https://codeforces.com/contest/1183/problem/C
// Memory Limit: 256 MB
// Time Limit: 3000 ms
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
	ll k,n,a,b;cin>>k>>n>>a>>b;
	ll temp;
	ll sum=0;
	for(ll i=n;i>=0;i--){
		temp=n-i;
		sum=i*a+temp*b;
		if(sum<k){
			cout<<i<<'\n';
			return;
		}
	}
	cout<<-1<<'\n';
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