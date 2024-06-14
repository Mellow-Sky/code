// Problem: A. Phone Desktop
// Contest: Codeforces - Codeforces Round 946 (Div. 3)
// URL: https://codeforces.com/contest/1974/problem/A
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
	int x,y;cin>>x>>y;
	int my=(y+1)>>1;
	x-=(my*15-y*4);
	x=max(x,0);
	my += (x + 5 * 3 - 1) / (5 * 3);
	cout<<my<<'\n';
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