//2����������ú���ģ��ķ����������
#include<iostream>
using namespace std;

template<typename T>
T min(T a, T b, T c) {
	T min_num = a;
	if (b < min_num) {
		min_num = b;
	}
	if (c < min_num) {
		min_num = c;
	}
	return min_num;
}

int main() {
	int a, b, c;
	cout << "��������������: ";
	cin >> a >> b >> c;
	double x, y, z;
	cout << "����������������: ";
	cin >> x >> y >> z;
	char ch1, ch2, ch3;
	cout << "�����������ַ�: ";
	cin >> ch1 >> ch2 >> ch3;
	cout << "������Сֵ: " << min(a, b, c) << endl;
	cout << "��������Сֵ: " << min(x, y, z) << endl;
	cout << "�ַ���Сֵ: " << min(ch1, ch2, ch3) << endl;
	return 0;
}