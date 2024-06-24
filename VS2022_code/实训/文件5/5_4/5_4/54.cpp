//4、定义一个汽车类Vehicle，其中公有有数据成员：车轮个数wheels和车重weight，
//公有的成员函数：有参的构造函数，无参的构造函数，设置信息和显示信息的函数。
//定义一个小汽车类Car，该类公有继承Vehicle, 类中新增公有数据成员max_passenger(最多载人数)。
//义一个卡车类Truck, 该类公有继承Vehicle, 类中新增公有数据成员max_passenger(最多载人数)，max_load(最大载重量)，
//类中新增公有的成员函数efficiency(), 该函数的功能是计算卡车的效率，计算公式为 效率 = 最大载重量 / (最大载重量 + 车重)。
//在main函数中，创建Car类的对象，并打印输出。
//创建Truck类的对象，计算卡车的效率。

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
        cout << "车轮个数：" << wheels << endl;
        cout << "车重：" << weight << endl;
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
    cout << "卡车的效率：" << myTruck.efficiency() << endl;

    return 0;
}