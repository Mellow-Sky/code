//1����д�������а����������ص�min����������min������������������
// ��һ��min���������������double�Ͳ����е���Сֵ
// �ڶ���min���������������char�Ͳ����е���Сֵ
// ������min���������������int�Ͳ����е���Сֵ��
// ���������У��ֱ�ͨ��������������int����������double����������char��������ͨ��min����������е���Сֵ��
#include<iostream>
using namespace std;
// ��һ��min���������������double�Ͳ����е���Сֵ
double min(double a, double b, double c) {
	double min_num = a;
	if (b < min_num) {
		min_num = b;
	}
	if (c < min_num) {
		min_num = c;
	}
	return min_num;
}

// �ڶ���min���������������char�Ͳ����е���Сֵ
char min(char a, char b, char c) {
	char min_num = a;
	if (b < min_num) {
		min_num = b;
	}
	if (c < min_num) {
		min_num = c;
	}
	return min_num;
}

// ������min���������������int�Ͳ����е���Сֵ
int min(int a, int b, int c) {
	int min_num = a;
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
	double x, y, z;
	char m, n, o;
	cout << "����������int������" << endl;
	cin >> a >> b >> c;
	cout << "����������double������" << endl;
	cin >> x >> y >> z;
	cout << "����������char������" << endl;
	cin >> m >> n >> o;
	cout << "int��������СֵΪ��" << min(a, b, c) << endl;
	cout << "double��������СֵΪ��" << min(x, y, z) << endl;
	cout << "char��������СֵΪ��" << min(m, n, o) << endl;

	return 0;
}