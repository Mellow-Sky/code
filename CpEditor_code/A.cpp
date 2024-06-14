// Problem: A. Nearest Interesting Number
// Contest: Codeforces - Codeforces Round 570 (Div. 3)
// URL: https://codeforces.com/contest/1183/problem/A
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
	int n;cin>>n;
	for(int i=n;;i++){
		if(i<100 && i>10 && (i/10+i%10)%4==0){cout<<i;break;}
		else if(i <10 && i%4==0){cout<<i;break;}
		else if(i>100 && (i/100+i/10%10+i%10)%4==0){cout<<i;break;}
		else if(i==1000){cout<<"1003";break;}
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