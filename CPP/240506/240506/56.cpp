//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//    std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    int n, k; cin >> n >> k;
//    vector<int>a(n + 1, 0);
//    for (int i = 1; i <= n; i++) cin >> a[i];
//    if (k > n || k == 1) {
//        cout << "-1";
//        return 0;
//    }
//    for (int i = 1; i <= n; i++) {
//        if (i <= k)cout << a[i % k + 1] << " ";
//        else cout << a[i] << " ";
//    }
//    return 0;
//}
//
//
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	string str; cin >> str;
//	int size = str.size();
//	
//	for (int i = 0; i < size; i++) {
//		int num = (str[(size - 2 + i) % size] - '0') * 10 + (str[(size - 1 + i) % size] - '0');
//		if (num % 4 == 0) { cout << i << '\n'; return 0; }
//	}
//	cout << -1;
//	return 0;
//}
//
//
//#include<iostream>
//#include<stack>
//using namespace std;
//const int N = 1e5 + 9;
//int a[N];
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//
//	stack<int>b;
//	int pos = 1;
//	for (int i = 1; i <= n; i++) {
//		while ((b.empty() || b.top() != i) && pos <= n) {
//			b.push(a[pos++]);
//		}
//		if (b.top() != i) {
//			cout << "No";
//			return 0;
//		}
//		else b.pop();
//	}
//	cout << "Yes";
//	return 0;
//}
//
//
//
//#include<iostream>
//#include<queue>
//using namespace std;
//using ll = long long;
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	ll q; cin >> q;
//	priority_queue<ll>pq;
//	ll num = 0;
//	while (q--) {
//		ll n; cin >> n;
//		if (n == 1) {
//			ll x; cin >> x;
//			pq.push(x);
//			num += x;
//		}
//		else if (pq.size()) {
//			num -= pq.top();
//			pq.pop();
//		}
//	}
//	cout << num << '\n';
//	return 0;
//}
//
//
//#include<iostream>
//#include<map>
//#include<vector>
//using namespace std;
//void vol()
//{
//	int p; cin >> p;
//	map<string, int>mp;
//	vector<string>v;
//	for (int i = 1; i <= p; i++) {
//		string str; cin >> str;
//		if (mp.count(str))mp[str]++;
//		else v.push_back(str), mp[str] = 1;
//	}
//	for (auto &i : v) cout << i << " " << mp[i] << '\n';
//}
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int n; cin >> n;
//	while (n--) {
//		vol();
//	}
//	return 0;
//}
//
//
//
//set的自动去重排序
//#include<iostream>
//#include<set>
//using namespace std;
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int n; cin >> n;
//	set<int>mellow;
//	for (int i = 1; i <= n; i++) {
//		int x; cin >> x;
//		mellow.insert(x);
//	}
//	for (auto& i : mellow) cout << i << " ";
//	return 0;
//}
//
//
//#include<iostream>
//#include<bitset>
//using namespace std;
//const int N = 5e5 + 9;
//const int M = 5e3;
//int a[M];
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	bitset<N>bs;
//	bs[0] = 1;
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//
//	for (int i = 1; i <= n; i++) {
//		bs |= (bs << a[i]);
//	}
//	cout << bs.count() << " ";
//	return 0;
//}
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//bool cmp(int a,int b)
//{
//	return a > b;
//}
//
//int main()
//{
//	int n; cin >> n;
//	vector<int>a(n , 0);
//	vector<int>b(n , 0);
//
//	for (int i = 0; i < n; i++) cin >> a[i];
//	for (int i = 0; i < n; i++) cin >> b[i];
//
//	sort(a.begin(), a.end());
//	sort(b.begin(), b.end());
//	int mi = 0;
//	for (int i = 0; i < n; i++) {
//		mi += a[i] * b[i];
//	}
//	cout << mi << '\n';
//
//	sort(b.begin(), b.end(),cmp);
//	int ma = 0;
//	for (int i = 0; i < n; i++) {
//		ma += a[i] * b[i];
//	}
//	cout << ma << '\n';
//	return 0;
//}
//


//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int n; cin >> n;
//	vector<int>a(n + 1);
//	for (int i = 1; i <= n; i++) cin >> a[i];
//
//	int l = 1, r = n;
//	int x; cin >> x;
//	while (l + 1 !=  r) {
//		int mad = (l + r) >> 1;
//		if (a[mad] < x) l = mad;
//		else r = mad;
//	}
//	if (a[r] == x) cout << r;
//	else cout << -1;
//	return 0;
//}
// 



//二分查找右侧边界
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int n; cin >> n;
//	vector<int>a(n + 1);
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	int x; cin >> x;
//	while (x--) 
//	{
//		int y; cin >> y;
//		int l = 1, r = n;
//		while (l < r) {
//			int mid = (l + r + 1) >> 1;
//			if (a[mid] <= y) l = mid;
//			else r = mid - 1;
//		}
//		if (a[l] == y) cout << l << " ";
//		else cout << "-1" << " ";
//	}
//	return 0;
//}


//
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int n; cin >> n;
//	vector<int>a(n + 1);
//	for (int i = 1; i <= n; i++) cin >> a[i];
//
//	int x; cin >> x;
//	while (x--) {
//		int num; cin >> num;
//		int l = 1, r = n;
//		while (l < r) {
//			int mid = (l + r ) >> 1;
//			if (a[mid] >= num) r = mid;
//			else l = mid + 1;
//		}
//		if (a[l] == num) cout << l << " ";
//		else cout << "-1\n";
//	}
//	return 0;
//}



//#include<iostream>
//#include<vector>
//using namespace std;
//const int N = 1e9;
//int n, h;
//vector<int>a;
//
//bool check(int mid)
//{
//
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> h;
//	a.resize(n + 1);
//	for (int i = 1; i <= n; i++)cin >> a[i];
//
//	int l = 0;
//	int r = N;
//	while (l < r) {
//		int mid = (l + r + 1) >> 1;
//		if(check(mid))
//	}
//
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
//	int x; cin >> x;
//	while (x--) {
//		int num; cin >> num;
//		int l = 1, r = n;
//		while (l < r) {
//			int mid = (l + r) >> 1;
//			if (a[mid] >= num) r = mid;
//			else l = mid + 1;
//		}
//		if (a[l] >= num)cout << l << " ";
//		else cout << "-1 ";
//	}
//	return 0;
//}