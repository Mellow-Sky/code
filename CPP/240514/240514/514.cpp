//#include<iostream>
//#include<string>
//#include<vector>
//#include<cstdlib>
//using namespace std;
//class Student
//{
//private:
//	string name;//����
//	int number;//ѧ��
//	double score;//����
//public:
//	static double total;//��¼�ܳɼ�
//	static int cnt;//��¼ѧ������
//	Student() {}//����Ҫ
//	Student(string name, int no, int sco);//���ع��캯������ֵ
//	void set(string name, int no, int sco);//���ú�����ֵ
//	void print();//���ѧ����Ϣ
//	static float avg(int k);//���ƽ����
//	friend void changeScore(Student& s, int k);//�޸�ѧ������
//	int PutNumber() { return number; }//���ѧ��
//};
////������̬���ݳ�Ա����ֵ����Ϊ0
//double Student::total = 0;
//int Student::cnt = 0;
////���ع��캯����set�����ĸ�ֵ
//Student::Student(string name, int no, int sco) { this->name = name; number = no; score = sco; total += score; cnt++; }
//void Student::set(string name, int no, int sco) { this->name = name; number = no; score = sco; total += score; cnt++; }
////���ѧ����Ϣ
//void Student::print() {
//	cout << "����: " << name << "   ѧ��: " << number << "   ����: " << score << '\n';
//}
////�޸ķ���
//void changeScore(Student& s, int k) {
//	Student::total -= s.score;//���ּܷ�ȥ�޸�ǰ�ķ���
//	s.score = k;
//}
////��ƽ��ֵ
//float Student::avg(int k) {
//	total += k;//��Ϊ��changeScore�����м���ѧ���޸�ǰ�ķ�����������Ҫ�����޸ĺ�ķ���
//	return total / cnt;
//}
//int main()
//{
//	cout << "������Ҫ¼���ѧ����: ";
//	int k = 0;int n;  cin >> n;//n�����޸ĵ�ѧ������k����Ҫ�޸ĵ�ѧ���ķ���
//	vector<Student>s(n + 1);
//	system("cls");//����
//	cout << "������ѧ����Ϣ(������ѧ�ţ�����):\n";
//	for (int i = 1; i <= n; i++) {
//		string na; int nu; double dd; cin >> na >> nu >> dd;
//		s[i].set(na, nu, dd);
//	}
//	system("cls");
//	//���ѧ����Ϣ
//	cout << "ѧ����Ϣ:\n";
//	for (int i = 1; i <= n; i++) {
//		s[i].print();
//	}
//	cout << "ƽ����Ϊ:" << Student::avg(k);
//	cout << "\n\n������Ҫ�޸ķ�����ѧ����ѧ��:  ";
//	int m; cin >> m;
//	system("cls");
//	for (int i = 1; i <= n; i++) {//����ȫ��ѧ��ֱ���ҵ����˳�
//		if (s[i].PutNumber() == m) {
//			cout << "������Ҫ�޸ĵķ���: ";
//			cin >> k;
//			changeScore(s[i], k);
//			system("cls");
//			break;//�ҵ�ѧ�Ŷ�Ӧ��ѧ���޸�����Ϣ���˳�Ѱ��
//		}
//		else if (i == n) { system("cls"); cout << "\n------���޴���------\n\n\n"; }//���û�ҵ�ѧ�Ŷ�Ӧ��ѧ����������
//	}
//	//���ѧ����Ϣ
//	cout << "�޸ĺ��ѧ����Ϣ:\n";
//	for (int i = 1; i <= n; i++) {
//		s[i].print();
//	}
//	cout << "ƽ����Ϊ:" << Student::avg(k);
//	return 0;
//}











// Problem: P1138 �� k С����
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1138
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<queue>
#include<map>
#include<cstdlib>
#include<set>
#include<algorithm>
#include<cstdio>
const int N = 1e3;
using namespace std;
using ll = long long;

void vol()
{
	int n, k; cin >> n >> k;
	set<int>s;
	for (int i = 1; i <= n; i++) {
		int x; cin >> x;
		s.insert(x);
	}
	for (int i = 1; i < k; i++) {
		s.erase(s.begin());
	}
	cout << *s.begin();
}

int main()
{
	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t;
	//cin >> t;
	t = 1;
	while (t--) {
		vol();
	}

	return 0;
}