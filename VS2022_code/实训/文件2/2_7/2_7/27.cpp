//7.定义虚数类，类中有成员变量实部和虚部，有虚数求和的函数。在主函数中，创建类的对象，输入两个虚数，调用函数，输出两个虚数的和。

#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }
    Complex operator+(const Complex& c) const {
        return Complex(real + c.real, imag + c.imag);
    }
    void input() {
        cout << "请输入虚数的实部和虚部：" << endl;
        cin >> real >> imag;
    }
    void output() const {
        cout << "虚数的实部为：" << real << endl;
        cout << "虚数的虚部为：" << imag << endl;
    }
};

int main() {
    Complex c1, c2;
    c1.input();
    c2.input();
    Complex c3 = c1 + c2;
    c3.output();
    return 0;
}