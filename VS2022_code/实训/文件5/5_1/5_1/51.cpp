//1�����һ������Person
//1)���ݳ�Ա������
//�˵����������䣬�Ա�ȡ�
//2)��Ա����������
//���������ݳ�Աһ������ĳ�Ա����(�������get()��set()������
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Person {
public:
	string name;
	int age;
	string gender;
	void setName(string name) {
		this->name = name;
	}
	void setAge(int age) {
		this->age = age;
	}
	void setGender(string gender) {
		this->gender = gender;
	}
	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
	string getGender() {
		return gender;
	}
};

int main() {
	int n;
	cout << "������������";
	cin >> n;
	vector<Person> people;
	for (int i = 0; i < n; i++) {
		Person p;
		cout << "�������" << i + 1 << "���˵�������";
		cin >> p.name;
		cout << "�������" << i + 1 << "���˵����䣺";
		cin >> p.age;
		cout << "�������" << i + 1 << "���˵��Ա�";
		cin >> p.gender;
		people.push_back(p);
	}
	cout << "�����˵���Ϣ���£�\n";
	for (int i = 0; i < n; i++) {
		cout << "��" << i + 1 << "���˵�������" << people[i].getName() << endl;
		cout << "��" << i + 1 << "���˵����䣺" << people[i].getAge() << endl;
		cout << "��" << i + 1 << "���˵��Ա�" << people[i].getGender() << endl;
	}
	return 0;
}