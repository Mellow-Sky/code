//1、编写程序，其中包含三个重载的min（）函数：min函数带有三个参数。
// 第一个min函数输出它的三个double型参数中的最小值
// 第二个min函数输出它的三个char型参数中的最小值
// 第三个min函数输出它的三个int型参数中的最小值；
// 在主函数中，分别通过键盘输入三个int型数、三个double型数和三个char型数，并通过min函数求出其中的最小值。
#include<iostream>
using namespace std;
// 第一个min函数输出它的三个double型参数中的最小值
double min(double a, double b, double c) {
	double min_num = a;
	if (b < min_num) {
		min_num = b;
	}
	if (c < min_num) {
		min_num = c;
	}
	return min_num;
}

// 第二个min函数输出它的三个char型参数中的最小值
char min(char a, char b, char c) {
	char min_num = a;
	if (b < min_num) {
		min_num = b;
	}
	if (c < min_num) {
		min_num = c;
	}
	return min_num;
}

// 第三个min函数输出它的三个int型参数中的最小值
int min(int a, int b, int c) {
	int min_num = a;
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
	double x, y, z;
	char m, n, o;
	cout << "请输入三个int型数：" << endl;
	cin >> a >> b >> c;
	cout << "请输入三个double型数：" << endl;
	cin >> x >> y >> z;
	cout << "请输入三个char型数：" << endl;
	cin >> m >> n >> o;
	cout << "int型数的最小值为：" << min(a, b, c) << endl;
	cout << "double型数的最小值为：" << min(x, y, z) << endl;
	cout << "char型数的最小值为：" << min(m, n, o) << endl;

	return 0;
}