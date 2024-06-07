//#include<iostream>
//using namespace std;
//using ll = long long;
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	ll a, b, c; cin >> a >> b >> c;
//	if (b < a && b < c) {
//		cout << min(a, c) - b;
//	}
//	else cout << "0";
//
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//using ll = long long;
//
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int n, k; cin >> n >> k;
//	vector<int>p(n + 1);
//	for (int i = 1; i <= n; i++) cin >> p[i];
//
//	if (k <= n) {
//		for (int i = 1; i <= k; i++) {
//			p[i] = *max_element(p.begin(), p.end()) + i;
//		}
//		for (int i = 1; i <= n; i++) { cout << p[i] << " "; }
//		cout << '\n';
//	}
//	else cout << "-1" << '\n';
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//const int N = 1e5 + 1;
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	string s; cin >> s;
//	int size = s.size();
//	int temp = 0;
//	for (int i = 0; i < size; i++) {
//		if (s[i] % 4 == 0) {
//			cout << i + 1 << '\n';
//			return 0;
//		}
//		else if()
//	}
//	cout << "-1\n";
//
//	return 0;
//}


//B
// 
//#include<iostream>
//#include<vector>
//using namespace std;
//const int N = 1e5 + 9;
//using ll = long long;
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int n, k; cin >> n >> k;
//	vector<int>p(n + 1);
//	for (int i = 1; i <= n; i++) cin >> p[i];
//
//	vector<int>a(N , 0);
//	vector<int>b(n+1,0);
//
//	if (k <= n) {
//		for (int i = 1; i <= n; i++) a[p[i]] = 1;//a记录出现过的数字
//		
//		int temp = 1, an = k;
//		for (int i = 1; i <= N; i++) {
//			if (a[i] == 0){
//				b[temp] = i;
//				temp++;
//				an--;
//			}
//			if (an == 0)break;
//		}//将没出现的数字尾插至b
//
//		for (int j = 1; j <= k; j++) p[j] = b[j];//修改前k个数字
//		
//		for (int i = 1; i <= n; i++) cout << p[i] << " ";//输出
//	}
//	else 
//		cout << "-1" << '\n';
//	return 0;
//}
