#include<iostream>
using namespace std;

// 图形类
class graph {
protected:
	double height;  // 高
	double weight;  // 宽
public:
	// 默认构造函数
	graph() : height(0), weight(0) {}
	// 带参构造函数
	graph(double h, double w) : height(h), weight(w) {}
	// 拷贝构造函数
	graph(const graph& t) : height(t.height), weight(t.weight) {}
	// 设置高和宽
	void setgraph(double h, double w) { height = h; weight = w; }
	// 展示高和宽
	void show() {
		cout << "height is:" << height << endl;
		cout << "weight is:" << weight << endl;
	}
	// 获取高
	double put_h() { return height; }
	// 获取宽
	double put_w() { return weight; }
};

// 矩形类，继承自图形类
class squar :public graph {
public:
	// 计算矩形面积
	double area() { return weight * height; }
	// 构造函数
	squar(double h, double w) : graph(h, w) {}
	// 默认构造函数
	squar() {}
};

// 三角形类，继承自图形类
class delta :public graph {
public:
	// 计算三角形面积
	double area() { return weight * height / 2; }
	// 构造函数
	delta(double h, double w) : graph(h, w) {}
	// 默认构造函数
	delta() {}
};

int main()
{
	// 创建一个矩形对象并展示信息
	squar s(4, 5);
	s.show();
	cout << "矩形面积:" << s.area() << endl;

	// 创建一个三角形对象并展示信息
	delta d(4, 5);
	d.show();
	cout << "三角形面积:" << d.area() << endl;

	// 设置三角形的高和宽并展示信息
	d.setgraph(5, 6);
	d.show();
	cout << "三角形面积:" << d.area() << endl;
	return 0;
}
