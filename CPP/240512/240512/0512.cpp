//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//const int N = 1e9 + 7;
//using ll = long long;
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	ll n; cin >> n;
//	vector<ll>v(n + 1, 0);
//	for (ll i = 1; i <= n; i++)cin >> v[i];
//
//	string str; cin >> str;
//
//	ll size = 1;
//	ll sum = 0;
//	bool bo = true;
//	for (ll i = 0; i < str.size();i++) {
//		if (str[i] == 'R' && size < n) {
//			sum += v[size + 1];
//			sum %= N;
//			size++;
//			continue;
//		}
//		else if (str[i] == 'L' && size > 1) {
//			sum += v[size - 1];
//			sum %= N;
//			size--;
//			continue;
//		}
//			sum += v[size];
//			sum %= N;
//	}
//
//	cout << sum ;
//	return 0;
//}

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using ll = long long;
const int N = 1e5 ;
vector<ll>v(1);
vector<ll>a(1);
void mellow(vector<ll>b)
{
	sort(b.begin(), b.end());
	ll l = 0, r = b.size() - 1;
	ll i = 0; 
	while (l < r) {
		ll temp = b[l] * b[r];
		a[i++] = temp;
		l++; r--;
		if (l == r)a[i] = b[l];
	}
	if (b.size() == 4 || b.size() == 5)return;
	mellow(a);
}
void vol()
{
	ll n; cin >> n;
	v.resize(n);
	for (ll i = 0; i < n; i++)cin >> v[i];
	a.resize(v.size() / 2);
	sort(v.begin(), v.end());
	mellow(v);
	cout <<	a[0] - a[1];
}
int main()
{
	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t = 1;
	while (t--) {
		vol();
	}
	return 0;
}