// 1�����һ������������ж�һ�������Ƿ�Ϊ�����Ĺ��ܣ���ͨ������¼�������ķ�ʽʵ�ֶԸú����ĵ�������ԡ�
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
        cout << "������һ������(0�˳�):";
        cin >> n;
        if (n == 0) {
            break;
        }
        if (prime(n)) {
            cout << "������\n";
        }
        else {
            cout << "��������\n";
        }
    }
    return 0;
}
