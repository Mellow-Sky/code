//5、定义一个点类Point，类中有公有的数据成员：x，y（坐标点），
//有公有的成员函数：有参的构造函数，无参的构造函数，设置信息函数，显示信息函数
//定义一个圆类Circle，该类公有继承Point类，类中新增公有的数据数据成员r（半径）, 新增公有的计算圆面积的函数。
//定义Cylinder类，该类公有继承Circle类。Cylinder类中新增公有的数据成员h(高)，类中新增公有的计算圆柱体积的函数。
//圆柱体积计算公式：圆柱体积 = 2 * PI * r * h.
//在main函数中创建圆类的对象，求圆的面积。
//创建圆柱体的对象，求圆柱体的体积。
#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.1415926;

class Point {
public:
    double x, y;
    Point(double x = 0, double y = 0) {
        this->x = x;
        this->y = y;
    }
    void setInfo(double x, double y) {
        this->x = x;
        this->y = y;
    }
    void showInfo() {
        cout << "坐标点为(" << x << "," << y << ")" << endl;
    }
};

class Circle : public Point {
public:
    double r;
    Circle(double x = 0, double y = 0, double r = 0) : Point(x, y) {
        this->r = r;
    }
    double getArea() {
        return PI * r * r;
    }
};

class Cylinder : public Circle {
public:
    double h;
    Cylinder(double x = 0, double y = 0, double r = 0, double h = 0) : Circle(x, y, r) {
        this->h = h;
    }
    double getVolume() {
        return 2 * PI * r * h;
    }
};

int main() {
    Circle c(1, 2, 3);
    c.showInfo();
    cout << "圆的面积为：" << c.getArea() << endl;

    Cylinder cy(1, 2, 3, 4);
    cy.showInfo();
    cout << "圆柱体的体积为：" << cy.getVolume() << endl;

    return 0;
}