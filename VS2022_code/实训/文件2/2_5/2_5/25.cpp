//5.定义矩形类，类中有成员变量长和宽，有求面积和求周长的函数。在主函数中，创建类的对象，输入矩形的长和宽，输出该矩形的周长和面积。

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;
public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }
    int getArea() {
        return length * width;
    }
    int getPerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    int length, width;
    cout << "请输入矩形的长和宽：" << endl;
    cin >> length >> width;
    Rectangle rect(length, width);
    cout << "矩形的周长为：" << rect.getPerimeter() << endl;
    cout << "矩形的面积为：" << rect.getArea() << endl;
    return 0;
}