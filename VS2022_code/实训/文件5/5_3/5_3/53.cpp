//3.定义一个图形类，其中有公有的数据成员：高度和宽度。
//公有的成员函数：有参的构造函数，无参的构造函数，设置信息函数，显示信息函数。
//由该图形类建立两个派生类：矩形类和等腰三角形类。
//每个派生类中都包含一个函数area()，分别用来计算矩形和等腰三角形的面积。
//在main函数中创建矩形类的对象，打印输出矩形的面积；
//创建等腰三角形类的对象，打印输出等腰三角形的面积。
#include <iostream>
using namespace std;

class Shape {
public:
    int height;
    int width;
    Shape() {
        height = 0;
        width = 0;
    }
    Shape(int h, int w) {
        height = h;
        width = w;
    }
    void setInfo(int h, int w) {
        height = h;
        width = w;
    }
    void displayInfo() {
        cout << "高度: " << height << endl;
        cout << "宽度: " << width << endl;
    }
};

class Rectangle : public Shape {
public:
    int area() {
        return height * width;
    }
};

class EquilateralTriangle : public Shape {
public:
    int area() {
        return (height * width) / 2;
    }
};

int main() {
    Rectangle rect;
    rect.setInfo(5, 10);
    rect.displayInfo();
    cout << "矩形类面积: " << rect.area() << endl;

    EquilateralTriangle equi;
    equi.setInfo(5, 10);
    equi.displayInfo();
    cout << "等腰三角形类面积: " << equi.area() << endl;

    return 0;
}