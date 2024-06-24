//8.�����������࣬�����г�Ա�������߳����г�Ա�����ж��ܷ���������Σ��������ε��ܳ��������ε������
// �������У�������Ķ������������ε����߳����������������Σ�����������ε��ܳ�����������������
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
            //���׹�ʽ
            double s = (a + b + c) / 2;//���ܳ�
            return sqrt(s * (s - a) * (s - b) * (s - c));
        }
        else {
            return 0;
        }
    }
};

int main() {
    cout << "�����������ε����߳���" << endl;
    double x, y, z;
    cin >> x >> y >> z;
    Triangle t(x, y, z);
    if (t.isTriangle()) {
        cout << "�ܳ���" << t.perimeter() << endl;
        cout << "�����" << t.area() << endl;
    }
    return 0;
}