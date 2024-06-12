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
const int N = 2e5+10;
using namespace std;
using ll = long long;

int pre[N],cnt[N];

int root(int x){
	return pre[x] = (pre[x] == x ? x : root(pre[x]));
}

void merge(int x,int y){
	pre[root(x)] = root(y);
}

bool iscon(int x,int y){
	return root(x)==root(y);
}


void vol()
{
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++)pre[i]=i;
	
	for(int i=1;i<=m;i++){
		int u,v;cin>>u>>v;
		merge(u,v);
	}
	
	for(int i=1;i<=n;i++) cnt[root(i)]++;
	
	vector<int>v;
	for(int i=1;i<=n;i++)if(cnt[i])v.push_back(cnt[i]);
	sort(v.begin(),v.end());
	for(auto &i:v){
		cout<<i<<" ";
	}
	
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