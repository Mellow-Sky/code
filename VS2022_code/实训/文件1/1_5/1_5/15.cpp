//5.��������Ҫ����������������Ϊ�����ε����߳����ֱ���ú���ʵ���ж��ܷ���������Σ������ε���״�Լ��������ε������
//Ҫ�󣺱�д�����û��Զ���ĺ���:�����ж��ܷ���������εĺ������ж������ε���״�ĺ������������ε�����ĺ�����
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

//�ж��ܷ���������εĺ���
bool isTriangle(int a, int b, int c) {
	if (a + b > c && a + c > b && b + c > a) {
		return true;
	}
	else {
		return false;
	}
}

//�ж������ε���״�ĺ���
string getShape(int a, int b, int c) {
	if (a == b && b == c) {
		return "����ֱ��������";
	}
	else if (a == b || b == c || a == c) {
		return "�ȱ�������";
	}
	else {
		return "��ͨ������";
	}
}

//�������ε�����ĺ���
double getArea(int a, int b, int c) {
	//���׹�ʽ
	double p = (a + b + c) / 2.0;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
	int a, b, c;
	cout << "�����������ε����߳�a,b,c:" << endl;
	cin >> a >> b >> c;
	if (isTriangle(a, b, c)) {
		cout << "�����ε���״Ϊ��" << getShape(a, b, c) << endl;
		cout << "�����ε����Ϊ��" << getArea(a, b, c) << endl;
	}
	else {
		cout << "�������������" << endl;
	}

	return 0;
}