//5.��������࣬�����г�Ա�������Ϳ�������������ܳ��ĺ��������������У�������Ķ���������εĳ��Ϳ�����þ��ε��ܳ��������

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;
public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }
    int getArea() {
        return length * width;
    }
    int getPerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    int length, width;
    cout << "��������εĳ��Ϳ�" << endl;
    cin >> length >> width;
    Rectangle rect(length, width);
    cout << "���ε��ܳ�Ϊ��" << rect.getPerimeter() << endl;
    cout << "���ε����Ϊ��" << rect.getArea() << endl;
    return 0;
}