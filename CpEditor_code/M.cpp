// Problem: M. Sequence
// Contest: Codeforces - The 15th Jilin Provincial Collegiate Programming Contest
// URL: https://codeforces.com/gym/103486/problem/M
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
	int n;cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a.begin(),a.end());
	int x=(a[n-1]-a[0])*a.size();
	cout<<x;
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