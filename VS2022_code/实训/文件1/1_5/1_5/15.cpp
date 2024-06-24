//5.主函数中要求输入三个数字作为三角形的三边长，分别调用函数实现判断能否组成三角形；三角形的形状以及求三角形的面积。
//要求：编写三个用户自定义的函数:用来判断能否组成三角形的函数，判断三角形的形状的函数，求三角形的面积的函数。
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

//判断能否组成三角形的函数
bool isTriangle(int a, int b, int c) {
	if (a + b > c && a + c > b && b + c > a) {
		return true;
	}
	else {
		return false;
	}
}

//判断三角形的形状的函数
string getShape(int a, int b, int c) {
	if (a == b && b == c) {
		return "等腰直角三角形";
	}
	else if (a == b || b == c || a == c) {
		return "等边三角形";
	}
	else {
		return "普通三角形";
	}
}

//求三角形的面积的函数
double getArea(int a, int b, int c) {
	//海伦公式
	double p = (a + b + c) / 2.0;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
	int a, b, c;
	cout << "请输入三角形的三边长a,b,c:" << endl;
	cin >> a >> b >> c;
	if (isTriangle(a, b, c)) {
		cout << "三角形的形状为：" << getShape(a, b, c) << endl;
		cout << "三角形的面积为：" << getArea(a, b, c) << endl;
	}
	else {
		cout << "不能组成三角形" << endl;
	}

	return 0;
}