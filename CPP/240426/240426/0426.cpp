#include<iostream>
#include<cmath>
using namespace std;
typedef ll long long;

int main()
{
	ll x, y, z; cin >> x >> y >> z;
	ll i, j, temp,num,num2;
	ll max=max(x, y);
	for (i = 0; i<=max; i++) {
		for (j = 0; j<=max; j++) {
				if (i - j < 0) {
					temp = -(i - j);
					num = i + j;
					num2 = gcd(i, j);
				}
				else { 
					temp = i - j; 
					num = i + j;
					num2 = gcd(i, j);
				}
				if (temp >= x && num >= y && num2 = z) {
					cout << i << " " << j;
					return 0;
				}
		}
	}

	return 0;
}