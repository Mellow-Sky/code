//
// Created by mellow on 2024/6/10.
//
//#include<iostream>
//#include<string>
//int main()
//{
//    std::string s;
//    std::cin >> s;
//    int cnt = 0;
//    for(auto &i :s){
//        if(i == 'l'){
//            cnt++;
//        }
//    }
//    std::cout << cnt;
//    return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//using ll = long long;
//
//int main()
//{
//    string n;
//    cin >> n;
//    ll x;
//    if(n[n.size() - 1] == '0'){
//        cout << 0;
//        return 0;
//    }
//    if(n.size() < 2){
//        x = n[0] - '0' ;
//    }else{
//        x = n[n.size() - 1] - '0';
//    }
//    cout << 10 - x;
//    return 0;
//}








//#include<iostream>
//#include<set>
//#include<string>
//using namespace std;
//
//void vol(){
//    set<char>a;
//    string s;
//    cin >> s;
//    for(auto &i:s){
//        a.insert(i);
//    }
//    for(auto &i:a){
//        cout << i;
//    }
//    cout << '\n';
//}
//
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--){
//        vol();
//    }
//
//    return 0;
//}









//#include<iostream>
//#include<set>
//#include<string>
//#include<vector>
//using namespace std;
//int main()
//{
//    int n;
//    cin >> n;
//    set<string>a;
//    int sum = 0;
//    for(int i = 0; i < n; i++){
//        string s;
//        int n;
//        cin >> s >> n;
//        sum += n;
//        a.insert(s);
//    }
//    int x = sum % n;
//    vector<string>b;
//    for(auto &i:a){
//        b.push_back(i);
//    }
//    cout << b[x];
//    return 0;
//}




//#include<iostream>
//using namespace std;
//int main(){
//    int x, y;
//    cin >> x >> y;
//    int cnt = y / 2 + y % 2;
//    x = x - cnt * 7;
//    if(x < 0){
//        cout << cnt;
//    }else{
//        cout << cnt + x / 15 + x % 15;
//    }
//
//    return 0;
//}



//#include<iostream>
//int main(){
//    std::cout << 100 - 7 * 9;
//    return 0;
//}


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<ll>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    ll sum = 0;
    vector<ll>b(n);
    b[0] = a[0];
    for(int i = 1; i < n; i++){
        b[i] = b[i - 1] + a[i];
        if(a[i] < b[i - 1]){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";

    return 0;
}



//#include<iostream>
//#include<cmath>
//using namespace std;
//using ll = long long;
//const ll N = 1e12;
//int main()
//{
//    ll n;
//    cin >> n;
//    ll x = sqrt(n) + 0.5;
//    ll cnt = N;
//    if((n - x * x) > 0 && (n - x * x) % 2 == 0){
//        cnt = min(cnt, (n - x * x) / 2);
//    }
//    if((x * x - n) > 0 && (x * x - n) % 2 == 0){
//        cnt = min(cnt, (x * x - n) / 2);
//    }
//    if(((x + 1) * (x + 1) - n) > 0 && ((x + 1) * (x + 1) - n) % 2 == 0){
//        cnt = min(cnt, ((x + 1) * (x + 1) - n) / 2);
//    }
//    if((n - (x - 1) * (x - 1)) > 0 && (n - (x - 1) * (x - 1)) % 2 == 0){
//        cnt = min(cnt, (n - (x - 1) * (x - 1)) / 2);
//    }
//    cout << cnt;
//    return 0;
//}