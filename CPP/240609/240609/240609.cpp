#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n, l = 1;
    cin >> n;
    vector<vector<char>>a(pow(3, n), vector<char>(pow(3, n),'#'));

    a[0][0] = '#';
    for (int k = 0; k < n; k++) {
        for (int x = 0; x < 3; x++) {
            for (int y = 0; y < 3; y++) {
                if ((x == 0) && (y == 0))continue;
                if ((x == 1) && (y == 1)) {
                    for (int i = 0; i < l; i++)for (int j = 0; j < l; j++)a[x * l + i][y * l + j] = '.';
                }
                else {
                    for (int i = 0; i < l; i++) {
                        for (int j = 0; j < l; j++) {
                            a[x * l + i][y * l + j] = a[i][j];
                        }
                    }
                }
            }
        }
        l *= 3;
    }

    for (int i = 0; i < pow(3, n); i++) {
        for (int j = 0; j < pow(3, n); j++) {
            cout<<a[i][j];
        }
        cout << '\n';
    }
    return 0;
}
