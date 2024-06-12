// Problem: A. Random Number Checker
// Contest: Codeforces - The 15th Jilin Provincial Collegiate Programming Contest
// URL: https://codeforces.com/gym/103486/problem/A
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

void vol()
{
	ll n;cin>>n;
	vector<ll>a1(n+1);
	for(ll i=1;i<=n;i++)cin>>a1[i];
	
	ll a=0,b=0;
	for(ll i=1;i<=n;i++){
		if(a1[i]%2==0)a++;
		else b++;
	}
	if((a-b)==1 || (a-b)==-1 || a-b==0)cout<<"Good";
	else cout <<"Not Good";
	
}

int main()
{
	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t;
	//cin >> t;
	t=1;
	while (t--) {
		vol();
	}

	return 0;
}