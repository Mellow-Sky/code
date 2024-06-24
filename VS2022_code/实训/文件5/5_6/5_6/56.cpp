//6.声明图形类
//成员函数：输出图形的名字，求图形的面积，求图形的周长。
//声明图形类的子类，矩形类，继承方式是公有继承。
//成员变量：矩形的长和宽。
//函数：输出矩形的名字，求矩形的面积，求矩形的周长。
//声明图形类的子类，圆类，继承方式是公有继承。
//成员变量：圆的半径。
//函数：输出圆的名字，求圆的面积，求圆的周长。
//在主函数中，分别创建矩形类和圆类的对象，分别输出对象的名字和周长。
#include<iostream>
using namespace std;

class Shape{
public:
    virtual void outputName() = 0;
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
};

class Rectangle:public Shape{
private:
    double length;
    double width;
public:
    Rectangle(double l,double w):length(l),width(w){};
    void outputName(){
        cout<<"矩形"<<endl;
    }
    double getArea(){
        return length*width;
    }
    double getPerimeter(){
        return 2*(length+width);
    }

};

class Circle:public Shape{
private:
    double radius;
public:
    Circle(double r):radius(r){};
    void outputName(){
        cout<<"圆"<<endl;
    }
    double getArea(){
        return 3.1415926*radius*radius;
    }
    double getPerimeter(){
        return 2*3.1415926*radius;
    }

};

int main(){
    Rectangle rect(5,3);
    Circle circle(4);
    rect.outputName();
    cout<<"面积: "<<rect.getArea()<<endl;
    cout<<"周长: "<<rect.getPerimeter()<<endl;
    circle.outputName();
    cout<<"面积: "<<circle.getArea()<<endl;
    cout<<"周长: "<<circle.getPerimeter()<<endl;
    return 0;
}