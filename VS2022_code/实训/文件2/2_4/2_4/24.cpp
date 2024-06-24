//4、定义一个函数指针数组，用该数组完成对于两个实数(加、减、乘、除)四个功能函数的管理。
#include<iostream>
using namespace std;

double add(double a, double b) {
	return a + b;
}
double sub(double a, double b) {
	return a - b;
}
double mul(double a, double b) {
	return a * b;
}
double div(double a, double b) {
	if (b == 0) {
		cout << "除数不能为0！" << endl;
		return 0;
	}
	return a / b;
}

int main() {
	double (*arr[4])(double, double) = { add, sub, mul, div };
	double a, b;
	cout << "请输入两个整数：" << endl;
	cin >> a >> b;
	cout << "选择运算功能：" << endl;
	cout << "1、加法" << endl;
	cout << "2、减法" << endl;
	cout << "3、乘法" << endl;
	cout << "4、除法" << endl;
	int choice;
	cin >> choice;
	if (choice < 1 || choice > 4) {
		cout << "输入错误！" << endl;
		return 0;
	}
	cout << arr[choice - 1](a, b) << endl;

	return 0;
}