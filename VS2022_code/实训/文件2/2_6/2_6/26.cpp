//6.����Բ�࣬�г�Ա�����뾶��������Ա����PI��������������ܳ��ĺ��������������У�������Ķ�������Բ�뾶�������Բ���ܳ��������
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
    cout << "������Բ�İ뾶: ";
    double r;
    cin >> r;
    Circle c(r);
    cout << "Բ���ܳ�Ϊ: " << c.getCircumference() << endl;
    cout << "Բ�����Ϊ: " << c.getArea() << endl;
    return 0;
}