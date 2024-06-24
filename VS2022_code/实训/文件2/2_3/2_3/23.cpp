//3、编写程序，从键盘分别输入十个int型数据、十个double型数据和十个char型数据，
// 对其分别进行冒泡方法排序，并输出排序后的结果。（要求用函数模板来实现）

#include <iostream>
#include <algorithm>
using namespace std;

template<typename T>
void bubbleSort(T &arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr1[10];
    double arr2[10];
    char arr3[10];

    cout << "请输入十个int型数据：" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr1[i];
    }

    cout << "请输入十个double型数据：" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr2[i];
    }

    cout << "请输入十个char型数据：" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr3[i];
    }

    cout << "排序前：" << endl;
    cout << "int型数据：" << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "double型数据：" << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    cout << "char型数据：" << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    bubbleSort(arr1, 10);
    bubbleSort(arr2, 10);
    bubbleSort(arr3, 10);

    cout << "排序后：" << endl;
    cout << "int型数据：" << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "double型数据：" << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    cout << "char型数据：" << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}