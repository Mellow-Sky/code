//4������һ������ָ�����飬�ø�������ɶ�������ʵ��(�ӡ������ˡ���)�ĸ����ܺ����Ĺ���
#include<iostream>
using namespace std;

double add(double a, double b) {
	return a + b;
}
double sub(double a, double b) {
	return a - b;
}
double mul(double a, double b) {
	return a * b;
}
double div(double a, double b) {
	if (b == 0) {
		cout << "��������Ϊ0��" << endl;
		return 0;
	}
	return a / b;
}

int main() {
	double (*arr[4])(double, double) = { add, sub, mul, div };
	double a, b;
	cout << "����������������" << endl;
	cin >> a >> b;
	cout << "ѡ�����㹦�ܣ�" << endl;
	cout << "1���ӷ�" << endl;
	cout << "2������" << endl;
	cout << "3���˷�" << endl;
	cout << "4������" << endl;
	int choice;
	cin >> choice;
	if (choice < 1 || choice > 4) {
		cout << "�������" << endl;
		return 0;
	}
	cout << arr[choice - 1](a, b) << endl;

	return 0;
}