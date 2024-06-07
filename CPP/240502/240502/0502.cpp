//A简单
#include<iostream>
using namespace std;
void vol()
{
	int a[3];
	for (int i = 0; i < 3; i++) {
		cin >> a[i];
	}
	if (a[0] == a[1] + a[2]) {
		cout << "YES" << '\n';
		return;
	}
	else if (a[1] == a[0] + a[2]) {
		cout << "YES" << '\n';
		return;
	}
	else if (a[2] == a[0] + a[1]) {
		cout << "YES" << '\n';
		return;
	}
	else {
		cout << "NO" << '\n';
		return;
	}
}
int main()
{
	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t; cin >> t;
	while (t--) {
		vol();
	}
	return 0;
}

//B简单
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using ll = long long;
void vol()
{
	int n; cin >> n;
	vector<ll>a(n, 0);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	for (ll i = 0; i < n-1; i++) {
		if (a[i] == a[i + 1]) {
			cout << "NO" << '\n';
			return;
		}
	}
	cout << "YES" << '\n';
}
int main()
{
	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll tt; cin >> tt;
	while (tt--) {
		vol();
	}
	return 0;
}



//C简单
#include<iostream>
#include<vector>
using namespace std;
void vol()
{
	vector<vector<char>>a(9, vector<char>(9));
	for (int i = 1; i <= 8; i++) 
		for (int j = 1; j <= 8; j++) cin >> a[i][j];
			
	for (int i = 1; i <= 8; i++) {
		int tempR = 0;
		for (int j = 1; j <= 8; j++) {
			if (a[i][j] == 'R') tempR++;
		}
		if (tempR == 8) {
			cout << "R" << '\n';
			return;
		}
	}
	for (int i = 1; i <= 8; i++) {
		int tempB = 0;
		for (int j = 1; j <= 8; j++) {
			if (a[j][i] == 'B') tempB++;
		}
		if (tempB == 8) {
			cout << "B" << '\n';
			return;
		}
	}
	
}
int main()
{
	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t; cin >> t;
	while (t--) {
		vol();
	}
	return 0;
}



//D.1
//超时
#include<iostream>
#include<vector>
using namespace std;
using ll = long long;

ll su(ll a, ll b)
{
	ll ma,mb;
	if (a > b)ma = a, mb = b;
	else ma = b, mb = a;
	while (mb != 0) {
		ll temp = ma % mb;
		ma = mb;
		mb = temp;
	}
	return ma;
}
void vol()
{
	ll n; cin >> n;
	vector<ll>a(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}
	ll ma = 0;
	for (ll i = n - 1; i >= 0; i--) {
		for (ll j = n - 1; j >= 0; j--) {
			if (su(a[i], a[j]) == 1) {
				ma = max(i + j + 2, ma); 
				break;
			}
		}
	}
	if (ma == 0)cout << "-1" << '\n';
	else cout << ma << '\n';
}
int main()
{
	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll t; cin >> t;
	while (t--) {
		vol();
	}
	return 0;
}

//D
//优化后
//先存1000以内的可能性然后直接使用，优化了时间
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long
vector<int> pairs[1001];

ll su(ll a, ll b)
{
	ll ma,mb;
	if (a > b)ma = a, mb = b;
	else ma = b, mb = a;
	while (mb != 0) {
		ll temp = ma % mb;
		ma = mb;
		mb = temp;
	}
	return ma;
}

void solve() {
    int n; cin >> n;
    vector<int> id[1001];
    for (int i = 1; i <= n; ++i) {
        int x; cin >> x;
        id[x].push_back(i);
    }
    int ans = -1;
    for (int i = 1; i <= 1000; ++i) {
        for (int j : pairs[i]) {
            if (!id[i].empty() && !id[j].empty()) {
                ans = max(ans, id[i].back() + id[j].back());
            }
        }
    }
    cout << ans << "\n";
}
//先计算1000以内的可能性
int main() {
    for (int i = 1; i <= 1000; ++i) {
        for (int j = 1; j <= 1000; ++j) {
            if (su(i, j) == 1) {
                pairs[i].push_back(j);
            }
        }
    }
    std::ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}