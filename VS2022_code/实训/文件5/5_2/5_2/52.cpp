//2����Person��Ļ����Ͻ���һ��ѧ����Student
//1)���ݳ�Ա������
//ѧ��ѧ�š���������ѧ��Ӣ�c���Գɼ���(���ַ�ָ��洢ѧ�ź�������ͨ����̬�洢�ռ����ķ�ʽΪָ�뿪��ָ��Ŀռ䣬��֤�ռ��Сû���˷�)
//2)��Ա����������
//����ѧ��ÿ�ſγɼ��ĺ���setScore()���������ſγ�ƽ���ɼ��ĺ���average()���ֱ��������úͻ�ȡѧ����������ֵ��set()��get()��Ա����
// (���磺������ѧ�ɼ��ĳ�Ա����setMath()��������ѧ�ɼ��ĳ�Ա����getMath())��
// �������ſγ��ܳɼ��ĺ���sum()����ʾѧ��������Ϣ�ĺ���print()��
// (ע�⣺���ϳ�Ա������Ϊ��ʾ���ƣ��Ƿ���Ҫ������ͬѧ�Ǹ���ʵ������������)
//3)�ڸ����ж����޲ι��캯�������ι��캯�����������캯����������������ע�⹹�캯������Դ�ķ����Լ�������������Դ���ͷţ�
//4)��д���������ֱ���ϰ���󡢶���ָ�롢�������顢�������õ�ʹ�ã����������������������Բ���֤��ͬ������������ڣ�
//5)��Ϥthisָ�룬����ʲô���ĳ�Ա������thisָ�룬ʲô���ĳ�Ա����û��thisָ�롣
//6)����student����֤�����󡢳���Ա�Լ���̬��Ա������ص���ʹ�÷�����
//7)����information�࣬�����а���weight��height��age�������ݳ�Ա���Լ���д��Щ���ݳ�Ա��set��get��Ա������
// ͬʱ������߱����ι��캯����������������information�������Ϊstudent���һ�����ݳ�Ա����֤��������϶�������֪ʶ��
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
		cout << "Information��������" << endl;
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
		cout << "Student�޲ι��캯��" << endl;
	}
	Student(char *id, char *name, int math, int english, int c_language) {
		this->id = new char[strlen(id) + 1];
		strcpy(this->id, id);
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->math = math;
		this->english = english;
		this->c_language = c_language;
		cout << "Student���ع��캯��" << endl;
	}
	Student(const Student &s) {
		this->id = new char[strlen(s.id) + 1];
		strcpy(this->id, s.id);
		this->name = new char[strlen(s.name) + 1];
		strcpy(this->name, s.name);
		this->math = s.math;
		this->english = s.english;
		this->c_language = s.c_language;
		cout << "Student�������캯��" << endl;
	}
	~Student() {
		delete[] id;
		delete[] name;
		cout << "Student��������" << endl;
	}
};

void test() {
	//����
	Person p;
	p.setName("����");
	p.setAge(20);
	p.setGender("��");
	cout << "������" << p.getName() << endl;
	cout << "���䣺" << p.getAge() << endl;
	cout << "�Ա�" << p.getGender() << endl;

	//����ָ��
	Person *p1 = new Person;
	p1->setAge(25);
	p1->setGender("Ů");
	cout << "������" << p1->getName() << endl;
	cout << "���䣺" << p1->getAge() << endl;
	cout << "�Ա�" << p1->getGender() << endl;
	delete p1;

	//��������
	Person ps[3];
	ps[0].setName("����");
	ps[0].setAge(30);
	ps[0].setGender("��");
	ps[1].setAge(25);
	ps[1].setGender("Ů");
	ps[2].setName("����");
	ps[2].setAge(20);
	ps[2].setGender("��");
	for (int i = 0; i < 3; i++) {
		cout << "������" << ps[i].getName() << endl;
		cout << "���䣺" << ps[i].getAge() << endl;
		cout << "�Ա�" << ps[i].getGender() << endl;
	}

	//��������
	Person &pr = p;
	pr.setAge(22);
	pr.setGender("��");
	cout << "������" << pr.getName() << endl;
	cout << "���䣺" << pr.getAge() << endl;
	cout << "�Ա�" << pr.getGender() << endl;

	//������
	const Person cp;

	//����Ա
	const int ci = 10;

	//��̬��Ա
	static int si = 100;
	si = 200;
	cout << "��̬��Ա��" << si << endl;

	//��϶���
	Student s;
	
	s.setScore(80, 90, 95);
	s.info.setWeight(70.5);
	s.info.setHeight(170.5);
	s.info.setAge(25);
	cout << "��ѧ��" << s.math << endl;
	cout << "Ӣ�" << s.english << endl;
	cout << "c���ԣ�" << s.c_language << endl;
	cout << "���أ�" << s.info.getWeight() << endl;
	cout << "��ߣ�" << s.info.getHeight() << endl;
	cout << "���䣺" << s.info.getAge() << endl;
}

int main() {
	test();
	return 0;
}