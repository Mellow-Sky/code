//B.cpp����ʵ��Bģ��Ĺ���
#include"B.h"
vector<workers> myworkers;
vector<worker> myworker;
void menu() {
	cout << "1.����ְ����¼\n2.������Ϣ���\n3.��ʾԭʼ��¼\n4.��ʾ����¼\n5.������������\nѡ��1 - 5\n";
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
	cout << "��ţ�";
	cin >> num;
	cout << "������";
	cin >> n;
	cout << "�Ա�";
	cin >> s;
	cout << "���䣺";
	cin >> a;
	myworkers.push_back(workers(num, n, s, a));
}

void update() {
	system("cls");
	if (myworkers.size() == 0) {
		cout << "����ʧ��!\n";
		system("pause");
		return;
	}
	myworker.push_back(worker(myworkers[myworkers.size() - 1].number, myworkers[myworkers.size() - 1].name));
	cout << "���ɲ����³ɹ�!\n";
	system("pause");
}

void showAll() {
	system("cls");
	if (myworkers.size() == 0) {
		cout << "û�м�¼!\n";
		system("pause");
		return;
	}
	cout << "���\t����\t�Ա�\t����\n";
	for (auto& i : myworkers) {
		i.display();
	}
	system("pause");
}

void showSimple() {
	system("cls");
	if (myworker.size() == 0) {
		cout << "û�м�¼��\n";
		system("pause");
		return;
	}
	cout << "���\t����\n";
	for (auto& i : myworker) {
		i.display();
	}
	system("pause");
}