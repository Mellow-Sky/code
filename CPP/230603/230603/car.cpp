#include <iostream>
using namespace std;

// ������
class Car {
protected:
    int power; // ����
    int seat;  // ��λ��

public:
    // ���캯��
    Car(int s, int p = 10) : seat(s), power(p) {}
    // ��ӡ��Ϣ
    void print();
};

// С������
class Van {
protected:
    int power;   // ����
    double load; // �ؿ���

public:
    // ���캯��
    Van(double l, int p = 10) : load(l), power(p) {}
    // ��ӡ��Ϣ
    void print();
};

// �ͻ����ó���
class Wagon : public Car, public Van {
public:
    // ���캯��
    Wagon(int p, int s, double l) : Car(s, p), Van(l, p) {}
    // ��ӡ��Ϣ
    void print();
};

// ��ӡС�ͳ���Ϣ
void Car::print() {
    cout << "С�ͳ�:" << endl;
    cout << "����:" << power << endl;
    cout << "��λ��:" << seat << endl;
}

// ��ӡС������Ϣ
void Van::print() {
    cout << "С����:" << endl;
    cout << "����:" << power << endl;
    cout << "�ؿ���:" << load << endl;
}

// ��ӡ�ͻ����ó���Ϣ
void Wagon::print() {
    cout << "�ͻ����ó�:" << endl;
    cout << "����:" << Car::power << endl;
    cout << "��λ��:" << seat << endl;
    cout << "�ؿ���:" << load << endl;
}

int main() {
    // ����һ���ͻ����ó����󲢴�ӡ��Ϣ
    Wagon w(500, 4, 800);
    w.print();

    return 0;
}