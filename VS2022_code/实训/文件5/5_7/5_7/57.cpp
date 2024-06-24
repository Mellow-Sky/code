//7.设计人类：
//成员变量：姓名，性别，年龄
//函数：构造函数，成员变量访问函数。
//虚函数：设置信息函数，获取信息函数。
//人类的子类学生类，继承方式是公有继承。
//成员变量：学号，学校，成绩
//函数：构造函数，成员变量访问函数，上学函数。
//虚函数：设置信息函数，获取信息函数。
//主函数：
//创建人类的对象，学生类的对象。
//人类的对象指针，使用指针分别输出人类的信息和学生类的信息。
#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    string gender;
    int age;
    Person() {}
    Person(string n, string g, int a){
        name = n;
        gender = g;
        age = a;
    }
    virtual void setInfo(string n, string g, int a){
        name = n;
        gender = g;
        age = a;
    }
    virtual void getInfo(){
        cout<<"姓名："<<name<<endl;
        cout<<"性别："<<gender<<endl;
        cout<<"年龄："<<age<<endl;
    }
};

class Student:public Person{
public:
    string id;
    string school;
    float score;
    Student() {}
    Student(string n, string g, int a, string i, string s, float sc){
        name = n;
        gender = g;
        age = a;
        id = i;
        school = s;
        score = sc;
    }
    void setInfo(string n, string g, int a, string i, string s, float sc){
        name = n;
        gender = g;
        age = a;
        id = i;
        school = s;
        score = sc;
    }
    void getInfo(){
        cout<<"姓名："<<name<<endl;
        cout<<"性别："<<gender<<endl;
        cout<<"年龄："<<age<<endl;
        cout<<"学号："<<id<<endl;
        cout<<"学校："<<school<<endl;
        cout<<"成绩："<<score<<endl;
    }
    void study(){
        cout<<"上学函数"<<endl;
    }
};

int main(){
    Person p1("张三", "男", 20);
    Student s1;
    s1.setInfo("李四", "女", 21, "2019001", "清华大学", 90.5);
    cout << "使用指针输出信息" << endl;
    Person *p2 = &p1;
    Student *s2 = &s1;
    p2->getInfo();
    s2->getInfo();
    return 0;
}