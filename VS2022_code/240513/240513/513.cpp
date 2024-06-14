//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//using namespace std;
//const int N = 60;
//int fa[N];
//
//vector<int>g[N];//graph
//
//void dfs(int x)
//{
//	cout << x << '\n';
//	for (auto& k : g[x]) {
//		dfs(k);
//	}
//}
//
//void bfs(int rt)
//{
//	queue<int>q;
//	q.push(rt);
//	while (q.size()) {
//		int x = q.front(); q.pop();
//		cout << x << '\n';
//		for (auto& y : g[x])q.push(y);
//	}
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int n; cin >> n;
//	for (int i = 2; i <= n; i++)cin >> fa[i];
//	for (int i = 2; i <= n; i++)g[fa[i]].push_back(i);
//
//	for (int i = 1; i <= n; i++)sort(g[i].begin(), g[i].end());
//
//	dfs(1);
//	cout << '\n';
//	bfs(1);
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//using ll = long long;
//#define n 1e8
//bool check(ll x) {
//	for (ll i = 2; i < x; i++) {
//		if (x % i == 0)return false;
//	}
//	return true;
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	 for (ll i = 1; i <= n; i++) {
//		 if (check(i))cout << i << " ";
//	 }
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int n; cin >> n;
//
//
//	return 0;
//}


//高精度减法
//12345
// 4568
//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	string a, b; cin >> a >> b;
//	vector<int>v;
//	reverse(a.begin(), a.end());
//	reverse(b.begin(), b.end());
//	int temp = 0;
//	for (int i = 0; i < a.size(); i++) {
//		int c = a[i] - '0' - temp;
//		temp = 0;
//		int d = b[i] - '0';
//		if (c > d) {
//			v.push_back(c - d);
//		}
//		else if (c < d) {
//			v.push_back(c * 10 - d);
//			temp = 1;
//		}
//	}
//	if (a.size() >= b.size() && a[a.size() - 1] - '0' > b[b.size() - 1 ] - '0') {
//		for (int i = v.size() - 1; i >= 0;i--) {
//			cout << v[i];
//		}
//	}   
//	else {
//		cout << "-";
//		for (int i = v.size() - 1; i >= 0; i--) {
//			cout << v[i];
//		}
//	}
//	return 0;
//}


//高精度减法
//#include<iostream>
//#include<string>
//#define MAXL 10500
//using namespace std;
//
//string a, b;
//int m[MAXL], n[MAXL], ans[MAXL];
//
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> a >> b;
//
//	bool fu = false;
//	if (a < b && a.size() == b.size() || a.size() < b.size()) {
//		swap(a, b);
//		fu = true;
//	}
//
//	for (int i = a.size(); i > 0; i--) m[i] = a[a.size() - i] - '0';
//	for (int i = b.size(); i > 0; i--) n[i] = b[b.size() - i] - '0';
//
//	int mal = max(a.size(), b.size());
//	for (int i = 1; i <= mal; i++) {
//		if (m[i] >= n[i]) {
//			ans[i] = m[i] - n[i];
//		}
//		else{
//			m[i] += 10; m[i + 1]--;
//			ans[i] = m[i] - n[i];
//		}
//	}
//
//	while (ans[mal] == 0)mal--;
//
//	if (fu == true) { cout << "-"; }
//
//	for (int i = mal; i > 0; i--) {
//		cout << ans[i];
//	}
//	if (mal < 0)cout << 0;
//
//	return 0;
//}

#include<iostream>
using namespace std;
int main()
{

	return 0;
}