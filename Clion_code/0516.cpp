//#include<iostream>
//
//using namespace std;
//
//bool check(int n){
//    for(int i=2;i<n;i++){
//        if(n%i==0)return 1;
//    }
//    return 0;
//}
//
//int main() {
//    std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    int n;cin>>n;
//    if(check(n))cout<<"0";
//    else cout<<"1";
//
//    return 0;
//}


/*
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
using ll = long long;
const int N = 1e9;
vector<ll> a(1);
ll n, c;
bool check(ll mid){
    ll num=0;
    ll nn=1;
    for(ll i=2;i<=n;i++){
        num+=a[i]-a[i-1];
        if(num>=mid){
            num=0;
            nn++;
        }
        if(nn>=c)return true;
    }
    return false;
}

int main() {
    std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> n >> c;
    a.resize(n + 1);
    for (int i = 1; i <= n; i++)cin >> a[i];
    sort(a.begin(),a.end());
    ll l = 1, r = N;
    while (l < r) {
        ll mid = (l + r + 1) >> 1;
        if (check(mid))l = mid;
        else r = mid - 1;
    }
    cout<<l;
    return 0;
}*/


/*
#include<iostream>
#include<vector>

using namespace std;
using ll = long long;
const int N = 1010;
vector<ll> a(N);
vector<ll> b(N);

int main() {
    std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    a[1] = 1;
    for (int i = 2; i <= 1000; i++) {
        a[i] = a[i - 1] + (i - 1);
    }
    for (int i = 1; i <= 1000; i++) {
        b[i] = b[i - 1] + a[i];
    }
    cout << b[n];

    return 0;
}*/



/*
#include<iostream>
#include<vector>

using namespace std;

bool su(int x) {
    for (int i = 2; i < x; i++) {
        if (x % i == 0)return false;
    }
    return true;
}

int main() {
    std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;
    for (int i = 1000; i <= 9999; i++) {
        if (su(i))a.push_back(i);
    }
    for (int i = 10000; i <= 99999; i++) {
        if (su(i))b.push_back(i);
    }

    int ans = 0;
    if (n >= 1000 && n <= 9999) {
        for (int i = 0; i < a.size(); i++) {
            if (n >= a[i] && n <= a[i + 1]) {
                if (n - a[i] >= a[i + 1] - n)ans = a[i + 1];
                else ans = a[i];
                cout <<"0"<< ans;
                return 0;
            }
        }
    } else {
        for (int i = 0; i < b.size(); i++) {
            if (n >= b[i] && n <= b[i + 1]) {
                if (n - b[i] >= b[i + 1] - n)ans = b[i + 1];
                else ans = b[i];
                cout << ans;
                return 0;
            }
        }
    }
}*/



//#include<iostream>
//using namespace std;
//
//bool su(int n){
//    for(int i=2;i<n;i++){
//        if(n%i==0)return false;
//    }
//    return true;
//}
//
//int main()
//{
//    std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//    int n;cin>>n;
//    int x=n,y=n;
//    while(x){
//        if(su(x)) break;
//        x++;
//    }
//    while(y){
//        if(su(y)) break;
//        y--;
//    }
//    if(x-n<=n-y){
//        if(x>9999)cout<<x;
//        else cout<<"0"<<x;
//    }else{
//        if(y>9999)cout<<y;
//        else cout<<"0"<<y;
//    }
//
//    return 0;
//}

