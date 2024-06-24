//1．设计一个人类Person
//1)数据成员包括：
//人的姓名，年龄，性别等。
//2)成员函数包括：
//对于类数据成员一般操作的成员函数(例如各种get()和set()函数）
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
	cout << "请输入人数：";
	cin >> n;
	vector<Person> people;
	for (int i = 0; i < n; i++) {
		Person p;
		cout << "请输入第" << i + 1 << "个人的姓名：";
		cin >> p.name;
		cout << "请输入第" << i + 1 << "个人的年龄：";
		cin >> p.age;
		cout << "请输入第" << i + 1 << "个人的性别：";
		cin >> p.gender;
		people.push_back(p);
	}
	cout << "所有人的信息如下：\n";
	for (int i = 0; i < n; i++) {
		cout << "第" << i + 1 << "个人的姓名：" << people[i].getName() << endl;
		cout << "第" << i + 1 << "个人的年龄：" << people[i].getAge() << endl;
		cout << "第" << i + 1 << "个人的性别：" << people[i].getGender() << endl;
	}
	return 0;
}