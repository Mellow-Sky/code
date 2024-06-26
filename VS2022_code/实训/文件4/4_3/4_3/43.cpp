//3.设计并使用类：
//2)在源文件中，书写主函数。
//在主函数中，输入人员的数量，然后输入每一个人员的信息，完成所有人的信息按照年龄从小到大进行冒泡法排序，并输出到屏幕上。
//然后用户可以根据输入的操作序号，反复进行如下操作：
//1.输出所有人中，年龄最大的人的信息。
//2.在用户输入的任意位置，进行人员信息的添加。
//3.在用户输入的任意位置，删除对应人员的信息。
//4.输出所有人员的平均年龄。
//5.退出程序操作。
#include"43.h"

int main() {
	int n;
	cout << "请输入人员数量:";
	cin >> n;
	vector<person>p(n);
	for (int i = 0; i < n; i++) {
		p[i].input();
	}
	bubble_sort(p);
	cout << "按照年龄从小到大排序后的结果:" << endl;
	for (int i = 0; i < n; i++) {
		p[i].output();
	}
	system("pause");
	int choice = 0;
	while (choice != 5) {
		system("cls");
		cout << "请输入操作序号:" << endl;
		cout << "1.输出所有人中，年龄最大的人的信息。" << endl;
		cout << "2.在用户输入的任意位置，进行人员信息的添加。" << endl;
		cout << "3.在用户输入的任意位置，删除对应人员的信息。" << endl;
		cout << "4.输出所有人员的平均年龄。" << endl;
		cout << "5.退出程序操作。" << endl;
		cin >> choice;
		system("cls");
		switch (choice) {
		case 1:
			bubble_sort(p);
			p[n - 1].output();
			system("pause");
			break;
		case 2:
			int pos;
			cout << "请输入添加人员的位置:" << endl;
			cin >> pos;
			if (pos<1 || pos>n + 1) {
				cout << "输入的位置不合法！" << endl;
				system("pause");
				break;
			}
			p.insert(p.begin() + pos - 1, person());
			p[pos - 1].input();
			system("pause");
			break;
		case 3:
			int pos2;
			cout << "请输入删除人员的位置:" << endl;
			cin >> pos2;
			if (pos2<1 || pos2>n) {
				cout << "输入的位置不合法！" << endl;
				system("pause");
				break;
			}
			p.erase(p.begin() + pos2 - 1);
			system("pause");
			break;
		case 4:
			cout << "所有人员的平均年龄为：" << get_average_age(p);
			system("pause");
			break;
		case 5:
			break;
		default:
			cout << "输入的操作序号不合法！" << endl;
			system("pause");
			break;
		}
	}
	return 0;
}