//B.cpp用于实现B模块的功能
#include"B.h"
vector<workers> myworkers;
vector<worker> myworker;
void menu() {
	cout << "1.增加职工记录\n2.生成信息简表\n3.显示原始记录\n4.显示简表记录\n5.结束程序运行\n选择1 - 5\n";
}

worker::worker() {
	number = "";
	name = "";
}
worker::worker(string num, string n) {
	number = num;
	name = n;
}
void worker::display() {
	cout << number << "\t" << name << endl;
}

workers::workers() {
	number = "";
	name = "";
	sex = "";
	age = 0;
}
workers::workers(string num, string n, string s, int a) {
	number = num;
	name = n;
	sex = s;
	age = a;
}
void workers::display() {
	cout << number << "\t" << name << "\t" << sex << "\t" << age << endl;
}
void workers::printer() {
	cout << number << "\t" << name << "\t" << sex << "\t" << age << endl;
}

void add() {
	system("cls");
	string num, n, s;
	int a;
	cout << "编号：";
	cin >> num;
	cout << "姓名：";
	cin >> n;
	cout << "性别：";
	cin >> s;
	cout << "年龄：";
	cin >> a;
	myworkers.push_back(workers(num, n, s, a));
}

void update() {
	system("cls");
	if (myworkers.size() == 0) {
		cout << "生成失败!\n";
		system("pause");
		return;
	}
	myworker.push_back(worker(myworkers[myworkers.size() - 1].number, myworkers[myworkers.size() - 1].name));
	cout << "生成并更新成功!\n";
	system("pause");
}

void showAll() {
	system("cls");
	if (myworkers.size() == 0) {
		cout << "没有记录!\n";
		system("pause");
		return;
	}
	cout << "编号\t姓名\t性别\t年龄\n";
	for (auto& i : myworkers) {
		i.display();
	}
	system("pause");
}

void showSimple() {
	system("cls");
	if (myworker.size() == 0) {
		cout << "没有记录！\n";
		system("pause");
		return;
	}
	cout << "编号\t姓名\n";
	for (auto& i : myworker) {
		i.display();
	}
	system("pause");
}