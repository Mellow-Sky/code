//#include<iostream>
//#include<cmath>
//#include<cstdlib>
//using namespace std;
//using ll=long long;
//ll gcd(ll x, ll y) {
//
//}
//int main()
//{
//	ll x, y, z; cin >> x >> y >> z;
//	ll i, j, temp, num, num2;
//	ll max1 = max(x, y);
//	for (i = 0; i <= max1; i++) {
//		for (j = 0; j <= max1; j++) {
//			if (i - j < 0) {
//				temp = -(i - j);
//				num = i + j;
//				num2 = gcd(i, j);
//			}
//			else {
//				temp = i - j;
//				num = i + j;
//				num2 = gcd(i, j);
//			}
//			if (temp >= x && num >= y && num2 = z) {
//				cout << i << " " << j;
//				return 0;
//			}
//		}
//	}
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//typedef long long ll;
//
//void vol() 
//{
//	string a, b;
//	cin >> a >> b;
//	ll sizea = a.size();
//	ll sizeb = b.size();
//	ll num = a[sizea-1] - '0';
//	ll num2 = b[sizeb-1] - '0';
//	if ( num % 2 == 0 || num2 % 2 == 0) {
//		cout << "Yes" << "\n";
//		return;
//	}
//	else {
//		cout << "No" << "\n";
//		return;
//	}
//}
//
//int main()
//{
//	//ll n; cin >> n;
//
//		vol();
//		vol();
//	return 0;
//}
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
typedef long long ll;
const ll N = 1e6;
ll n, a[N], t;
int vol(ll a)
{
	ll i = 0,  b[N];
	while (a > 0) {
		b[i++] = a % 10;
		a / 10;
	}
	ll num=0;
	while (i--) {
		num += b[i];
	}
	return num;
}
int main()
{
	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n >> t;
	for (ll i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a, a + n + 1);
	cout << vol(a[n - t + 1]);

	return 0; 
}
// 
// 
// 
//#include<iostream>
//#include<vector>
//using namespace std;
//typedef long long ll;
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int n, k; cin >> n >> k;
//	vector<int>arr(n + 1);
//	for (int i = 1; i <= n; i++) {
//		cin >> arr[i];
//	}
//	int num = 0;
//	int temp = 0;
//	for (int i = k + 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			if (arr[i] > arr[j] && j < i) num++;
//			if (j < i && num == k) {
//				j = i + 1;
//				num = 0;
//				temp++;
//			}
//			else if (j > i && num == k) {
//				temp++;
//			}
//		}
//	}
//	temp /= 2;
//	cout << temp;
//	return 0;
//}
