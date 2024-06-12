// Problem: D. Binary Cut
// Contest: Codeforces - Codeforces Round 944 (Div. 4)
// URL: https://codeforces.com/contest/1971/problem/D
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

void vol()
{
	string str;cin>>str;
	int cnt=1;
	if(str.size()==1){cout << 1 << '\n';return;}
	if(str.size()==2){
		if(str=="10")
		cout << 2 << '\n';
		else cout << 1 << '\n';
		return;
		}
	int flag=0;
	for(int i=0;i<str.size()-1;i++){
		if(str[i+1]=='1' && str[i]=='0' )
		{
			cnt++;
			flag++;
			if(flag<=1)cnt--;
		}else if(str[i+1]=='0' && str[i]=='1')cnt++;
	}
	
	cout <<cnt<<"\n";
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