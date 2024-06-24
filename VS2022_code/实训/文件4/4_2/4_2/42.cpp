//2.定义点类point，类中有成员变量 横坐标和纵坐标，有求两点之间的距离的函数；
//在主函数中，创建类的对象，输入两个点的坐标，输出两个点之间的距离。
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
	cout << "请输入坐标(x, y):" << endl;
	cin >> a >> b;
	p.setpoint(a, b);
	cout << "两点间距离:" << p.distance();
	return 0;
}
