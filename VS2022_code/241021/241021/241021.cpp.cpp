////高精度加法
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
////a,b字符串用于存入两个大数
//std::string a, b;
////m,n分别逆序存入a,b
//std::vector <int> m, n, p;
////la,lb用于记录a,b的位数
//int la, lb;
//
//void highPrecisionAddition() {
//	int sum = 0;
//	for (int i = 0; i < la || i < lb; i++) {
//		if (i < la) {
//			sum += m[i];
//		}
//		if (i < lb) {
//			sum += n[i];
//		}
//		p.push_back(sum % 10);
//		sum /= 10;
//	}
//	if (sum) {
//		p.push_back(sum);
//	}
//}
//
//int main() {
//	//以字符串形式存放
//	std::cin >> a;
//	std::cin >> b;
//	la = a.size();
//	lb = b.size();
//	//将字符串按位逆序存入数组m, n
//	for (int i = la - 1; i >= 0; i--) {
//		m.push_back(a[i] - '0');
//	}
//	for (int i = lb - 1; i >= 0; i--) {
//		n.push_back(b[i] - '0');
//	}
//	highPrecisionAddition();
//	reverse(p.begin(), p.end());
//	for (auto i : p) {
//		std::cout << i;
//	}
//	return 0;
//}




//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//std::string a, b;
//std::vector <int> m, n;
//int la, lb;
//
//void highPrecisionMultiplication(std::vector <int>& p) {
//    for (int i = 0; i < la; i++) {
//        for (int j = 0; j < lb; j++) {
//            p[i + j] += m[i] * n[j];
//            p[i + j + 1] += p[i + j] / 10;
//            p[i + j] %= 10;
//        }
//    }
//    while (p.size() > 1 && !p.back()) {
//        p.pop_back();
//    }
//}
//
//int main() {
//    std::cin >> a;
//    std::cin >> b;
//
//    la = a.size();
//    lb = b.size();
//    std::vector <int> p(la + lb);
//
//    for (int i = la - 1; i >= 0; i--) {
//        m.push_back(a[i] - '0');
//    }
//    for (int i = lb - 1; i >= 0; i--) {
//        n.push_back(b[i] - '0');
//    }
//
//    highPrecisionMultiplication(p);
//
//    std::reverse(p.begin(), p.end());
//    for (auto i : p) {
//        std::cout << i;
//    }
//    return 0;
//}


#include<iostream>
#include<vector>
#include<bitset>
using namespace std;
#define N 1000
bool vis[N] = { false };// 0到N-1的元素都没有被标记
int primes[N]; // 存放素数
int tot;
int main()
{
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
    int n, m;
    cin >> n >> m;
    int s[55][55] = { 0 };
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> s[i][j];
        }
    }
    int l = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (primes[s[i][j]] == 1)
            {
                if (w[s[i][j + 1]] == 0 && w[s[i][j - 1]] == 0
                    && primes[s[i - 1][j]] == 0 && w[s[i - 1][j + 1]] == 0
                    && w[s[i - 1][j - 1]] == 0 && w[s[i + 1][j]] == 0
                    && w[s[i + 1][j + 1]] == 0 && w[s[i + 1][j - 1]] == 0)
                {
                    l++;
                }
            }
        }
    }
    cout << l;
    return 0;
}