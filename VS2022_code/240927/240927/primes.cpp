//素数筛法
#include <iostream>
#define N 100
bool vis[N] = { false };
int primes[N]; // 0到N-1的元素都没有被标记
int tot; // 存放素数

//普通筛法
int main() {
	vis[0] = vis[1] = true; // 0和1不是素数

	for (int i = 2; i < N; i++) {
		if (!vis[i]) {
			primes[++tot] = i; // 找到一个素数，存放到primes中
		}
		for (int j = 2 * i; j < N; j += i) {
			vis[j] = true; // 将i的倍数都标记为已被筛掉
		}
	}

	for (int i = 1; i < tot; i++) {
		std::cout << primes[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}
//
//
//
////埃氏筛法
int main() {
	vis[0] = vis[1] = true; // 0和1不是素数
	for (int i = 2; i < N; i++) {
		if (!vis[i]) {
			primes[++tot] = i; // 找到一个素数，存放到primes中
			for (int j = i * i; j < N; j += i) {
				vis[j] = true; // 将i的倍数都标记为已被筛掉
			}
		}
	}

	for (int i = 1; i < tot; i++) {
		std::cout << primes[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}



//线性筛

int main() {
	vis[0] = vis[1] = true;
	for (int i = 2; i <= N; i++) {
		if (!vis[i]) {
			primes[++tot] = i;
		}
		for (int j = 1; i * primes[j] < N; j++) {
			vis[i * primes[j]] = true;
			if (i % primes[j] == 0) {
				break;
			}
		}
	}

	for (int i = 1; i < tot; i++) {
		std::cout << primes[i]<< " ";
	}
	std::cout << std::endl;

	return 0;
}