//test.cpp���ڲ���B.cpp�ж���ĺ���
#include"B.h"

void test() {
	int choise = 0;
	while (choise != 5) {
		system("cls");
		menu();
		cin >> choise;
		switch (choise) {
		case 1:
			add();
			break;
		case 2:
			update();
			break;
		case 3:
			showAll();
			break;
		case 4:
			showSimple();
			break;
		case 5:
			cout << "�˳�����!" << endl;
			break;
		default:
			cout << "�������!" << endl;
			break;
		}
	}
}

int main() {
	test();
	return 0;
}