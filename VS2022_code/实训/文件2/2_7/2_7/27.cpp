//7.���������࣬�����г�Ա����ʵ�����鲿����������͵ĺ��������������У�������Ķ��������������������ú�����������������ĺ͡�

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
        cout << "������������ʵ�����鲿��" << endl;
        cin >> real >> imag;
    }
    void output() const {
        cout << "������ʵ��Ϊ��" << real << endl;
        cout << "�������鲿Ϊ��" << imag << endl;
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