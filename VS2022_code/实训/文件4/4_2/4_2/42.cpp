//2.�������point�������г�Ա���� ������������꣬��������֮��ľ���ĺ�����
//���������У�������Ķ�����������������꣬���������֮��ľ��롣
#include<iostream>
using namespace std;

class point {
private:
	int x, y;
public:
	point() {}
	void setpoint(int a, int b) {
		x = a;
		y = b;
	}
	int distance() {
		return max(x, y) - min(x, y);
	}
};

int main() {
	point p;
	int a, b;
	cout << "����������(x, y):" << endl;
	cin >> a >> b;
	p.setpoint(a, b);
	cout << "��������:" << p.distance();
	return 0;
}
