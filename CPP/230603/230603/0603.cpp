//#include <iostream>
//using namespace std;
//
//// 车辆类
//class Car {
//protected:
//    int power; // 动力
//    int seat;  // 座位数
//
//public:
//    // 构造函数
//    Car(int s, int p = 10) : seat(s), power(p) {}
//    // 打印信息
//    void print();
//};
//
//// 小货车类
//class Van {
//protected:
//    int power;   // 动力
//    double load; // 载客量
//
//public:
//    // 构造函数
//    Van(double l, int p = 10) : load(l), power(p) {}
//    // 打印信息
//    void print();
//};
//
//// 客货两用车类
//class Wagon : public Car, public Van {
//public:
//    // 构造函数
//    Wagon(int p, int s, double l) : Car(s, p), Van(l, p) {}
//    // 打印信息
//    void print();
//};
//
//// 打印小客车信息
//void Car::print() {
//    cout << "小客车:" << endl;
//    cout << "动力:" << power << endl;
//    cout << "座位数:" << seat << endl;
//}
//
//// 打印小货车信息
//void Van::print() {
//    cout << "小货车:" << endl;
//    cout << "动力:" << power << endl;
//    cout << "载客量:" << load << endl;
//}
//
//// 打印客货两用车信息
//void Wagon::print() {
//    cout << "客货两用车:" << endl;
//    cout << "动力:" << Car::power << endl;
//    cout << "座位数:" << seat << endl;
//    cout << "载客量:" << load << endl;
//}
//
//int main() {
//    // 创建一个客货两用车对象并打印信息
//    Wagon w(500, 4, 800);
//    w.print();
//
//    return 0;
//}
//
//
//
//
//
//#include<iostream>
//using namespace std;
//
//// 图形类
//class graph {
//protected:
//	double height;  // 高
//	double weight;  // 宽
//public:
//	// 默认构造函数
//	graph() : height(0), weight(0) {}
//	// 带参构造函数
//	graph(double h, double w) : height(h), weight(w) {}
//	// 拷贝构造函数
//	graph(const graph& t) : height(t.height), weight(t.weight) {}
//	// 设置高和宽
//	void setgraph(double h, double w) { height = h; weight = w; }
//	// 展示高和宽
//	void show() {
//		cout << "height is:" << height << endl;
//		cout << "weight is:" << weight << endl;
//	}
//	// 获取高
//	double put_h() { return height; }
//	// 获取宽
//	double put_w() { return weight; }
//};
//
//// 矩形类，继承自图形类
//class squar :public graph {
//public:
//	// 计算矩形面积
//	double area() { return weight * height; }
//	// 构造函数
//	squar(double h, double w) : graph(h, w) {}
//	// 默认构造函数
//	squar() {}
//};
//
//// 三角形类，继承自图形类
//class delta :public graph {
//public:
//	// 计算三角形面积
//	double area() { return weight * height / 2; }
//	// 构造函数
//	delta(double h, double w) : graph(h, w) {}
//	// 默认构造函数
//	delta() {}
//};
//
//int main()
//{
//	// 创建一个矩形对象并展示信息
//	squar s(4, 5);
//	s.show();
//	cout << "矩形面积:" << s.area() << endl;
//
//	// 创建一个三角形对象并展示信息
//	delta d(4, 5);
//	d.show();
//	cout << "三角形面积:" << d.area() << endl;
//
//	// 设置三角形的高和宽并展示信息
//	d.setgraph(5, 6);
//	d.show();
//	cout << "三角形面积:" << d.area() << endl;
//	return 0;
//}
//
