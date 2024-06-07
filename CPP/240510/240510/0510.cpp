//#include<iostream>
//#include<queue>
//#include<vector>
//using namespace std;
//
//int nx[4] = { 1,0,-1,0 };
//int ny[4] = { 0,1,0,-1 };
//
//int main()
//{
//	std::ios::sync_with_stdio(0), cout.tie(0), cin.tie(0);
//	int n, m; cin >> n >> m;
//	queue<pair<int, int> >quep;
//	quep.push({ 1,1 });
//	vector<vector<int>>vec(n, vector<int>(m, 0));
//
//
//	return 0;
//}

//#include<iostream>
//#include<stack>
//using namespace std;
//const int N = 2e5;
//int a[N], b[N];//a存,b存结果
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//
//	stack<int>s;
//
//	for (int i = 1; i <= n; i++) {
//		while (s.size() && s.top() >= a[i])s.pop();
//
//		if (s.empty())b[i] = -1;
//		else b[i] = s.top();
//
//		s.push(a[i]);
//	}
//	for (int i = 1; i <= n; i++) cout << b[i] << " ";
//
//	return 0;
//}


//#include<iostream>
//#include<stack>
//using namespace std;
//const int N = 2e5;
//int a[N], b[N];
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)cin >> a[i];
//
//	stack<int>q;
//
//	for (int i = 1; i <= n; i++) {
//		while (!q.empty() && q.top() >= a[i])q.pop();
//		if (q.empty())b[i] = -1;
//		else b[i] = q.top();
//		q.push(a[i]);
//	}
//	for (int i = 1; i <= n; i++)cout << b[i] << " ";
//	return 0;
//}



//#include<iostream>
//using namespace std;
//const int N = 2e5;
//int a[N], b[N], stk[N], top;
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)cin >> a[i];
//
//	for (int i = 1; i <= n; i++) {
//		while (top && a[stk[top]] >= a[i])top--;
//
//		if (top) b[i] = a[stk[top]];
//		else b[i] = -1;
//		stk[++top] = i;
//	}
//	for (int i = 1; i <= n; i++)cout << b[i] << " ";
//	return 0;
//}




//#include<iostream>
//#include<cmath>
//using namespace  std;
//using ll = long long;
//ll a[1010];
//ll sum;
//
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	ll n; cin >> n;
//	for (ll i = 1; i <= n; i++) {
//		a[i] = pow(i, 2);
//	}
//	for (ll i = 1; i <= n; i++) {
//		sum += a[i];
//	}
//	cout << sum;
//
//	return 0;
//}


#include<iostream>
#include<vector>
#include<string>
using namespace std;
using ll = long long;

int main()
{
	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll n, k, r1; cin >> n >> k >> r1;
	vector<ll>a(n + 1, -1);
	a[1] = r1;
	//按题目公式赋初值
	for (ll i = 2; i <= n; i++) {
		a[i] = (a[i - 1] * 6807 + 2831) % 201701;
	}
	string b = {};
	//将数字转换为字母至字符串b中
	for (ll i = 1; i <= n; i++) {
		if (a[i] % 4 == 0) { b += 'A';  continue; }
		else if (a[i] % 4 == 1) { b += 'T'; continue; }
		else if (a[i] % 4 == 2) { b += 'C'; continue; }
		else if (a[i] % 4 == 3) { b += 'G'; continue; }
	}
	//cout << b;
	//每K个字母组成一组放至vs中
	vector<string>vs(n + 1);
	ll l = 0;
	for (ll i = 0; i < b.size() - k + 1; i++) {
		for (ll j = i; j < i + k; j++) {
			vs[i] += b[j];
		}
	}
	//判断对比
	vector<string>tt(vs.size() + 1);
	tt[0] = vs[0];
	for (ll i = 1; i < vs.size(); i++) {
		ll t = tt.size();
		while (t--) {
			if (tt[t] == vs[i]) continue;

		}
	}

	return 0;
}