// 1、设计一个函数，完成判断一个整数是否为素数的功能，并通过键盘录入整数的方式实现对该函数的调用与测试。
#include<iostream>
using namespace std;

bool prime(int n) {
    if (n <= 1) {
        return false;
    }
    bool b = true;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            b = false;
            break;
        }
    }
    if (b) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int n = 1;
    while (n) {
        cout << "请输入一个整数(0退出):";
        cin >> n;
        if (n == 0) {
            break;
        }
        if (prime(n)) {
            cout << "是素数\n";
        }
        else {
            cout << "不是素数\n";
        }
    }
    return 0;
}
