#include<iostream>
#include<string>
#include<vector>
using ll=long long;
using namespace std;

bool qua(ll x){
    ll l=1,r=1e9;
    while(l<=r){
        ll mid=(l+r-1)>>1;
        if(mid*mid==x)return true;
        if(mid*mid>x)r=mid-1;
        else l=mid+1;
    }
    return false;
}

void vol()
{
    ll n;cin>>n;
    vector<ll>a(n+1);
    ll num=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        num+=a[i];
    }
    if(qua(num))cout<<"YES\n";
    else cout<<"NO\n";
}

int main()
{
    std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t;cin>>t;
    while(t--){
        vol();
    }
}