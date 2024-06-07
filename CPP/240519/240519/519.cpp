#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
using namespace std;

class Student {
private:
	// ѧ������
	string name;
	// ѧ��
	int number;
	// ����
	double score;
public:
	// ѧ������
	static int cnt;
	// �����ܺ�
	static double SumScore;
	// ��߷�
	static double maxScore;
	// ��ͷ�
	static double minScore;

	// ���캯��
	Student() {}
	// �������Ĺ��캯��
	Student(string na, int nu, double sc);
	// ����ѧ����Ϣ
	void SetStudent(string na, int nu, double sc);
	// ���ѧ����Ϣ
	void PutStudent();
	// �����߷֡���ͷֺ�ƽ����
	void PutMax_and_min_and_avg();
};
// ��ʼ��ѧ������
int Student::cnt = 0;
// ��ʼ����߷�Ϊ0
double Student::maxScore = 0;
// ��ʼ����ͷ�Ϊ10��5�η�
double Student::minScore = 1e5;
// ��ʼ�������ܺ�Ϊ0
double Student::SumScore = 0;

// ѧ���������Ĺ��캯��
Student::Student(string na, int nu, double sc) {
	// ��ʼ��ѧ������
	name = na;
	// ��ʼ��ѧ��
	number = nu;
	// ��ʼ������
	score = sc;
	// �ۼӷ������ܺ�
	SumScore += score;
	// ����ѧ������
	cnt++;
	// ������߷�
	maxScore = max(maxScore, score);
	// ������ͷ�
	minScore = min(minScore, score);
}
// ����ѧ����Ϣ
void Student::SetStudent(string na, int nu, double sc) {
	// ����ѧ������
	name = na;
	// ����ѧ��
	number = nu;
	// ���÷���
	score = sc;
	// �ۼӷ������ܺ�
	SumScore += score;
	// ����ѧ������
	cnt++;
	// ������߷�
	maxScore = max(maxScore, score);
	// ������ͷ�
	minScore = min(minScore, score);
}
// ���ѧ����Ϣ
void Student::PutStudent() {
	// ���ѧ��������ѧ�źͷ���
	cout << "����: " << name << "  ѧ��:" << number << "  ����:" << score << '\n';
}
// �����߷֡���ͷֺ�ƽ����
// �����߷֡���ͷֺ�ƽ����
void Student::PutMax_and_min_and_avg() {
	cout << "������:" << Student::maxScore << "  ��С����:" << Student::minScore << '\n';
	if (Student::cnt > 0) { // ����Ƿ���ѧ������
		cout << "�ܷ���:" << Student::SumScore << "  ƽ������:" << Student::SumScore / Student::cnt << '\n';
	}
	else {
		cout << "�ܷ���:" << Student::SumScore << "  ƽ������:��" << '\n';
	}
}



int main()
{
	// ��������40��ѧ��������
	vector<Student>MyStudent(40);
	// ����Ҫ�����ѧ����
	cout << "������Ҫ�����ѧ����\n";
	int n;
	// ��ȡѧ����
	cin >> n;
	// ����������
	system("cls");
	// ����ѧ����Ϣ(������ѧ�ţ�����)
	cout << "������ѧ����Ϣ(������ѧ�ţ�����):\n";
	for (int i = 0; i < n; i++) {
		string str;
		int numb;
		double dou;
		cin >> str >> numb >> dou;
		MyStudent[i].SetStudent(str, numb, dou);
	}

	// ����������
	system("cls");
	// ���ѧ����Ϣ
	for (int i = 0; i < n; i++) {
		MyStudent[i].PutStudent();
	}
	// �����߷֡���ͷֺ�ƽ����
	MyStudent[0].PutMax_and_min_and_avg();
	cout << '\n';
	// ��ͣ����ִ�У��ȴ��û�����
	system("pause");
	return 0;
}
