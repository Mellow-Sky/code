//6.����ͼ����
//��Ա���������ͼ�ε����֣���ͼ�ε��������ͼ�ε��ܳ���
//����ͼ��������࣬�����࣬�̳з�ʽ�ǹ��м̳С�
//��Ա���������εĳ��Ϳ�
//������������ε����֣�����ε����������ε��ܳ���
//����ͼ��������࣬Բ�࣬�̳з�ʽ�ǹ��м̳С�
//��Ա������Բ�İ뾶��
//���������Բ�����֣���Բ���������Բ���ܳ���
//���������У��ֱ𴴽��������Բ��Ķ��󣬷ֱ������������ֺ��ܳ���
#include<iostream>
using namespace std;

class Shape{
public:
    virtual void outputName() = 0;
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
};

class Rectangle:public Shape{
private:
    double length;
    double width;
public:
    Rectangle(double l,double w):length(l),width(w){};
    void outputName(){
        cout<<"����"<<endl;
    }
    double getArea(){
        return length*width;
    }
    double getPerimeter(){
        return 2*(length+width);
    }

};

class Circle:public Shape{
private:
    double radius;
public:
    Circle(double r):radius(r){};
    void outputName(){
        cout<<"Բ"<<endl;
    }
    double getArea(){
        return 3.1415926*radius*radius;
    }
    double getPerimeter(){
        return 2*3.1415926*radius;
    }

};

int main(){
    Rectangle rect(5,3);
    Circle circle(4);
    rect.outputName();
    cout<<"���: "<<rect.getArea()<<endl;
    cout<<"�ܳ�: "<<rect.getPerimeter()<<endl;
    circle.outputName();
    cout<<"���: "<<circle.getArea()<<endl;
    cout<<"�ܳ�: "<<circle.getPerimeter()<<endl;
    return 0;
}