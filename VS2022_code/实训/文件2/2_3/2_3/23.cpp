//3����д���򣬴Ӽ��̷ֱ�����ʮ��int�����ݡ�ʮ��double�����ݺ�ʮ��char�����ݣ�
// ����ֱ����ð�ݷ������򣬲���������Ľ������Ҫ���ú���ģ����ʵ�֣�

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

    cout << "������ʮ��int�����ݣ�" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr1[i];
    }

    cout << "������ʮ��double�����ݣ�" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr2[i];
    }

    cout << "������ʮ��char�����ݣ�" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr3[i];
    }

    cout << "����ǰ��" << endl;
    cout << "int�����ݣ�" << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "double�����ݣ�" << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    cout << "char�����ݣ�" << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    bubbleSort(arr1, 10);
    bubbleSort(arr2, 10);
    bubbleSort(arr3, 10);

    cout << "�����" << endl;
    cout << "int�����ݣ�" << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "double�����ݣ�" << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    cout << "char�����ݣ�" << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}