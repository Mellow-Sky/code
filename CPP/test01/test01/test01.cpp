//#include <iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//const int N = 1e9;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int n; cin >> n;
//	vector<int>a(n);
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	vector<int>ans;
//	int mi = N;
//
//	for (int i = 0; i < n - 2; i++) {
//		mi = a[i + 1];
//		ans.push_back(mi);
//	}
//	sort(ans.begin(), ans.end());
//	cout << ans[0];
//	return 0;
//}


#include<iostream>
#include<algorithm>
using namespace std;
using ll = long long;
const int N = 1e9 + 7;

ll my_gcd(ll a, ll b) {
	if (b == 0) {
		return a;
	}
	return my_gcd(b, a % b);
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int j = 50; int n = 1;
	while (j--) {
		//ll n; cin >> n;
		ll sum = 0;
		for (ll i = 2; i <= n; i++) {
			sum += my_gcd(i * (i - 1) / 2, i * (i + 1) / 2) % N;
		}
		cout << sum << '\n';
		n++;
	}
	return 0;
}



//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	int n; cin >> n;
//	vector<int>a(n);
//	for (int i = 0; i < n; i++)cin >> a[i];
//	int m; cin >> m;
//	vector<int>b(m);
//	while (m--) {
//
//	}
//	
//
//
//	return 0;
//}