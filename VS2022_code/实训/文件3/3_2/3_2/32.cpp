//2.描述复数类，并求两个复数的加法运算。
//类中的函数：
//构造函数，两个。
//析构函数一个。
//拷贝构造函数一个。
//输入输出函数各一个。
//复数求和函数一个。
//在主函数中，任意输入两个复数，求两个复数的和并输出到屏幕上。
#include <iostream>
#include<istream>
#include<ostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;
public:
    //构造函数
    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }
    //析构函数
    ~Complex() {}
    //拷贝构造函数
    Complex(const Complex& c) {
        real = c.real;
        imag = c.imag;
    }
    //输入输出函数
    friend istream& operator >> (istream& is, Complex& c) {
        is >> c.real >> c.imag;
        return is;
    }
    friend ostream& operator << (ostream& os, const Complex& c) {
        os << c.real << "+" << c.imag << "i";
        return os;
    }
    //复数求和函数
    Complex operator + (const Complex& c) const {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, c3;
    cout << "实部和虚部请输入: ";
    cin >> c1;
    cout << "实部和虚部请输入: ";
    cin >> c2;
    c3 = c1 + c2;
    cout << "求和后的复数为: " << c3 << endl;
    return 0;
}