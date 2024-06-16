//
// Created by mellow on 2024/6/14.
//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//void vol(){
//    int n;
//    cin >> n;
//    vector<int>a(n);
//    vector<int>cnt(n + 1);
//    for(int i = 0; i < n; i++){
//        cin >> a[i];
//        cnt[a[i]]++;
//    }
//    int ans = 0;
//    for(int i = 0; i < n; i++){
//        int sum = 0;
//        for(int j = i; j < n; j++){
//            sum += a[j];
//            if(i == j){
//                continue;
//            }
//            if(sum <= n){
//                ans += cnt[sum];
//                cnt[sum] = 0;
//            }
//        }
//    }
//    cout << ans << '\n';
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
//#include<string>
//
//int main(){
//    std::string s1, s2;
//    std::cin >> s1 >> s2;
//    if(s1.size() == 6 || s2.size() == 6){
//        std::cout << -1;
//    }else {
//        int x = s1.size() - s2.size();
//        if(x > 0){
//            std::cout << x + 1;
//        }else{
//            std::cout << -x + 1;
//        }
//    }
//}



#include<iostream>
#include<string>
int main(){
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    for(int i = 1; i < n - 1; i++){
        if((s[i - 1] == '1' && s[i] == '0' && s[i + 1] == '1') || (s[i - 1] == '0' && s[i] == '1' && s[i + 1] == '0')){
            std::cout << -1;
        }
    }

    return 0;
}