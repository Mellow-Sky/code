//1)��ͷ�ļ��У����������Ķ��壺
//�������࣬����˽�е����ԣ��������Ա����䡣
//�����������캯����һ������������һ���������캯����
//��˽�б������ʵĺ�����
//���ݳ�Ա���������������
//�����˵������С�������ð�ݷ�����ĺ�����
//��ĳһ��λ�ò�����Ա��Ϣ�ĺ�����
//��ĳһ��λ��ɾ����Ա��Ϣ�ĺ�����
//�������������˵���Ϣ�ĺ�����
//����������Աƽ������ĺ�����
#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class person {
private:
	string name, sex;
	int age;
public:
	person() {}
	person(string n, string s, int a) {
		name = n;
		sex = s;
		age = a;
	}
	~person() {}
	person(const person& p) {
		name = p.name;
		sex = p.sex;
		age = p.age;
	}
	void input() {
		cout << "������������";
		cin >> name;
		cout << "�������Ա�";
		cin >> sex;
		cout << "���������䣺";
		cin >> age;
	}
	void output() {
		cout << "������" << name << endl;
		cout << "�Ա�" << sex << endl;
		cout << "���䣺" << age << endl;
	}
	friend void bubble_sort(vector<person>& person) {
		for (int i = 0; i < person.size() - 1; i++) {
			for (int j = 0; j < person.size() - i - 1; j++) {
				if (person[j].age > person[j + 1].age) {
					swap(person[j], person[j + 1]);
				}
			}
		}
	}
	void insert(vector<person>& person, int index) {
		person.insert(person.begin() + index, person[0]);
		cout << "����ɹ���" << endl;
	}
	void remove(vector<person>& person, int index) {
		person.erase(person.begin() + index);
		cout << "ɾ���ɹ���" << endl;
	}
	person get_max_age(vector<person>& person) {
		bubble_sort(person);
		return person[person.size() - 1];
	}
	friend double get_average_age(vector<person>& person) {
		double sum = 0;
		for (int i = 0; i < person.size(); i++) {
			sum += person[i].age;
		}
		return sum / person.size();
	}
};