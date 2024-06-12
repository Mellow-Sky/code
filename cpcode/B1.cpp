// Problem: B. Arithmetic Exercise
// Contest: Codeforces - The 15th Jilin Provincial Collegiate Programming Contest
// URL: https://codeforces.com/gym/103486/problem/B
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
#include<iomanip>
const int N = 1e3;
using namespace std;
using ll = long long;
void vol()
{
	int a,b,c;cin>>a>>b>>c;
	if(a==b){
		cout<<"1.";
		for(int i=1;i<=c;i++){
			cout<<"0";
		}
	}else {
		cout<<"0.";
		for(int i=1;i<c;i++){
			int t=a*10/b;
			cout<<t;
			a=a*10%b;
		}
		int ans=a*10/b;
		a=a*10%b;
		int x=a*10/b;
		if(x>=5 && x<=9){
			cout<<ans+1;
		}else
		cout<<ans;
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