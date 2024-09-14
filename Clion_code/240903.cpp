//
// Created by mellow on 2024/9/3.
//
//#include<iostream>
//using namespace std;
//int main(){
//    int n, t, a;
//    cin >> n >> t >> a;
//    n = (n + 1) >> 1;
//    if(t >= n || a >= n) {
//        cout << "Yes";
//    }else {
//        cout << "No";
//    }
//    return 0;
//}


#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<string> vec(n);
    int maxSize = 0;
    for(int i = 0; i < n; i++) {
        cin >> vec[i][0];
        maxSize = maxSize > vec[i].size() ? maxSize : vec[i].size();
    }
    cout << vec[1];

    return 0;
}