//2.���������࣬�������������ļӷ����㡣
//���еĺ�����
//���캯����������
//��������һ����
//�������캯��һ����
//�������������һ����
//������ͺ���һ����
//���������У������������������������������ĺͲ��������Ļ�ϡ�
#include <iostream>
#include<istream>
#include<ostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;
public:
    //���캯��
    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }
    //��������
    ~Complex() {}
    //�������캯��
    Complex(const Complex& c) {
        real = c.real;
        imag = c.imag;
    }
    //�����������
    friend istream& operator >> (istream& is, Complex& c) {
        is >> c.real >> c.imag;
        return is;
    }
    friend ostream& operator << (ostream& os, const Complex& c) {
        os << c.real << "+" << c.imag << "i";
        return os;
    }
    //������ͺ���
    Complex operator + (const Complex& c) const {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, c3;
    cout << "ʵ�����鲿������: ";
    cin >> c1;
    cout << "ʵ�����鲿������: ";
    cin >> c2;
    c3 = c1 + c2;
    cout << "��ͺ�ĸ���Ϊ: " << c3 << endl;
    return 0;
}