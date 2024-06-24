#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    a[0] = 1;
    for(int i = 1; i < n; i++){
        a[i] = count(a.begin(), a + i, a[i - 1]);
    }
    int sum = 0;
    for(auto &i : a){
        sum += i;
    }
    cout << sum;
    return 0;
}