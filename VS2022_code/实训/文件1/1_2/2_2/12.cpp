//2�����һ����������ɰٷ��Ʒ���������Ʒ���ת���Ĺ��ܣ���ͨ������¼��ٷ��Ʒ����ķ�ʽʵ�ֶԸú����ĵ�������ԡ�
#include<iostream>
using namespace std;
int main() {
    double n;
    cin >> n;
    if (n >= 90) {
        cout << "A\n";
    }
    else if (n >= 80 && n < 90) {
        cout << "B\n";
    }
    else if (n >= 70 && n < 80) {
        cout << "C\n";
    }
    else if (n >= 60 && n < 70) {
        cout << "D\n";
    }
    else if (n >= 0 && n < 60) {
        cout << "E\n";
    }

    return 0;
}