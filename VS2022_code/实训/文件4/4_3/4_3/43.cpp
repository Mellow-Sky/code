//3.��Ʋ�ʹ���ࣺ
//2)��Դ�ļ��У���д��������
//���������У�������Ա��������Ȼ������ÿһ����Ա����Ϣ����������˵���Ϣ���������С�������ð�ݷ����򣬲��������Ļ�ϡ�
//Ȼ���û����Ը�������Ĳ�����ţ������������²�����
//1.����������У����������˵���Ϣ��
//2.���û����������λ�ã�������Ա��Ϣ����ӡ�
//3.���û����������λ�ã�ɾ����Ӧ��Ա����Ϣ��
//4.���������Ա��ƽ�����䡣
//5.�˳����������
#include"43.h"

int main() {
	int n;
	cout << "��������Ա����:";
	cin >> n;
	vector<person>p(n);
	for (int i = 0; i < n; i++) {
		p[i].input();
	}
	bubble_sort(p);
	cout << "���������С���������Ľ��:" << endl;
	for (int i = 0; i < n; i++) {
		p[i].output();
	}
	system("pause");
	int choice = 0;
	while (choice != 5) {
		system("cls");
		cout << "������������:" << endl;
		cout << "1.����������У����������˵���Ϣ��" << endl;
		cout << "2.���û����������λ�ã�������Ա��Ϣ����ӡ�" << endl;
		cout << "3.���û����������λ�ã�ɾ����Ӧ��Ա����Ϣ��" << endl;
		cout << "4.���������Ա��ƽ�����䡣" << endl;
		cout << "5.�˳����������" << endl;
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
			cout << "�����������Ա��λ��:" << endl;
			cin >> pos;
			if (pos<1 || pos>n + 1) {
				cout << "�����λ�ò��Ϸ���" << endl;
				system("pause");
				break;
			}
			p.insert(p.begin() + pos - 1, person());
			p[pos - 1].input();
			system("pause");
			break;
		case 3:
			int pos2;
			cout << "������ɾ����Ա��λ��:" << endl;
			cin >> pos2;
			if (pos2<1 || pos2>n) {
				cout << "�����λ�ò��Ϸ���" << endl;
				system("pause");
				break;
			}
			p.erase(p.begin() + pos2 - 1);
			system("pause");
			break;
		case 4:
			cout << "������Ա��ƽ������Ϊ��" << get_average_age(p);
			system("pause");
			break;
		case 5:
			break;
		default:
			cout << "����Ĳ�����Ų��Ϸ���" << endl;
			system("pause");
			break;
		}
	}
	return 0;
}