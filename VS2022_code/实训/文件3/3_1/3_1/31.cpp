//1．设计一个学生类。
//1)数据成员包括：
//学生所属的学校，学生学号，姓名，数学、英语、c语言成绩；
//2)成员函数包括：
//设置学生每门课成绩的函数setScore()；
// 计算三门课程平均成绩的函数average()；
// 计算三门课程总成绩的函数sum()；
// 显示学生数据信息的函数print()；(注意：以上成员函数均为提示名称，是否需要参数请同学们根据实际情况酌情添加)
//编写主函数，建立对象，完成对象信息的输出；
#include <iostream>
#include<string>
using namespace std;

class Student {
private:
    string school;//学校
    int id;//学号
    string name;//姓名
    int math, english, c;//数学英语c语言成绩
public:
    Student(string s, int i, string n) {
        school = s;
        id = i;
        name = n;
    }
    void setScore(int m, int e, int c) {
        math = m;
        english = e;
        this->c = c;
    }
    double average() {
        return (double)(math + english + c) / 3;
    }
    int sum() {
        return math + english + c;
    }
    void print() {
        cout << "学校：" << school << endl;
        cout << "学号：" << id << endl;
        cout << "姓名：" << name << endl;
        cout << "数学：" << math << endl;
        cout << "英语：" << english << endl;
        cout << "C语言：" << c << endl;
        cout << "三门课程平均成绩：" << average() << endl;
        cout << "三门课程总成绩：" << sum() << endl;
    }
};

int main() {
    string s;
    int i, m, e, c;
    string n;
    cout << "请输入学校：" << endl;
    cin >> s;
    cout << "请输入学号：" << endl;
    cin >> i;
    cout << "请输入姓名：" << endl;
    cin >> n;
    cout << "请输入数学成绩：" << endl;
    cin >> m;
    cout << "请输入英语成绩：" << endl;
    cin >> e;
    cout << "请输入C语言成绩：" << endl;
    cin >> c;
    Student student(s, i, n);
    student.setScore(m, e, c);
    student.print();
    return 0;
}