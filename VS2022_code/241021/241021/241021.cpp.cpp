////�߾��ȼӷ�
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
////a,b�ַ������ڴ�����������
//std::string a, b;
////m,n�ֱ��������a,b
//std::vector <int> m, n, p;
////la,lb���ڼ�¼a,b��λ��
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
//	//���ַ�����ʽ���
//	std::cin >> a;
//	std::cin >> b;
//	la = a.size();
//	lb = b.size();
//	//���ַ�����λ�����������m, n
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




#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
std::string a, b;
std::vector <int> m, n;
int la, lb;

void highPrecisionMultiplication(std::vector <int>& p) {
    for (int i = 0; i < la; i++) {
        for (int j = 0; j < lb; j++) {
            p[i + j] += m[i] * n[j];
            p[i + j + 1] += p[i + j] / 10;
            p[i + j] %= 10;
        }
    }
    while (p.size() > 1 && !p.back()) {
        p.pop_back();
    }
}

int main() {
    std::cin >> a;
    std::cin >> b;

    la = a.size();
    lb = b.size();
    std::vector <int> p(la + lb);

    for (int i = la - 1; i >= 0; i--) {
        m.push_back(a[i] - '0');
    }
    for (int i = lb - 1; i >= 0; i--) {
        n.push_back(b[i] - '0');
    }

    highPrecisionMultiplication(p);

    std::reverse(p.begin(), p.end());
    for (auto i : p) {
        std::cout << i;
    }
    return 0;
}

