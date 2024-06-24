//6.定义圆类，有成员变量半径，常量成员属性PI；有求面积和求周长的函数。在主函数中，创建类的对象，输入圆半径，输出该圆的周长和面积。
#include <iostream>
using namespace std;

class Circle {
private:
    double radius;
    const double PI = 3.1415926;
public:
    Circle(double r) {
        radius = r;
    }
    double getArea() {
        return PI * radius * radius;
    }
    double getCircumference() {
        return 2 * PI * radius;
    }
};

int main() {
    cout << "请输入圆的半径: ";
    double r;
    cin >> r;
    Circle c(r);
    cout << "圆的周长为: " << c.getCircumference() << endl;
    cout << "圆的面积为: " << c.getArea() << endl;
    return 0;
}