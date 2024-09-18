#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main() {
    std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<string> vec;
    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;
        vec.push_back(str);
    }
    int ans = 0;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < m - 1; j++) {
            if(vec[i][j] == 'c' && vec[i][j + 1] == 'c' && vec[i + 1][j] == 'p' && vec[i + 1][j + 1] == 'c') {
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}