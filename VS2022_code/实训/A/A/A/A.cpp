//ʹ�ü̳еķ�������д���������10��ְ������Ϣ���ٸ�����������һ��ְ����Ϣ��������ö�̬��ʵ����Ϣ�������
//�������Ҫ�����£�
//1.����ְ����Ϣ���ݣ�����ְ����š��������Ա�����䡣
//2������ְ����Ϣ������ֻ���������������ְ����Ϣ���
//3.ʹ�ü̳еķ�������2���࣬ʹ����Ӧ�Ķ����������10��ְ����Ϣ��
//4.��дͬ��display()��Ա���������������������ݡ�
//5.�������һ������printer()����������ʵ�ʶ���������ǵ����ݡ�
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class worker {
private:
	string number;
	string name;
	string sex;
	int age;
public:
	worker() {
		number = "NONE";
		name = "NONE";
		sex = "NONE";
		age = 0;
	}
	worker(string num, string n, string s, int a) {
		number = num;
		name = n;
		sex = s;
		age = a;
	}
	string getNumber() {
		return number;
	}
	string getName() {
		return name;
	}
	string getSex() {
		return sex;
	}
	int getAge() {
		return age;
	}
	void setworker(string num, string n, string s, int a){
		number = num;
		name = n;
		sex = s;
		age = a;
	}
	virtual void display() {}
};

class workers:public worker {
public:
	void display(workers workers) {
			cout << workers.getNumber() << "\t" << workers.getName();
	}
	void printer(workers workers) {

		cout << workers.getNumber() << "\t" << workers.getName()
			<< "\t" << workers.getSex() << "\t" << workers.getAge();
	}
};

int main() {
	int n;
	cout << "������ְ������(���Ϊ10��)��" << endl;
	cin >> n;
	if (n > 10) {
		cout << "��������\n";
		return 0;
	}
	vector<workers> workers(n);
	for (int i = 0; i < n; i++) {
		string num;
		string name;
		string sex;
		int age;
		cout << "���:";
		cin >> num;
		cout << "����:";
		cin >> name;
		cout << "�Ա�:";
		cin >> sex;
		cout << "����:";
		cin >> age;
		workers[i].setworker(num, name, sex, age);
	}
	cout << "���\t����\n";
	for (int i = 0; i < n; i++) {
		workers[i].display(workers[i]);
		cout << endl;
	}

	cout << "���\t����\t�Ա�\t����\n";
	for (int i = 0; i < n; i++) {
		workers[i].printer(workers[i]);
		cout << endl;
	}
	return 0;
}