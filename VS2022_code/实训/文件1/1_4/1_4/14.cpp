//4、定义浮点型数组元素排序函数，定义浮点型数组元素求和函数，定义浮点型数组元素求平均数函数，定义浮点型数组求最大值函数。
//定义主函数，函数中声明一个有n个学生的成绩的数组(n的值由用户从键盘输入)，
// 然后从键盘输入每一个学生的成绩，调用函数对学生的成绩从小到大进行排序，并输出到屏幕上。然后求所有学生的总成绩和平均成绩显示到屏幕上。
#include<iostream>
#include<vector>
using namespace std;

//排序函数
void mysort(vector<double>&arr, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				double temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

//求和函数
double mysum(vector<double>& arr, int n) {
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}

//求平均数函数
double myavg(vector<double>& arr, int n) {
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	double avg = sum / n;
	return avg;
}

//求最大值函数
double mymax(vector<double>& arr, int n) {
	double max = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int main() {
	int n;
	cout << "请输入学生人数：" << endl;
	cin >> n;
	vector<double> arr(n);
	for (int i = 0; i < n; i++) {
		cout << "请输入第" << i + 1 << "个学生成绩：" << endl;
		cin >> arr[i];
	}
	//排序函数
	mysort(arr, n);
	cout << "排序后的学生成绩：" << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	//求和函数
	double sum = mysum(arr, n);
	cout << "学生成绩的和为：" << sum << endl;
	//求平均数函数
	double avg = myavg(arr, n);
	cout << "学生成绩的平均数为：" << avg << endl;
	//求最大值函数
	double max = mymax(arr, n);
	cout << "学生成绩的最大值为：" << max << endl;

	return 0;
}