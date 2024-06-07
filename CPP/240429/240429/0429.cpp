////二维差分
//#include<iostream>
//using namespace std;
//using ll = long long;
//const int N = 1e3 + 9;
//
//ll a[N][N], diff[N][N];
//
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int n, m, q; cin >> n >> m >> q;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			cin >> a[i][j];
//		}
//	}
//	//差分
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			diff[i][j] += a[i][j];
//			diff[i + 1][j] -= a[i][j];
//			diff[i][j + 1] -= a[i][j];
//			diff[i + 1][j + 1] += a[i][j];
//		}
//	}
//	//修改
//	while (q--) {
//		int x1, y1, x2, y2, c;
//		cin >> x1 >> y1 >> x2 >> y2 >> c;
//		diff[x1][y1] += c; 
//		diff[x2 + 1][y2 + 1] += c;
//		diff[x2 + 1][y1] -= c;
//		diff[x1][y2 + 1] -= c;
//	}
//	//求原数组
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			a[i][j] = a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1] + diff[i][j];
//			cout << a[i][j] << " ";
//		}
//		cout << '\n';
//	}
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//using ll = long long;
//const int N = 1e5 + 9;
//ll a[N], weight[N], prefix[N];
//void solve()
//{
//	ll n; cin >> n;
//	for (ll i = 1; i <= n; i++)cin >> a[i];
//	for (ll i = 1; i <= n; i++)cin >> weight[i];
//
//	ll ess = 0; //不施魔法
//	for (ll i = 1; i <= n; i++)ess += a[i] * weight[i];
//
//	ll mx = 0, fix = 0;//fix最大字段和
//	for (ll i = 1; i <= n; i++) {
//		mx = max(0ll, mx + (a[i] ? -1 : 1) * weight[i]);
//		fix = max(fix, mx);
//	}
//	cout << ess + fix << '\n';
//}
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int n; cin >> n;
//	while (n--) {
//		solve();
//	}
//	return 0;
//}


//打印菱形
//#include<iostream>
//using namespace std;
//struct myChar {
//    myChar(char a) {
//        this->c = a;
//    }
//    char c;
//};
//struct myInt {
//    myInt(int x) {
//        this->t = x;
//    }
//    int t;
//};
//string operator *(myChar& c, myInt& n) {
//    string s;
//    for (int i = 0; i < n.t; ++i) {
//        s += c.c;
//    }
//    return s;
//}
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	myChar c1(' ');
//  myChar c3('*');
//	int  i,j,n=3;
//
//	for (j = 1; j <= 7; j+=2) {
//        myInt a(n);
//        cout << c1 * a;
//        myInt my(j);
//        cout << c3 * my << '\n';
//        n--;
//	}
//    n = 1;
//    for (j = 5; j >= 1; j -= 2) {
//        myInt a(n);
//        cout << c1 * a;
//        myInt my(j);
//        cout << c3 * my << '\n';
//        n++;
//    }
//	return 0;
//}





////并差集
//#include<iostream>
//using namespace std;
//int a[5100], b[5100];
////查询
//int find(int x){
//	return (x == a[x]) ? x : (a[x] = find(a[x]));
//}
////合并
//void merge(int x, int y)
//{
//	int rx = find(x), ry = find(y);
//	if (b[rx] <= b[ry])  a[rx] = ry;
//	else a[ry] = rx;
//	if (b[rx] == b[ry] && rx != ry)  a[ry]++;
//}
//void solvel()
//{
//	//n个人，m个关系，p个查询
//	int n, m, p; cin >> n >> m >> p;
//	//初始化
//	for (int i = 1; i <= n; i++) {
//		a[i] = i;
//		b[i] = i;
//	}
//	//合并
//	for (int i = 1; i <= m; i++) {
//		int x, y; cin >> x >> y;
//		merge(x, y);
//	}
//	//p个询问
//	for (int i = 1; i <= p; i++) {
//		int x, y; cin >> x >> y;
//		if (find(x) == find(y)) cout << "Yes\n";
//		else cout << "No\n";
//	}
//}
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	solvel();
//
//	return 0;
//}


//#include<iostream>
//#include<algorithm>
//using namespace std;
//using ll = long long;
//const int N = 1e5;
//void vol()
//{
//	ll m, n; cin >> m >> n;
//	ll a[N];
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//	}
//	sort(a + 1, a + n);
//	ll sum = 0, temp = 0;
//	for (int i = n; i >= 1; i--) {
//		sum += a[i];
//		temp++;
//		if (sum >= m) break;
//	}
//	if (sum >= m) cout << temp << '\n';
//	else cout << "NO" << '\n';
//}
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//
//	int t=1;
//	while (t--) {
//		vol();
//	}
//	return 0;
//}

#include<iostream>
#include<algorithm>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
int a[N];
void vol()
{
	ll n; cin >> n;
	for (ll i = 1; i <= n; i++) cin >> a[i];

	sort(a + 1, a + n);
	ll l, r;
}
int main()
{
	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int tt; cin >> tt;
	while (tt--) {
		vol();
	}

	return 0;
}