//6.主函数中要求输入一个一元二次方程的三个系数，调用函数判断该方程是否有实数解，如果有实数根，将实数解求出来。
//要求：书写两个用户自定义函数，
//判断方程式是否有解函数。
//求方程的解函数。
//说明：
//方程有实数解的条件：b* b - 4 * a * c >= 0
//方程的解： (-b + sqrt(b * b - 4 * a * c)) / (a * 2)
//			(-b - sqrt(b * b - 4 * a * c)) / (a * 2)
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double a, b, c;
	cout << "请输入一元二次方程的三个系数：" << endl;
	cin >> a >> b >> c;
	if (b * b - 4 * a * c >= 0) {
		double x1 = (-b + sqrt(b * b - 4 * a * c)) / (a * 2);
		double x2 = (-b - sqrt(b * b - 4 * a * c)) / (a * 2);
		cout << "方程有实数解，其解为：" << x1 << "和" << x2 << endl;
	}
	else {
		cout << "方程无实数解" << endl;
	}
	return 0;
}