//8.定义三角形类，类中有成员变量三边长，有成员函数判断能否组成三角形，求三角形的周长，三角形的面积。
// 主函数中，创建类的对象，输入三角形的三边长，如果能组成三角形，输出该三角形的周长和面积，否则不输出。
#include <iostream>
using namespace std;

class Triangle {
private:
    double a, b, c;
public:
    Triangle(double x, double y, double z) {
        a = x;
        b = y;
        c = z;
    }
    bool isTriangle() {
        if (a + b > c && a + c > b && b + c > a) {
            return true;
        }
        else {
            return false;
        }
    }
    double perimeter() {
        if (isTriangle()) {
            return a + b + c;
        }
        else {
            return 0;
        }
    }
    double area() {
        if (isTriangle()) {
            //海伦公式
            double s = (a + b + c) / 2;//半周长
            return sqrt(s * (s - a) * (s - b) * (s - c));
        }
        else {
            return 0;
        }
    }
};

int main() {
    cout << "请输入三角形的三边长：" << endl;
    double x, y, z;
    cin >> x >> y >> z;
    Triangle t(x, y, z);
    if (t.isTriangle()) {
        cout << "周长：" << t.perimeter() << endl;
        cout << "面积：" << t.area() << endl;
    }
    return 0;
}