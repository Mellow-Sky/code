//#include<iostream>
//#include<vector>
//using namespace std;
//
//void vol()
//{
//	int x; cin >> x;
//	vector<int>a(x + 1);
//	for (int i = 1; i <= x; i++) cin >> a[i];
//
//	int num; cin >> num;
//	int l = 1, r = x;
//	int ll = 1, rr = x;
//	while (l < r && ll < rr) {
//		int midl = (l + r) >> 1;
//		int midr = (ll + rr + 1) >> 1;
//
//		if (a[midl] >= num)r = midl;
//		else l = midl + 1;
//
//		if (a[midr] <= num) ll = midr;
//		else rr = midr - 1;
//	}
//	if (a[l] == num)cout << l << ",";
//	else cout << "-1,";
//	if (a[ll] == num)cout << ll << "\n";
//	else cout << "-1\n";
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int n; cin >> n;
//	while (n--) {
//		vol();
//	}
//
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//
//bool check(long long mid, int n, int m,vector<int> &b)
//{
//	long long sum = 0;
//	for (int i = 0; i <= n; i++) {
//		if (b[i] > mid) sum += (b[i] - mid);
//		if (sum >= m) return true;
//	}
//	return false;
//}
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int n, m; cin >> n >> m;
//	vector<int>a(n + 1);
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	//寻找最大值
//	int  maxa = a[0];
//	for (int i = 1; i <= n; i++) {
//		maxa = max(maxa, a[i]);
//	}
//
//	int l = 0, r = maxa;
//	while (l < r) {
//		long long mid = (l + r + 1) >> 1;
//		if (check(mid, n, m, a)) l = mid;
//		else r = mid - 1;
//	}
//	cout << l;
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int n; cin >> n;
//	vector<int>a(n + 1);
//	for (int i = 1; i <= n; i++)cin >> a[i];
//
//	int l = 1, r = n;//因为数组大小为n所以左右边界为(1,n)
//	int x; cin >> x;//输入要查找的数
//	while (l < r)//设置跳出循环的条件，即当l=r时退出循环
//	{
//		int mid = (l + r) >> 1;//(l+r)/2,对中间数进行向下取整
//		if (a[mid] >= x)r = mid; //如果查询的数小于等于中间数，查询左部分，将右边界向左移
//		else l = mid + 1; //如果查询的数大于中间数，查询右部分，将左边界向右移，因为数组mid对应的数不对所以再右移一位
//	}
//	//l下标对应的即是最后的查找
//	if (a[l] == x) cout << l << '\n';
//	else cout << -1 << '\n';
//	return 0;
//}

////二分查找左边界
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int n; cin >> n;
//	vector<int>a(n + 1);
//	for (int i = 1; i <= n; i++)cin >> a[i];
//
//	int y; cin >> y;
//	while (y--) {
//		int x; cin >> x;
//		int l = 1, r = n;
//		while (l < r) {
//			int mid = (l + r) >> 1;
//			if (a[mid] >= x)r = mid;
//			else l = mid + 1;
//		}
//		if (a[l] == x)cout << l << ' ';
//		else cout << -1 << ' ';
//	}
//	return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int n; cin >> n;
//	vector<int>a(n + 1);
//	for (int i = 1; i <= n; i++)cin >> a[i];
//
//	int y; cin >> y;
//	while (y--) {
//		int x; cin >> x;
//		int l = 1, r = n;
//		while (l < r) {
//			int mid = (l + r + 1) >> 1;
//			if (a[mid] <= x)l = mid;
//			else r = mid - 1;
//		}
//		if (a[l] == x)cout << l << ' ';
//		else cout << -1 << ' ';
//	}
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//using ll = long long;
//
//bool check(ll mid, ll n, ll m, vector<ll>& a)
//{
//	ll num = 0;//num求a中mid高度以上的树的和
//	for (ll i = 1; i <= n; i++) {
//		if (a[i] > mid)num += (a[i] - mid);
//		if (num >= m)return true;//如果相加的木材长度大于或等于需要的木材长度，返回true，继续增加高度
//	}
//	return false;
//}
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	ll n, m; cin >> n >> m;
//	vector<ll>a(n + 1);
//	for (ll i = 1; i <= n; i++)cin >> a[i];
//
//	ll l = 0;//左边界
//	//找出最高的树作为右边边界
//	ll r = a[0];
//	for (ll i = 1; i <= n; i++) r = max(r, a[i]);
//
//	//二分查找右边界
//	while (l < r) {
//		ll mid = (l + r + 1) >> 1;
//		if (check(mid, n, m, a)) l = mid;
//		else r = mid - 1;
//	}
//	cout << l << '\n';
//	return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//using ll = long long;
//
//bool check(ll mid, ll n, ll m, vector<ll>& a)
//{
//	ll lo = 0;
//	ll ant = 0;
//	for (ll i = 1; i <= n; i++) {
//		if (a[i] - lo < mid) ant++;
//		else lo = a[i];
//	}
//	if (ant <= m)return true;
//	return false;
//}
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	ll h, n, m; cin >> h >> n >> m;
//	vector<ll>a(n + 1);
//	for (int i = 1; i <= n; i++)cin >> a[i];
//
//	ll l = 0, r = h;
//	while (l < r) {
//		ll mid = (l + r + 1) >> 1; 
//		if (check(mid, n, m, a)) l = mid;
//		else r = mid - 1;
//	}
//	cout << l << '\n';
//	return 0;
//}



//#include<iostream>
//#include<vector>
//using namespace std;
//
//bool check(int mid, int n, int m, vector<int>& a, vector<int>& b)
//{
//	int ant = 0;
//	for (int i = 1; i <= n; i++) {
//		if (a[i] >= mid) ant += (a[i] / mid) * b[i];
//		if (ant >= m)return true;
//	}
//	return false;
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int n, m; cin >> n >> m;
//	vector<int>a(n + 1);
//	vector<int>b(n + 1);
//	cin >> a[1] >> b[1];
//
//	int ma = a[1];
//	for (int i = 2; i <= n; i++) {//根据题目的公式求每根木头的长和数量
//		a[i] = ((a[i-1] * 37011 + 10193) % 10000) + 1;
//		b[i] = ((b[i-1] * 73011 + 24793) % 100) + 1;
//		ma = max(ma, a[i]);
//	}
//	int l = 0, r = ma;
//	//求的是最大的长度所以用右边界
//	while (l < r) {
//		int mid = (l + r + 1) >> 1;
//		if (check(mid, n, m, a, b)) l = mid;
//		else r = mid - 1;
//	}
//	cout << l;
//	return 0;
//}





#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool check(int mid, int n, int c, vector<int>& a)
{
	int nn = 0;
	for (int i = 2; i <= n; i++) {
		if (a[i] - a[i - 1 ] >= mid) nn++;
		if (nn == c)return true;
	}
	return false;
}

int main()
{
	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, c; cin >> n >> c;
	vector<int>a(n + 1);
	for (int i = 1; i <= n; i++)cin >> a[i];

	sort(a.begin(), a.end());
	int l = 0, r = a.back();
	
	while (l < r) {
		int mid = (l + r + 1) >> 1;
		if (check(mid, n, c, a))l = mid;
		else r = mid - 1;
	}
	cout << l  << '\n';
	return 0;
}