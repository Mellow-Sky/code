//6.��������Ҫ������һ��һԪ���η��̵�����ϵ�������ú����жϸ÷����Ƿ���ʵ���⣬�����ʵ��������ʵ�����������
//Ҫ����д�����û��Զ��庯����
//�жϷ���ʽ�Ƿ��н⺯����
//�󷽳̵Ľ⺯����
//˵����
//������ʵ�����������b* b - 4 * a * c >= 0
//���̵Ľ⣺ (-b + sqrt(b * b - 4 * a * c)) / (a * 2)
//			(-b - sqrt(b * b - 4 * a * c)) / (a * 2)
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double a, b, c;
	cout << "������һԪ���η��̵�����ϵ����" << endl;
	cin >> a >> b >> c;
	if (b * b - 4 * a * c >= 0) {
		double x1 = (-b + sqrt(b * b - 4 * a * c)) / (a * 2);
		double x2 = (-b - sqrt(b * b - 4 * a * c)) / (a * 2);
		cout << "������ʵ���⣬���Ϊ��" << x1 << "��" << x2 << endl;
	}
	else {
		cout << "������ʵ����" << endl;
	}
	return 0;
}