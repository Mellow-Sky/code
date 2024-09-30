// Problem: B - Mysterious Light
// Contest: AtCoder - AtCoder Grand Contest 001
// URL: https://atcoder.jp/contests/agc001/tasks/agc001_b
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
const int N = 1e3;

using i64 = long long;


int main(){
	i64 n, x;
	std::cin >> n >> x;
	std::cout << 3 * (n - std::gcd(n, x));

	return 0;
}