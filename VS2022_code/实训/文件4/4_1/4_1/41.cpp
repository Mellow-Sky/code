//1．设计一个学生类Student。
//1)数据成员包括：
//学生学号、姓名、数学、英语、c语言成绩；(用字符指针存储学号和姓名，通过动态存储空间分配的方式为指针开辟指向的空间，保证空间大小没有浪费)
//2)成员函数包括：
//设置学生每门课成绩的函数setScore()；计算三门课程平均成绩的函数average()；
// 分别用来设置和获取学生各个属性值的set()和get()成员函数(例如：设置数学成绩的成员函数setMath()，
// 返回数学成绩的成员函数getMath())；计算三门课程总成绩的函数sum()；显示学生数据信息的函数print()；
// (注意：以上成员函数均为提示名称，是否需要参数请同学们根据实际情况酌情添加)
//3)在该类中定义无参构造函数、带参构造函数、拷贝构造函数和析构函数。（注意构造函数中资源的分配以及析构函数中资源的释放）
//4)编写主函数，分别练习对象、对象指针、对象数组、对象引用的使用；借助构造与析构函数测试并验证不同对象的生存周期；
//5)熟悉this指针，测试什么样的成员函数有this指针，什么样的成员函数没有this指针。
//6)借助student类验证常对象、常成员以及静态成员的相关特点与使用方法。
//7)引入information类，此类中包含weight、height和age三个数据成员，以及读写这些数据成员的set与get成员函数。
// 同时，该类具备带参构造函数和析构函数。将information类对象作为student类的一个数据成员，验证并测试组合对象的相关知识。
#include<iostream>
#include<vector>
#include<cstring>
#pragma warning( disable : 4996)
using namespace std;
class Information {
private:
    double m_weight;
    double m_height;
    int m_age;
public:
    Information() :m_weight(0), m_height(0), m_age(0) {}
    Information(double weight, double height, int age) :m_weight(weight), m_height(height), m_age(age) {}
    ~Information() {}
    void setWeight(double weight) {
        m_weight = weight;
    }
    double getWeight() {
        return m_weight;
    }
    void setHeight(double height) {
        m_height = height;
    }
    double getHeight() {
        return m_height;
    }
    void setAge(int age) {
        m_age = age;
    }
    int getAge() {
        return m_age;
    }
};

class Student{
private:
    char* m_id;
    char* m_name;
    int m_math;
    int m_english;
    int m_c;
    Information m_info;
public:
    Student() {}
    Student(char* id, char* name, int math, int english, int c)
    :m_id(new char[strlen(id)+1]), m_name(new char[strlen(name)+1]), m_math(math), m_english(english), m_c(c)
    { 
        strcpy(m_id, id);
        strcpy(m_name, name);
    }
    Student(const Student& s)
    :m_id(new char[strlen(s.m_id)+1]), m_name(new char[strlen(s.m_name)+1]), m_math(s.m_math), m_english(s.m_english), m_c(s.m_c)
    {
        strcpy(m_id, s.m_id);
        strcpy(m_name, s.m_name);
    }
    ~Student(){
        delete[] m_id;
        delete[] m_name;
    }
    void set(char* id, char* name, int math, int english, int c)
    {
        m_id = new char[strlen(id) + 1];
        m_name = new char[strlen(name) + 1];
        m_math = math;
        m_english = english;
        m_c = c;
        strcpy(m_id, id);
        strcpy(m_name, name);
    }
    void setScore(int math, int english, int c){
        m_math = math;
        m_english = english;
        m_c = c;
    }
    double average(){
        return sum() / 3.0;
    }
    int sum(){
        return m_math + m_english + m_c;
    }
    void print(){
        cout << "学号：" << m_id << "  " ;
        cout << "姓名：" << m_name << "  " ;
        cout << "数学：" << m_math << "  ";
        cout << "英语：" << m_english << "  ";
        cout << "C语言：" << m_c << endl;
    }
};

void test1() {
    int n;
    cout << "请输入学生数量：" << endl;
    cin >> n;
    vector<Student>a(n);
    for (int i = 0; i < n; i++) {
        char id[10];
        char name[10];
        int math, english, c;
        cout << "请输入第" << i + 1 << "个学生的学号、姓名、数学、英语、C语言成绩：" << endl;
        cin >> id >> name >> math >> english >> c;
        a[i].set(id, name, math, english, c);
    }
    for (int i = 0; i < n; i++) {
        a[i].print();
        cout << "平均数：" << a[i].average() << endl;
        cout << "总分：" << a[i].sum() << endl;
    }
}
void test2(Student *s2) {
    char id[10] = "123456";
    char name[10] = "张三";
    int math = 80;
    int english = 90;
    int c = 95;
    s2->set(id, name, math, english, c);
    s2->print();
    cout << "平均数：" << s2->average() << endl;
    cout << "总分：" << s2->sum() << endl;
}

void test3(Student& s3) {
    char id[10] = "123456";
    char name[10] = "张三";
    int math = 80;
    int english = 90;
    int c = 95;
    s3.set(id, name, math, english, c);
    s3.print();
    cout << "平均数：" << s3.average() << endl;
    cout << "总分：" << s3.sum() << endl;
}

void test4() {
    Student s2;
    char id[10] = "123456";
    char name[10] = "张三";
    int math = 80;
    int english = 90;
    int c = 95;
    s2.set(id, name, math, english, c);
    s2.print();
    cout << "平均数：" << s2.average() << endl;
    cout << "总分：" << s2.sum() << endl;
    s2.m_info.setAge()
    
}


int main() {
    //test1();
    //test2(new Student);

    /*Student s3;
    test3(s3);*/

    test4();
    return 0;
}