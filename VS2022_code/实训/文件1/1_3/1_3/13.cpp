//3����дһ��ð���㷨����10��������������
#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> a(10);
	cout << "������10��������";
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
