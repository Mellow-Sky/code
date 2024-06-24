//3.����һ��ͼ���࣬�����й��е����ݳ�Ա���߶ȺͿ�ȡ�
//���еĳ�Ա�������вεĹ��캯�����޲εĹ��캯����������Ϣ��������ʾ��Ϣ������
//�ɸ�ͼ���ཨ�����������ࣺ������͵����������ࡣ
//ÿ���������ж�����һ������area()���ֱ�����������κ͵��������ε������
//��main�����д���������Ķ��󣬴�ӡ������ε������
//����������������Ķ��󣬴�ӡ������������ε������
#include <iostream>
using namespace std;

class Shape {
public:
    int height;
    int width;
    Shape() {
        height = 0;
        width = 0;
    }
    Shape(int h, int w) {
        height = h;
        width = w;
    }
    void setInfo(int h, int w) {
        height = h;
        width = w;
    }
    void displayInfo() {
        cout << "�߶�: " << height << endl;
        cout << "���: " << width << endl;
    }
};

class Rectangle : public Shape {
public:
    int area() {
        return height * width;
    }
};

class EquilateralTriangle : public Shape {
public:
    int area() {
        return (height * width) / 2;
    }
};

int main() {
    Rectangle rect;
    rect.setInfo(5, 10);
    rect.displayInfo();
    cout << "���������: " << rect.area() << endl;

    EquilateralTriangle equi;
    equi.setInfo(5, 10);
    equi.displayInfo();
    cout << "���������������: " << equi.area() << endl;

    return 0;
}