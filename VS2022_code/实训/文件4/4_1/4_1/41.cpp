//1�����һ��ѧ����Student��
//1)���ݳ�Ա������
//ѧ��ѧ�š���������ѧ��Ӣ�c���Գɼ���(���ַ�ָ��洢ѧ�ź�������ͨ����̬�洢�ռ����ķ�ʽΪָ�뿪��ָ��Ŀռ䣬��֤�ռ��Сû���˷�)
//2)��Ա����������
//����ѧ��ÿ�ſγɼ��ĺ���setScore()���������ſγ�ƽ���ɼ��ĺ���average()��
// �ֱ��������úͻ�ȡѧ����������ֵ��set()��get()��Ա����(���磺������ѧ�ɼ��ĳ�Ա����setMath()��
// ������ѧ�ɼ��ĳ�Ա����getMath())���������ſγ��ܳɼ��ĺ���sum()����ʾѧ��������Ϣ�ĺ���print()��
// (ע�⣺���ϳ�Ա������Ϊ��ʾ���ƣ��Ƿ���Ҫ������ͬѧ�Ǹ���ʵ������������)
//3)�ڸ����ж����޲ι��캯�������ι��캯�����������캯����������������ע�⹹�캯������Դ�ķ����Լ�������������Դ���ͷţ�
//4)��д���������ֱ���ϰ���󡢶���ָ�롢�������顢�������õ�ʹ�ã����������������������Բ���֤��ͬ������������ڣ�
//5)��Ϥthisָ�룬����ʲô���ĳ�Ա������thisָ�룬ʲô���ĳ�Ա����û��thisָ�롣
//6)����student����֤�����󡢳���Ա�Լ���̬��Ա������ص���ʹ�÷�����
//7)����information�࣬�����а���weight��height��age�������ݳ�Ա���Լ���д��Щ���ݳ�Ա��set��get��Ա������
// ͬʱ������߱����ι��캯����������������information�������Ϊstudent���һ�����ݳ�Ա����֤��������϶�������֪ʶ��
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
        cout << "ѧ�ţ�" << m_id << "  " ;
        cout << "������" << m_name << "  " ;
        cout << "��ѧ��" << m_math << "  ";
        cout << "Ӣ�" << m_english << "  ";
        cout << "C���ԣ�" << m_c << endl;
    }
};

void test1() {
    int n;
    cout << "������ѧ��������" << endl;
    cin >> n;
    vector<Student>a(n);
    for (int i = 0; i < n; i++) {
        char id[10];
        char name[10];
        int math, english, c;
        cout << "�������" << i + 1 << "��ѧ����ѧ�š���������ѧ��Ӣ�C���Գɼ���" << endl;
        cin >> id >> name >> math >> english >> c;
        a[i].set(id, name, math, english, c);
    }
    for (int i = 0; i < n; i++) {
        a[i].print();
        cout << "ƽ������" << a[i].average() << endl;
        cout << "�ܷ֣�" << a[i].sum() << endl;
    }
}
void test2(Student *s2) {
    char id[10] = "123456";
    char name[10] = "����";
    int math = 80;
    int english = 90;
    int c = 95;
    s2->set(id, name, math, english, c);
    s2->print();
    cout << "ƽ������" << s2->average() << endl;
    cout << "�ܷ֣�" << s2->sum() << endl;
}

void test3(Student& s3) {
    char id[10] = "123456";
    char name[10] = "����";
    int math = 80;
    int english = 90;
    int c = 95;
    s3.set(id, name, math, english, c);
    s3.print();
    cout << "ƽ������" << s3.average() << endl;
    cout << "�ܷ֣�" << s3.sum() << endl;
}

void test4() {
    Student s2;
    char id[10] = "123456";
    char name[10] = "����";
    int math = 80;
    int english = 90;
    int c = 95;
    s2.set(id, name, math, english, c);
    s2.print();
    cout << "ƽ������" << s2.average() << endl;
    cout << "�ܷ֣�" << s2.sum() << endl;
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