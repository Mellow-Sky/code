//����ɸ��
#include <iostream>
#define N 100
bool vis[N] = { false };
int primes[N]; // 0��N-1��Ԫ�ض�û�б����
int tot; // �������

//��ͨɸ��
int main() {
	vis[0] = vis[1] = true; // 0��1��������

	for (int i = 2; i < N; i++) {
		if (!vis[i]) {
			primes[++tot] = i; // �ҵ�һ����������ŵ�primes��
		}
		for (int j = 2 * i; j < N; j += i) {
			vis[j] = true; // ��i�ı��������Ϊ�ѱ�ɸ��
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
////����ɸ��
int main() {
	vis[0] = vis[1] = true; // 0��1��������
	for (int i = 2; i < N; i++) {
		if (!vis[i]) {
			primes[++tot] = i; // �ҵ�һ����������ŵ�primes��
			for (int j = i * i; j < N; j += i) {
				vis[j] = true; // ��i�ı��������Ϊ�ѱ�ɸ��
			}
		}
	}

	for (int i = 1; i < tot; i++) {
		std::cout << primes[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}



//����ɸ

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