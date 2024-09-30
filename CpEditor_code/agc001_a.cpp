// Problem: A - BBQ Easy
// Contest: AtCoder - AtCoder Grand Contest 001
// URL: https://atcoder.jp/contests/agc001/tasks/agc001_a
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
const int N = 1e3;

using i64 = long long;


int main(){
	std::ios::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);
	int n;
	std::cin >> n;
	std::vector<int> a(2 * n, 0);
	for(int i = 0; i < 2 * n; i++) {
		std::cin >> a[i];
	}
	std::sort(a.begin(), a.end());
	int sum = 0;
	for(int i = 0; i < 2 * n; i += 2) {
		sum += a[i];
	}
	std::cout << sum;
	return 0;
}