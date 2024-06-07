//
//A
//#include<iostream>
//using namespace std;
//
//int gcd(int x, int y)
//{
//	while (y != 0) {
//		int temp = x % y;
//		x = y;
//		y = temp;
//	}
//	return x;
//}
//
//void vol()
//{
//	int x; cin >> x;
//	int ma = 0;
//	int ans = 1;
//	if(x>2){
//		for (int i = 1; i < x; i++) {
//			int temp = gcd(x, i) + i;
//			if (temp > ma) {
//				ma = temp;
//				ans = i;
//			}
//		}
//	}
//	cout << ans << '\n';
//}
//
//int main()
//{
//	int t; cin >> t;
//	while (t--) {
//		vol();
//	}
//	return 0;
//}
//
//
//B
//#include<iostream>
//#include<vector>
//using namespace std;
//void vol()
//{
//	int n, m; cin >> n >> m;
//	vector<char>a(n + 1);
//	vector<char>b(m + 1);
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	for (int i = 1; i <= m; i++) cin >> b[i];
//
//	vector<int>ans(m + 1, 0);
//	if (a[1] == b[1]) ans[1] = 1;
//	else ans[1] = 0;
//
//	for (int i = 2; i <= m; i++) {
//		if (ans[i - 1] != n && b[i] == a[ans[i - 1] + 1])  
//			ans[i] = ans[i - 1] + 1;
//		else
//			ans[i] = ans[i - 1];
//	}
//	cout << ans[m] << '\n';
//}
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int t; cin >> t;
//	while (t--) {
//		vol();
//	}
//	return 0;
//}
//
//
//C
//#include<iostream>
//using namespace std;
//void vol()
//{
//	int n; cin >> n;
//	int S = 1000;
//	cout << S << " ";
//	for (int i = 2; i <= n; i++) {
//		int x;
//		cin >> x;
//		S += x;
//		cout << S << " ";
//	}
//	cout << "\n";
//}
//int main()
//{	
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int t; cin >> t;
//	while (t--) {
//		vol();
//	}
//	return 0;
//}