// Problem: A. Problem Generator
// Contest: Codeforces - Codeforces Round 950 (Div. 3)
// URL: https://codeforces.com/contest/1980/problem/A
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
	int n,m;cin>>n>>m;
	string s;cin>>s;
	map<char,int>mp;
	string temp="ABCDEFG";
	for(int i=0;i<7;i++){
		mp[temp[i]]=0;
	}
	for(int i=0;i<n;i++){
		mp[s[i]]++;
	}
	int ans=0;
	while(m--){
		for(int i=0;i<7;i++){
			if(mp[temp[i]]==0){
				ans++;
			}
			else{
				mp[temp[i]]--;
			}
		}
	}
	cout<<ans<<'\n';
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