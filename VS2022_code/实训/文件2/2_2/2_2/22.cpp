//2、将上题改用函数模板的方法来解决。
#include<iostream>
using namespace std;

template<typename T>
T min(T a, T b, T c) {
	T min_num = a;
	if (b < min_num) {
		min_num = b;
	}
	if (c < min_num) {
		min_num = c;
	}
	return min_num;
}

int main() {
	int a, b, c;
	cout << "请输入三个整数: ";
	cin >> a >> b >> c;
	double x, y, z;
	cout << "请输入三个浮点数: ";
	cin >> x >> y >> z;
	char ch1, ch2, ch3;
	cout << "请输入三个字符: ";
	cin >> ch1 >> ch2 >> ch3;
	cout << "整数最小值: " << min(a, b, c) << endl;
	cout << "浮点数最小值: " << min(x, y, z) << endl;
	cout << "字符最小值: " << min(ch1, ch2, ch3) << endl;
	return 0;
}