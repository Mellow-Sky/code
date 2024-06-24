//1)在头文件中，完成如下类的定义：
//描述人类，包含私有的属性：姓名，性别，年龄。
//包含两个构造函数，一个析构函数，一个拷贝构造函数。
//对私有变量访问的函数。
//数据成员的输入输出函数。
//根据人的年龄从小到大进行冒泡法排序的函数。
//在某一个位置插入人员信息的函数。
//在某一个位置删除人员信息的函数。
//返回年龄最大的人的信息的函数。
//返回所有人员平均年龄的函数。
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
		cout << "请输入姓名：";
		cin >> name;
		cout << "请输入性别：";
		cin >> sex;
		cout << "请输入年龄：";
		cin >> age;
	}
	void output() {
		cout << "姓名：" << name << endl;
		cout << "性别：" << sex << endl;
		cout << "年龄：" << age << endl;
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
		cout << "插入成功！" << endl;
	}
	void remove(vector<person>& person, int index) {
		person.erase(person.begin() + index);
		cout << "删除成功！" << endl;
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