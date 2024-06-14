#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<ll> b(n);
    b[0] = a[0];
    for(int i = 1; i < n; i++){
        b[i] = b[i - 1] + a[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = i; j < n - 1; j++){
            if((b[j + 1] - a[i]) + b[i] < (b[n - 1] - b[j + 1])){
                cout << "No";
            }
        }
    }
    cout << "Yes";
    return 0;
}