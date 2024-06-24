//4������һ��������Vehicle�����й��������ݳ�Ա�����ָ���wheels�ͳ���weight��
//���еĳ�Ա�������вεĹ��캯�����޲εĹ��캯����������Ϣ����ʾ��Ϣ�ĺ�����
//����һ��С������Car�����๫�м̳�Vehicle, ���������������ݳ�Աmax_passenger(���������)��
//��һ��������Truck, ���๫�м̳�Vehicle, ���������������ݳ�Աmax_passenger(���������)��max_load(���������)��
//�����������еĳ�Ա����efficiency(), �ú����Ĺ����Ǽ��㿨����Ч�ʣ����㹫ʽΪ Ч�� = ��������� / (��������� + ����)��
//��main�����У�����Car��Ķ��󣬲���ӡ�����
//����Truck��Ķ��󣬼��㿨����Ч�ʡ�

#include <iostream>
using namespace std;

class Vehicle {
public:
    int wheels;
    double weight;
    Vehicle(int w, double m) {
        wheels = w;
        weight = m;
    }
    Vehicle() {
        wheels = 0;
        weight = 0.0;
    }
    void setInfo(int w, double m) {
        wheels = w;
        weight = m;
    }
    void showInfo() {
        cout << "���ָ�����" << wheels << endl;
        cout << "���أ�" << weight << endl;
    }
};

class Car : public Vehicle {
public:
    int max_passenger;
    Car(int w, double m, int p) : Vehicle(w, m) {
        max_passenger = p;
    }
    Car() : Vehicle() {
        max_passenger = 0;
    }
};

class Truck : public Vehicle {
public:
    int max_passenger;
    double max_load;
    Truck(int w, double m, int p, double l) : Vehicle(w, m) {
        max_passenger = p;
        max_load = l;
    }
    Truck() : Vehicle() {
        max_passenger = 0;
        max_load = 0.0;
    }
    double efficiency() {
        return max_load / (max_load + weight);
    }
};

int main() {
    Car myCar(4, 2000.0, 5);
    myCar.showInfo();

    Truck myTruck(8, 5000.0, 10, 3000.0);
    cout << "������Ч�ʣ�" << myTruck.efficiency() << endl;

    return 0;
}