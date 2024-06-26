//2．在Person类的基础上建立一个学生类Student
//1)数据成员包括：
//学生学号、姓名、数学、英语、c语言成绩；(用字符指针存储学号和姓名，通过动态存储空间分配的方式为指针开辟指向的空间，保证空间大小没有浪费)
//2)成员函数包括：
//设置学生每门课成绩的函数setScore()；计算三门课程平均成绩的函数average()；分别用来设置和获取学生各个属性值的set()和get()成员函数
// (例如：设置数学成绩的成员函数setMath()，返回数学成绩的成员函数getMath())；
// 计算三门课程总成绩的函数sum()；显示学生数据信息的函数print()；
// (注意：以上成员函数均为提示名称，是否需要参数请同学们根据实际情况酌情添加)
//3)在该类中定义无参构造函数、带参构造函数、拷贝构造函数和析构函数。（注意构造函数中资源的分配以及析构函数中资源的释放）
//4)编写主函数，分别练习对象、对象指针、对象数组、对象引用的使用；借助构造与析构函数测试并验证不同对象的生存周期；
//5)熟悉this指针，测试什么样的成员函数有this指针，什么样的成员函数没有this指针。
//6)借助student类验证常对象、常成员以及静态成员的相关特点与使用方法。
//7)引入information类，此类中包含weight、height和age三个数据成员，以及读写这些数据成员的set与get成员函数。
// 同时，该类具备带参构造函数和析构函数。将information类对象作为student类的一个数据成员，验证并测试组合对象的相关知识。
#pragma warning( disable : 4996)
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Person {
public:
	string name;
	int age;
	string gender;
	Person(){
		name = "unknown";
		age = 0;
		gender = "unknown";
	}
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

class Information {
public:
	double weight;
	double height;
	int age;
	Information() {}
	void setWeight(double weight) {
		this->weight = weight;
	}
	void setHeight(double height) {
		this->height = height;
	}
	void setAge(int age) {
		this->age = age;
	}
	double getWeight() {
		return weight;
	}
	double getHeight() {
		return height;
	}
	int getAge() {
		return age;
	}
	Information(double weight, double height, int age) {
		this->weight = weight;
		this->height = height;
		this->age = age;
	}
	~Information() {
		cout << "Information析构函数" << endl;
	}
};

class Student : public Person {
public:
	char *id;
	char *name;
	int math;
	int english;
	int c_language;
	Information info;
	void setScore(int math, int english, int c_language) {
		this->math = math;
		this->english = english;
		this->c_language = c_language;
	}
	double average() {
		return (double)(math + english + c_language) / 3;
	}
	int sum() {
		return math + english + c_language;
	}
	void setMath(int math) {
		this->math = math;
	}
	int getMath() {
		return math;
	}
	void setEnglish(int english) {
		this->english = english;
	}
	int getEnglish() {
		return english;
	}
	void setCLanguage(int c_language) {
		this->c_language = c_language;
	}
	int getCLanguage() {
		return c_language;
	}
	Student() {
		id = new char[10];
		name = new char[10];
		cout << "Student无参构造函数" << endl;
	}
	Student(char *id, char *name, int math, int english, int c_language) {
		this->id = new char[strlen(id) + 1];
		strcpy(this->id, id);
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->math = math;
		this->english = english;
		this->c_language = c_language;
		cout << "Student重载构造函数" << endl;
	}
	Student(const Student &s) {
		this->id = new char[strlen(s.id) + 1];
		strcpy(this->id, s.id);
		this->name = new char[strlen(s.name) + 1];
		strcpy(this->name, s.name);
		this->math = s.math;
		this->english = s.english;
		this->c_language = s.c_language;
		cout << "Student拷贝构造函数" << endl;
	}
	~Student() {
		delete[] id;
		delete[] name;
		cout << "Student析构函数" << endl;
	}
};

void test() {
	//对象
	Person p;
	p.setName("张三");
	p.setAge(20);
	p.setGender("男");
	cout << "姓名：" << p.getName() << endl;
	cout << "年龄：" << p.getAge() << endl;
	cout << "性别：" << p.getGender() << endl;

	//对象指针
	Person *p1 = new Person;
	p1->setAge(25);
	p1->setGender("女");
	cout << "姓名：" << p1->getName() << endl;
	cout << "年龄：" << p1->getAge() << endl;
	cout << "性别：" << p1->getGender() << endl;
	delete p1;

	//对象数组
	Person ps[3];
	ps[0].setName("王五");
	ps[0].setAge(30);
	ps[0].setGender("男");
	ps[1].setAge(25);
	ps[1].setGender("女");
	ps[2].setName("赵六");
	ps[2].setAge(20);
	ps[2].setGender("男");
	for (int i = 0; i < 3; i++) {
		cout << "姓名：" << ps[i].getName() << endl;
		cout << "年龄：" << ps[i].getAge() << endl;
		cout << "性别：" << ps[i].getGender() << endl;
	}

	//对象引用
	Person &pr = p;
	pr.setAge(22);
	pr.setGender("男");
	cout << "姓名：" << pr.getName() << endl;
	cout << "年龄：" << pr.getAge() << endl;
	cout << "性别：" << pr.getGender() << endl;

	//常对象
	const Person cp;

	//常成员
	const int ci = 10;

	//静态成员
	static int si = 100;
	si = 200;
	cout << "静态成员：" << si << endl;

	//组合对象
	Student s;
	
	s.setScore(80, 90, 95);
	s.info.setWeight(70.5);
	s.info.setHeight(170.5);
	s.info.setAge(25);
	cout << "数学：" << s.math << endl;
	cout << "英语：" << s.english << endl;
	cout << "c语言：" << s.c_language << endl;
	cout << "体重：" << s.info.getWeight() << endl;
	cout << "身高：" << s.info.getHeight() << endl;
	cout << "年龄：" << s.info.getAge() << endl;
}

int main() {
	test();
	return 0;
}