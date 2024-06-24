//B.h头文件进行类和函数的声明
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class worker {
protected:
	string number;
	string name;
public:
	worker();
	worker(string num, string n);
	virtual void display();
	void printer() {}
	friend void update();
};

class workers :public worker {
private:
	string sex;
	int age;
public:
	workers();
	workers(string num, string n, string s, int a);
	virtual void display();
	void printer();
	friend void update();
};



void menu();
void add();
void update();
void showAll();
void showSimple();