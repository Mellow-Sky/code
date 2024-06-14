//#include<iostream>
//#include<cmath>
//using namespace std;
//
//void vol(){
//    int x,y;
//    char f;
//    cin>>x>>f>>y;
//    if(f=='/' && y==0){
//        return;
//    }else if(f=='%' && y==0){
//        return;
//    }
//
//    if(f=='+'){6
//        2 + 3
//        2 - 3
//        2 * 3
//        2 / 3
//        2 % 3
//        2 ^ 3
//        cout<<x+y<<'\n';
//    }else if(f=='-'){
//        cout<<x-y<<'\n';
//    }else if(f=='*'){
//        cout<<x*y<<'\n';
//    }else if(f=='/'){
//        cout<<x/y<<'\n';
//    }else if(f=='%'){
//        cout<<x%y<<'\n';
//    }else if(f=='^'){
//        cout<<pow(x,y)<<'\n';
//    }
//}
//
//int main()
//{
//    std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//    int n;cin>>n;
//    while(n--){
//        vol();
//    }
//    return 0;
//}


//#include<iostream>
//using namespace std;
//using ll=long long;
//const int N=3000;
//
//int a[N];
//
//int main(){
//    std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//    ll n,p;cin>>n>>p;
//    for(int i=1;i<=n;i++)cin>>a[i];
//    ll sum=0;
//    for(int i=1;i<n;i++){
//        for(int j=i+1;j<=n;j++){
//        sum+=(a[i]+a[j])%p;
//        }
//    }
//    cout<<sum;
//
//    return 0;
//}


//#include<iostream>
//using namespace std;
//using ll=long long;
//
//ll yue(int x){
//    int cnt=0;
//    for(int i=1;i<=x;i++){
//        if(x%i==0) cnt++;
//    }
//    return cnt;
//}
//
//int main()
//{
//    std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//    ll n;cin>>n;
//    ll sum=0;
//    for(int i=1;i<=n;i++){
//        sum+=yue(i);
//    }
//    cout <<sum;
//
//    return 0;
//}



//#include<iostream>
//using namespace std;
//
//bool zhi(int x){
//    if(x==2)return false;
//    for(int i=2;i<x;i++){
//        if(x%i==0){return false;}
//    }
//    return true;
//}
//
//int main()
//{
//    std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//    int n;cin>>n;
//
//    if(n==1){cout<<0;return 0;}
//    int sum=0;
//    for(int i=2;i<=n;i++){
//        if(zhi(i))sum++;
//    }
//    cout<<sum;
//    return 0;
//}




//#include<iostream>
//using namespace std;
//using ll=long long;
//
//ll gcd(int x,int y){
//    int z;
//    while(x%y!=0){
//        z=x%y;
//        x=y;
//        y=z;
//    }
//    return z;
//}
//
//int main()
//{
//    std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//    int n;cin>>n;
//    ll sum=0;
//    for(int i=1;i<n;i++){
//        for(int j=i+1;j<=n;j++){
//            sum+=gcd(i,j);
//        }
//    }
//    cout<<sum;
//    return 0;
//}




//#include<iostream>
//using namespace std;
//using ll=long long;
//const int N=2e9;
//int a[N];
//int main() {
//    std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    ll n;
//    cin >> n;
//    for (int i = 1; i <= n; i++)cin>>a[i];
//
//
//        return 0;
//}




//#include<iostream>
//using namespace std;
//int a[80];
//void vol(){
//    int money;cin>>money;
//    for(int i=1;i<=75;i++)cin>>a[i];
//
//
//}
//
//int main()
//{
//    std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//    int t;cin>>t;
//    while(t--){
//        vol();
//    }
//
//    return 0;
//}



//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int main()
//{
//    std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//    string s;cin>>s;
//    int n;cin>>n;
//    vector<string>str(n+1);
//    for(int i=1;i<=n;i++){
//        cin>>str[i];
//    }
//    for(int i=1;i<=n;i++){
//        cout<<str[i];
//    }
//
//    return 0;
//}







//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//using ll=long long;
//int main()
//{
//    std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//    int n;cin>>n;
//    vector<ll>a(n);
//    vector<ll>b(n);
//    for(int i=0;i<n;i++)cin>>a[i];
//    for(int i=0;i<n;i++)cin>>b[i];
//    sort(a.begin(),a.end());
//    sort(b.begin(),b.end());
//    vector<ll>c(n);
//    for(int i=0;i<n;i++){
//        c[i]=(max(a[i],b[i])-min(a[i],b[i]))+1;
//    }
//    sort(c.begin(),c.end());
//    cout<<c[0];
//
//    return 0;
//}



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using ll=long long;
int main()
{
    std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n;cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    ll cnt=0;
    ll temp=a[n-1];
    for(int i=n-1;i>0;i--){

    }

    return 0;
}