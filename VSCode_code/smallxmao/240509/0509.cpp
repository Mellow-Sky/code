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

int fx[4] = {0,1,-1,0};
int fy[4] = {1,0,0,-1};

int main()
{
	std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n,m; cin >> n >> m;
	vector<vector<int> >a(n + 1, vector<int>(m + 1, 0));
	queue<pair<int, int> >q;
	q.push({1,1});
	a[1][1] = 1;
	int cnt = 2;
	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for(int i = 0; i < 4;i++){
			int nx = x + fx[i];
			int ny = y + fy[i];
			if(nx >= 1 && nx <=n && ny >= 1 && ny <=m && a[nx][ny] == 0){
				q.push({nx,ny});
				a[nx][ny] = cnt++;
			}
		}
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			cout << a[i][j] << " ";
		}
		cout << '\n';
	}
	return 0;
}
