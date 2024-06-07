//#include<iostream>
//#include<string>
//#include<vector>
//#include<cstdlib>
//using namespace std;
//class Student
//{
//private:
//	string name;//姓名
//	int number;//学号
//	double score;//分数
//public:
//	static double total;//记录总成绩
//	static int cnt;//记录学生个数
//	Student() {}//不需要
//	Student(string name, int no, int sco);//重载构造函数赋初值
//	void set(string name, int no, int sco);//调用函数赋值
//	void print();//输出学生信息
//	static float avg(int k);//输出平均数
//	friend void changeScore(Student& s, int k);//修改学生分数
//	int PutNumber() { return number; }//输出学号
//};
////两个静态数据成员赋初值，皆为0
//double Student::total = 0;
//int Student::cnt = 0;
////重载构造函数和set函数的赋值
//Student::Student(string name, int no, int sco) { this->name = name; number = no; score = sco; total += score; cnt++; }
//void Student::set(string name, int no, int sco) { this->name = name; number = no; score = sco; total += score; cnt++; }
////输出学生信息
//void Student::print() {
//	cout << "姓名: " << name << "   学号: " << number << "   分数: " << score << '\n';
//}
////修改分数
//void changeScore(Student& s, int k) {
//	Student::total -= s.score;//让总分减去修改前的分数
//	s.score = k;
//}
////求平均值
//float Student::avg(int k) {
//	total += k;//因为在changeScore函数中减了学生修改前的分数，现在需要加上修改后的分数
//	return total / cnt;
//}
//int main()
//{
//	cout << "请输入要录入的学生数: ";
//	int k = 0;int n;  cin >> n;//n代表修改的学生数，k代表要修改的学生的分数
//	vector<Student>s(n + 1);
//	system("cls");//清屏
//	cout << "请输入学生信息(姓名，学号，分数):\n";
//	for (int i = 1; i <= n; i++) {
//		string na; int nu; double dd; cin >> na >> nu >> dd;
//		s[i].set(na, nu, dd);
//	}
//	system("cls");
//	//输出学生信息
//	cout << "学生信息:\n";
//	for (int i = 1; i <= n; i++) {
//		s[i].print();
//	}
//	cout << "平均分为:" << Student::avg(k);
//	cout << "\n\n请输入要修改分数的学生的学号:  ";
//	int m; cin >> m;
//	system("cls");
//	for (int i = 1; i <= n; i++) {//遍历全部学生直到找到则退出
//		if (s[i].PutNumber() == m) {
//			cout << "请输入要修改的分数: ";
//			cin >> k;
//			changeScore(s[i], k);
//			system("cls");
//			break;//找到学号对应的学生修改完信息即退出寻找
//		}
//		else if (i == n) { system("cls"); cout << "\n------查无此人------\n\n\n"; }//如果没找到学号对应的学生则输出语句
//	}
//	//输出学生信息
//	cout << "修改后的学生信息:\n";
//	for (int i = 1; i <= n; i++) {
//		s[i].print();
//	}
//	cout << "平均分为:" << Student::avg(k);
//	return 0;
//}











// Problem: P1138 第 k 小整数
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