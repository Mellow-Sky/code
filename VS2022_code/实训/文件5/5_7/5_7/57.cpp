//7.������ࣺ
//��Ա�������������Ա�����
//���������캯������Ա�������ʺ�����
//�麯����������Ϣ��������ȡ��Ϣ������
//���������ѧ���࣬�̳з�ʽ�ǹ��м̳С�
//��Ա������ѧ�ţ�ѧУ���ɼ�
//���������캯������Ա�������ʺ�������ѧ������
//�麯����������Ϣ��������ȡ��Ϣ������
//��������
//��������Ķ���ѧ����Ķ���
//����Ķ���ָ�룬ʹ��ָ��ֱ�����������Ϣ��ѧ�������Ϣ��
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
        cout<<"������"<<name<<endl;
        cout<<"�Ա�"<<gender<<endl;
        cout<<"���䣺"<<age<<endl;
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
        cout<<"������"<<name<<endl;
        cout<<"�Ա�"<<gender<<endl;
        cout<<"���䣺"<<age<<endl;
        cout<<"ѧ�ţ�"<<id<<endl;
        cout<<"ѧУ��"<<school<<endl;
        cout<<"�ɼ���"<<score<<endl;
    }
    void study(){
        cout<<"��ѧ����"<<endl;
    }
};

int main(){
    Person p1("����", "��", 20);
    Student s1;
    s1.setInfo("����", "Ů", 21, "2019001", "�廪��ѧ", 90.5);
    cout << "ʹ��ָ�������Ϣ" << endl;
    Person *p2 = &p1;
    Student *s2 = &s1;
    p2->getInfo();
    s2->getInfo();
    return 0;
}