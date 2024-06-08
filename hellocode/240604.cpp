//
// Created by mellow on 2024/6/4.
//
//#include<iostream>
//using namespace std;
//int main()
//{
//    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//    double a,b,c,d,e;cin>>a>>b>>c>>d>>e;
//    double x=a+b+c+d+e;
//    if(x>100){cout<<"YES\n";}
//    else cout<<"NO\n";
//
//    return 0;
//}



//#include<iostream>
//using namespace std;
//int main()
//{
//    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//    int n,m;cin>>n>>m;
//    if(n == 1 && m>1){cout<<"NO\n";return 0;}
//    if(n == 1 || !(n&1)){cout<<"YES\n";return 0;}
//    if(m == 1 || (m&1) == 0){
//        cout<<"YES\n";return 0;
//    }
//    else
//        cout<<"NO\n";
//    return 0;
//}



//#include<iostream>
//using namespace std;
//
//bool vol(int sum,int i);
//
//bool check(int i){
//    int sum=0;
//    int temp=0;
//    int m=i;
//    while(i){
//        sum+=i%10;
//        i/=10;
//    }
//    if(!(sum&1) && vol(sum,m)){
//        return true;
//    }
//    else
//        return false;
//}
//
//bool vol(int sum,int i){
//    if(sum<i){
//        if(check(sum))
//            return true;
//        else
//            return false;
//    }
//    return true;
//}
//
//int main()
//{
//    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//    int n;cin>>n;
//    int cnt=0;
//    for(int i=1;i<=n;i++){
//        if(check(i))cnt++;
//    }
//    cout<<cnt<<'\n';
//    return 0;
//}



//#include<iostream>
//using namespace std;
//int k,n,m,s[100010],l=1;
//long long t;
//
//int main()
//{
//    cin>>n>>k;
//    for(int i = 1;i <= n ;i++){
//        cin>>m;
//        if(s[m] && i-s[m]>k) l = l > s[m] + 1 ? l : s[m] + 1;
//        t += i-l + 1;
//        s[m] = i;
//    }
//    cout<<t;
//}





