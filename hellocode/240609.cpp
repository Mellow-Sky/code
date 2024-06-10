//
// Created by mellow on 2024/6/9.
//
//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    int n, m;
//    cin >> n >> m;
//    int cnt = 0;
//    while(m > 0 && n >= 2){
//        m--;
//        n -= 2;
//        cnt += 3;
//    }
//    cout << cnt + n;
//    return 0;
//}



//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    int n, m;
//    cin >> n >> m;
//    vector<int> a(n);
//    for(int i = 0; i < n; i++){
//        cin >> a[i];
//    }
//    int x = a[m + 1];
//    a.erase(a.begin() + m - 1);
//    sort(a.begin(),a.end());
//    int cnt = 0;
//    int temp = a.back();
//    for(int i = a.size() - 1; i >= 0; i--){
//        if(a[i] == temp){
//            cnt++;
//        }else{
//            break;
//        }
//    }
//    cout << cnt;
//    return 0;
//}








//#include<bits/stdc++.h>
//using namespace std;
//using ll = long long;
//int main()
//{
//    ll n, x;
//    cin >> n >> x;
//    vector<ll> a;
//    for(ll i = 1; i <= x; i++){
//        if(x % i == 0){
//            a.push_back(i);
//        }
//    }
//    ll temp = 0;
//    for(auto &i : a){
//        if(i <= n) {
//            temp++;
//        }else{
//            break;
//        }
//    }
//    if(temp&1){
//        cout << "ON";
//    }else{
//        cout << "OFF";
//    }
//
//    return 0;
//}



#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    ll n, x;
    cin >> n >> x;
    int temp = 0;
    if(n < x){
        for(ll i = 1; i <= n; i++){
          if(x % i == 0){
                temp++;
          }
      }
    }else{
        for(ll i = 1; i <= x; i++){
            if(x % i == 0){
                temp++;
            }
        }
    }
    if(temp&1){
        cout << "ON";
    }else{
        cout << "OFF";
    }

    return 0;
}