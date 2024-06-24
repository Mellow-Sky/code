//使用继承的方法，编写最多能输入10个职工的信息表，再根据这个表产生一个职工信息简表，并利用多态性实现信息的输出。
//具体设计要求如下：
//1.建立职工信息数据，包括职工编号、姓名、性别和年龄。
//2．根据职工信息表，建立只含有姓名和年龄的职工信息简表。
//3.使用继承的方法构造2个类，使用相应的对象数组放置10个职工信息。
//4.编写同名display()成员函数，用来输出数组的内容。
//5.另外编制一个函数printer()，用来根据实际对象输出他们的内容。
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
	cout << "请输入职工人数(最多为10人)：" << endl;
	cin >> n;
	if (n > 10) {
		cout << "超出限制\n";
		return 0;
	}
	vector<workers> workers(n);
	for (int i = 0; i < n; i++) {
		string num;
		string name;
		string sex;
		int age;
		cout << "编号:";
		cin >> num;
		cout << "姓名:";
		cin >> name;
		cout << "性别:";
		cin >> sex;
		cout << "年龄:";
		cin >> age;
		workers[i].setworker(num, name, sex, age);
	}
	cout << "编号\t姓名\n";
	for (int i = 0; i < n; i++) {
		workers[i].display(workers[i]);
		cout << endl;
	}

	cout << "编号\t姓名\t性别\t年龄\n";
	for (int i = 0; i < n; i++) {
		workers[i].printer(workers[i]);
		cout << endl;
	}
	return 0;
}