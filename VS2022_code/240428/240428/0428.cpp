//#include<iostream>
//#include<string>
//#include<queue>
//using namespace std;
//int n, m ;
//string str[1005];
//int visited[1005][1005];
//int dx[4] = { 1,0,0,-1 };
//int dy[4] = { 0,1,-1,0 };
//bool adj(int x, int y){
//	for (int i = 0; i < 4; i++) {
//		int nx = x + dx[i] , ny = y + dy[i];
//		if (nx < 0 || nx >= n || ny >= m || ny < 0) continue;
//		if (str[nx][ny] == '#') return true;
//	}
//	return false;
//}
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) cin >> str[i];
//	int mx = 1, k = 0;
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (str[i][j] == '#' || visited[i][j]) continue;
//			if (adj(i, j)) continue;
//			int ans = 1;
//			queue<pair<int, int> >q({ {i,j} }); visited[i][j] = ++k;
//			while (!q.empty()) {
//				pair<int, int> cur = q.front(); q.pop();
//				for (int u = 0; u < 4; u++) {
//					int nx = cur.first + dx[u], ny = cur.second + dy[u];
//					if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
//					if (visited[nx][ny] == k) continue;
//					ans++;
//					if (!adj(nx, ny)) q.push({ nx,ny });
//					visited[nx][ny] = k;
//				}	
//			}
//			mx = max(mx, ans);
//		}
//	}
//	cout << mx;
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//using ll = long long;
//void vol() {
//	ll m, n; cin >> m >> n;
//	vector<ll>ve(m + 1 , 0);
//	for (ll i = 1; i <= m; i++) {
//		cin >> ve[i];
//	}
//	vector<ll>cop(m + 1, 0);
//	for (ll i = 1; i <= m; i++) {
//		cop[i] = cop[i - 1] + ve[i];
//	}
//	ll l, r;
//	for (ll i = 1; i <= n; i++) {
//		cin >> l >> r;
//		cout << cop[r] - cop[l - 1] << '\n';
//	}
//}
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	ll t; cin >> t;
//	while (t--) {
//		vol();
//	}
//	return 0;
//}
// 前缀和
//#include<iostream>
//#include<vector>
//using namespace std;
//using ll = long long;
//int main()
//{
//	ll n, p, q; cin >> n >> p >> q;;
//	vector<ll>ve(n + 1, 0);
//	for (ll i = 1; i <= n; i++)cin >> ve[i];
//	vector<ll>cop(n + 1, 0);
//	for (ll i = 1; i <= n; i++) cop[i] = ve[i] - ve[i - 1];
//
//	for (ll i = 1; i <= p; i++) {
//		ll l, r, num; cin >> l >> r >> num;
//		cop[l] += num; cop[r + 1] -= num;
//	}
//	
//	for (ll i = 1; i <= n; i++)ve[i] = cop[i] + ve[i - 1];
//	vector<ll>nn(n + 1, 0);
//	for (ll i = 1; i <= n; i++)nn[i] = nn[i - 1] + ve[i];
//
//	for (ll i = 1; i <= q; i++) {
//		ll l, r; cin >> l >> r;
//		cout << nn[r] - nn[l - 1] << '\n';
//	}
//
//	return 0;
//}
// 差分
//#include<iostream>
//using namespace std;
//const int N = 1e5+9;
//using ll = long long;
//ll a[N], diff[N], num[N];
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int n; cin >> n;
//	int p; cin >> p;
//	int q; cin >> q;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	for (int i = 1; i <= n; i++) diff[i] = a[i] - a[i - 1];
//
//	
//	while (p--) {
//		ll l, r, x; cin >> l >> r >> x;
//		diff[l] += x; diff[r + 1] -= x;
//	}
//
//	for (int i = 1; i <= n; i++) a[i] = diff[i] + a[i - 1];
//	for (int i = 1; i <= n; i++) num[i] = num[i - 1] + a[i];
//
//	
//	while (q--) {
//		ll l, r; cin >> l >> r;
//		cout << num[r] - num[l - 1] << '\n';
//	}
//
//	return 0;
//}
//
//二维前缀和
//#include<iostream>
//#include<vector>
//using namespace std;
//using ll = long long;
//
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	ll n, m, q; cin >> n >> m >> q;
//	vector<vector<ll> >a(n + 1, vector < ll >(m + 1, 0));
//	ll i, j;
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= m; j++) {
//			cin >> a[i][j];
//		}
//	}
//	vector<vector<ll> >b(n + 1, vector < ll >(m + 1, 0));
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= m; j++) {
//			b[i][j] = b[i - 1][j] + b[i][j - 1] + a[i][j] - b[i - 1][j - 1];
//		}
//	}
//	
//	while (q--) {
//		ll x1, y1, x2, y2;
//		cin >> x1 >> y1 >> x2 >> y2;
//		cout << b[x2][y2] - b[x1 - 1][y2] - b[x2][y1 - 1] + b[x1 - 1][y1 - 1] << '\n';
//	}
//
//	return 0;
//}
//二维差分
//#include<iostream>
//#include<vector>
//using namespace std;
//using ll = long long;
//
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	ll n, m, q; cin >> n >> m >> q;
//	vector<vector<ll>>a(n + 1, vector<ll>(m + 1, 0));
//	ll i, j;
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= m; j++) {
//			cin >> a[i][j];
//		}
//	}
//	vector<vector<ll>>b(n + 1, vector<ll>(m + 1, 0));
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= m; j++) {
//			b[i][j]=
//		}
//	}
//
//	return 0;
//}































//#include<iostream>
//#include<vector>
//using namespace std;
//using ll = long long;
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	ll n, h; cin >> n >> h;
//	vector<vector<char>>a(6, vector<char>(n + 1));
//	vector<vector<char>>b(6, vector<char>(n + 1, 0));
//	ll i,j;
//	for (i = 1; i <= 5; i++) {
//		for (j = 1; j <= n; j++) {
//			cin >> a[i][j];
//		}
//	}
//	ll temp = 0;
//	for(i=1;i<=n;i++){
//		if (a[2][i] == '*') {
//			h--; temp++; 
//			b[2][i] = 1;
//		}
//		if (a[4][i] == '*') {
//			h--; temp++;
//			b[4][i] = 1;
//		}
//		if (h == 0) break;
//	}
//	if (h >= 1) {
//		for(i=1;i<=n;i++){
//			if (a[1][i] == '*' && b[2][i] == 1 && h >= 1) {h--; temp++; }
//			if (a[5][i] == '*' && b[4][i] == 1 && h >= 1) {h--; temp++; }
//			if (a[1][i] == '*' && b[2][i] == 0 && h >= 2) {h -= 2; temp++; }
//			if (a[5][i] == '*' && b[4][i] == 0 && h >= 2) {h -= 2; temp++; }
//			if (h == 0) break;
//		}
//	}
//	cout << temp;
//	return 0;
//}





//#include<iostream>
//#include<vector>
//using namespace std;
//using ll = long long;
//
//ll fun(ll x, ll n, vector<ll>& b) {
//	int sum = 0;
//	for (ll i = 1; i <= n; ++i) {
//		ll y = i - x;
//		sum = sum + y * y * b[i];
//	}
//	return sum;
//}
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int n; cin >> n;
//	vector<ll>a(n + 1);
//	for (ll i = 1; i <= n; ++i) cin >> a[i];
//
//	ll ans = fun(1, n, a);
//	for (ll i = 2; i <= n; ++i) {
//		ll sum = 0;
//		for (ll j = 1; j <= n; ++j) {
//			ll y = j - i;
//			sum = sum + y * y * a[j];
//		}
//		ans = min(ans, sum);
//	}
//	cout << ans;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//
//
//	return 0;
//}

#include<vector>
#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
#ifdef DEBUG
#else
#define debug(...) (void)0
#endif
using namespace std;
using i64 = int64_t;
using u64 = uint64_t;
using f64 = double_t;
int main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	cout << fixed << setprecision(20);
	int n, h; cin >> n >> h;
	vector<string> s(5);
    int n, h;
    cin >> n >> h;
    vector<string> s(5);
    for (auto& si : s) cin >> si;
    int one = 0, two = 0;
    for (auto [j, k] : vector{ pair(1, 0), pair(3, 4) }) {
        for (int i = 0; i < n; i += 1) {
            if (s[j][i] == '*') {
                one += 1 + (s[k][i] == '*');
            }
            else {
                two += s[k][i] == '*';
            }
        }
    }
    cout << min(h, one) + min(two, max(h - one, 0) / 2);
}
