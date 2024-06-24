//5������һ������Point�������й��е����ݳ�Ա��x��y������㣩��
//�й��еĳ�Ա�������вεĹ��캯�����޲εĹ��캯����������Ϣ��������ʾ��Ϣ����
//����һ��Բ��Circle�����๫�м̳�Point�࣬�����������е��������ݳ�Աr���뾶��, �������еļ���Բ����ĺ�����
//����Cylinder�࣬���๫�м̳�Circle�ࡣCylinder�����������е����ݳ�Աh(��)�������������еļ���Բ������ĺ�����
//Բ��������㹫ʽ��Բ����� = 2 * PI * r * h.
//��main�����д���Բ��Ķ�����Բ�������
//����Բ����Ķ�����Բ����������
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
        cout << "�����Ϊ(" << x << "," << y << ")" << endl;
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
    cout << "Բ�����Ϊ��" << c.getArea() << endl;

    Cylinder cy(1, 2, 3, 4);
    cy.showInfo();
    cout << "Բ��������Ϊ��" << cy.getVolume() << endl;

    return 0;
}