//1�����һ��ѧ���ࡣ
//1)���ݳ�Ա������
//ѧ��������ѧУ��ѧ��ѧ�ţ���������ѧ��Ӣ�c���Գɼ���
//2)��Ա����������
//����ѧ��ÿ�ſγɼ��ĺ���setScore()��
// �������ſγ�ƽ���ɼ��ĺ���average()��
// �������ſγ��ܳɼ��ĺ���sum()��
// ��ʾѧ��������Ϣ�ĺ���print()��(ע�⣺���ϳ�Ա������Ϊ��ʾ���ƣ��Ƿ���Ҫ������ͬѧ�Ǹ���ʵ������������)
//��д������������������ɶ�����Ϣ�������
#include <iostream>
#include<string>
using namespace std;

class Student {
private:
    string school;//ѧУ
    int id;//ѧ��
    string name;//����
    int math, english, c;//��ѧӢ��c���Գɼ�
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
        cout << "ѧУ��" << school << endl;
        cout << "ѧ�ţ�" << id << endl;
        cout << "������" << name << endl;
        cout << "��ѧ��" << math << endl;
        cout << "Ӣ�" << english << endl;
        cout << "C���ԣ�" << c << endl;
        cout << "���ſγ�ƽ���ɼ���" << average() << endl;
        cout << "���ſγ��ܳɼ���" << sum() << endl;
    }
};

int main() {
    string s;
    int i, m, e, c;
    string n;
    cout << "������ѧУ��" << endl;
    cin >> s;
    cout << "������ѧ�ţ�" << endl;
    cin >> i;
    cout << "������������" << endl;
    cin >> n;
    cout << "��������ѧ�ɼ���" << endl;
    cin >> m;
    cout << "������Ӣ��ɼ���" << endl;
    cin >> e;
    cout << "������C���Գɼ���" << endl;
    cin >> c;
    Student student(s, i, n);
    student.setScore(m, e, c);
    student.print();
    return 0;
}