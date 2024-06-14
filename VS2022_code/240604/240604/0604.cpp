#include<iostream>
using namespace std;
int k, n, m, s[100010], l = 1;
long long t;
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> m;
        if (s[m] && i - s[m] > k && l <= s[m] + 1) l = s[m] + 1;
        t += i - l + 1;
        s[m] = i;
    }
    cout << t;
}