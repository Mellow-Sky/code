// #include<iostream>
// #include<queue>
// #include<vector>
// using namespace std;

// int fx[4]={0,1,0,-1};
// int fy[4]={1,0,-1,0};

// int main()
// {
//     std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//     int m, n; cin >> m >> n;
//     vector<vector <int> >v( m + 1,vector<int> ( n + 1, 0 ));
//     queue<pair<int,int> >q;
//     q.push({1,1});
//     v[1][1] = 1;
//     int cnt = 2;
//     while(!q.empty()){
//         int x = q.front().first;
//         int y = q.front().second;
//         q.pop();
//         for(int i = 0;i < 4;i++){
//             int nx = x + fx[i];
//             int ny = y + fy[i];
//             if(nx <= m && nx > 0 && ny <= n && ny > 0 && v[nx][ny] == 0){
//                 v[nx][ny] = cnt++;
//                 q.push({nx,ny});
//             }
//         }
//     }
//     for(int i = 1; i <= m;i++){
//         for(int j = 1; j <= n;j++){
//             cout << v[i][j] << " ";
//         }
//         cout << '\n';
//     }

//     return 0;
// }



// #include<iostream>
// using namespace std;

// bool check(int a)
// {

// }

// void vol()
// {
//     int n,a,k;cin>>n>>a>>k;
//     if(n==1 && k==1)cout<<a<<'\n';
//     if(n==1){
        
//         a+=1;
//         if(check(a)) cout<<"p";
//         else cout<<a;
//         cout<<"\n";
//         return;
//     }

//     a+=1;
//     while(k--){
//         if(check(a)) cout<<"p ";
//         else cout<<a<<" ";
//         a+=n;
//     }
//     cout<<"\n";
// }

// int main()
// {
//     std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//     int t;cin>>t;
//     while(t--){
//         vol();
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;
// bool check(int a){
//     while(a!=0){
//         if(a%10==7)  return true;
//         else a/=10;return check(a);
//     }
//     return false;
// }

// void vol()
// {
//     int n,a,k;cin>>n>>a>>k;
//     a+=1;
//     while(k--){
//         if(a%7==0 || check(a))cout << "p ";
//         else cout<<a<<" ";
//         a+=n;
//     }
//     cout<<'\n';
// }

// int main()
// {
//     std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//     int t;cin>>t;
//     while(t--){
//         vol();
//     }

//     return 0;
// }



#include<iostream>
using namespace std;
using ll=long long;
int main()
{
    std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    ll n,m;cin>>n>>m;
    __builtin_va_list args;

    return 0;
}