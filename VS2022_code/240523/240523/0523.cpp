//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//const int N = 2e5 + 10;
//int pre[N], cnt[N];
//
//int root(int x) {
//	//寻找根节点
//	return pre[x] = (pre[x] == x ? x : root(pre[x]));//路径压缩
//}
//
//void merge(int x, int y) {
//	pre[root(x)] = root(y);//合并
//}
//
//bool iscon(int x, int y) {
//	return root(x) == root(y);//判断是否连通
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//	int n, m; cin >> n >> m;
//	for (int i = 1; i <= n; i++)pre[i] = i;//初始化
//
//	//读入边
//	for (int i = 1; i <= m; i++) {
//		int u, v;cin>>u>>v;
//		merge(u, v);
//	}
//
//	for(int i=1;i<=n;i++) cnt[root(i)]++;//统计连通分量
//
//	vector<int>v;
//	for (int i = 1; i <= n; i++)if (cnt[i])v.push_back(cnt[i]);
//
//	sort(v.begin(), v.end());//排序
//
//	for (auto& i : v) {
//		cout << i << " ";
//	}
//
//	return 0;
//}


#include<iostream>
#include<vector>
using namespace std;

void vol() {
	int n, k, q; cin >> n >> k >> q;
	vector<int>v(k + 1), w(k + 1);
	v[0] = 0; w[0] = 0;
	for (int i = 1; i <= k; i++)cin >> v[i];
	for (int i = 1; i <= k; i++)cin >> w[i];

	for (int i = 1; i <= q; i++) {
		long long c;
		cin >> c;
		int l = 0, r = k;
		while (l <= r) {
			int mid = (l + r) >> 1;
			if (v[mid] > c) r = mid - 1;
			else l = mid + 1;
		}
		if (v[r] == c) {
			cout << w[r] << " ";
			continue;
		}
		long long ans = w[r] + (c - v[r]) * (w[r + 1] - w[r]) / (v[r + 1] - v[r]);//v=s/t
		cout << ans << " ";
	}
	cout << '\n';
}

int main()
{
	//ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t; cin >> t;
	while (t--) {
		vol();
	}

	return 0;
}