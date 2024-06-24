//3、编写一个冒泡算法，对10个整数进行排序。
#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> a(10);
	cout << "请输入10个整数：";
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 10; i++) {
		bool flag = false;
		for (int j = 0; j < 10 - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
				flag = true;
			}
		}
		if (!flag) {
			break;
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	return 0;
}
