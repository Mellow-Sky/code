#include <iostream>
using namespace std;

// 车辆类
class Car {
protected:
    int power; // 动力
    int seat;  // 座位数

public:
    // 构造函数
    Car(int s, int p = 10) : seat(s), power(p) {}
    // 打印信息
    void print();
};

// 小货车类
class Van {
protected:
    int power;   // 动力
    double load; // 载客量

public:
    // 构造函数
    Van(double l, int p = 10) : load(l), power(p) {}
    // 打印信息
    void print();
};

// 客货两用车类
class Wagon : public Car, public Van {
public:
    // 构造函数
    Wagon(int p, int s, double l) : Car(s, p), Van(l, p) {}
    // 打印信息
    void print();
};

// 打印小客车信息
void Car::print() {
    cout << "小客车:" << endl;
    cout << "动力:" << power << endl;
    cout << "座位数:" << seat << endl;
}

// 打印小货车信息
void Van::print() {
    cout << "小货车:" << endl;
    cout << "动力:" << power << endl;
    cout << "载客量:" << load << endl;
}

// 打印客货两用车信息
void Wagon::print() {
    cout << "客货两用车:" << endl;
    cout << "动力:" << Car::power << endl;
    cout << "座位数:" << seat << endl;
    cout << "载客量:" << load << endl;
}

int main() {
    // 创建一个客货两用车对象并打印信息
    Wagon w(500, 4, 800);
    w.print();

    return 0;
}