#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
using namespace std;

class Student {
private:
	// 学生姓名
	string name;
	// 学号
	int number;
	// 分数
	double score;
public:
	// 学生总数
	static int cnt;
	// 分数总和
	static double SumScore;
	// 最高分
	static double maxScore;
	// 最低分
	static double minScore;

	// 构造函数
	Student() {}
	// 带参数的构造函数
	Student(string na, int nu, double sc);
	// 设置学生信息
	void SetStudent(string na, int nu, double sc);
	// 输出学生信息
	void PutStudent();
	// 输出最高分、最低分和平均分
	void PutMax_and_min_and_avg();
};
// 初始化学生总数
int Student::cnt = 0;
// 初始化最高分为0
double Student::maxScore = 0;
// 初始化最低分为10的5次方
double Student::minScore = 1e5;
// 初始化分数总和为0
double Student::SumScore = 0;

// 学生带参数的构造函数
Student::Student(string na, int nu, double sc) {
	// 初始化学生姓名
	name = na;
	// 初始化学号
	number = nu;
	// 初始化分数
	score = sc;
	// 累加分数到总和
	SumScore += score;
	// 增加学生数量
	cnt++;
	// 更新最高分
	maxScore = max(maxScore, score);
	// 更新最低分
	minScore = min(minScore, score);
}
// 设置学生信息
void Student::SetStudent(string na, int nu, double sc) {
	// 设置学生姓名
	name = na;
	// 设置学号
	number = nu;
	// 设置分数
	score = sc;
	// 累加分数到总和
	SumScore += score;
	// 增加学生数量
	cnt++;
	// 更新最高分
	maxScore = max(maxScore, score);
	// 更新最低分
	minScore = min(minScore, score);
}
// 输出学生信息
void Student::PutStudent() {
	// 输出学生姓名、学号和分数
	cout << "姓名: " << name << "  学号:" << number << "  分数:" << score << '\n';
}
// 输出最高分、最低分和平均分
// 输出最高分、最低分和平均分
void Student::PutMax_and_min_and_avg() {
	cout << "最大分数:" << Student::maxScore << "  最小分数:" << Student::minScore << '\n';
	if (Student::cnt > 0) { // 检查是否有学生数据
		cout << "总分数:" << Student::SumScore << "  平均分数:" << Student::SumScore / Student::cnt << '\n';
	}
	else {
		cout << "总分数:" << Student::SumScore << "  平均分数:无" << '\n';
	}
}



int main()
{
	// 创建包含40个学生的向量
	vector<Student>MyStudent(40);
	// 输入要输入的学生数
	cout << "请输入要输入的学生数\n";
	int n;
	// 读取学生数
	cin >> n;
	// 清空输出窗口
	system("cls");
	// 输入学生信息(姓名，学号，分数)
	cout << "请输入学生信息(姓名，学号，分数):\n";
	for (int i = 0; i < n; i++) {
		string str;
		int numb;
		double dou;
		cin >> str >> numb >> dou;
		MyStudent[i].SetStudent(str, numb, dou);
	}

	// 清空输出窗口
	system("cls");
	// 输出学生信息
	for (int i = 0; i < n; i++) {
		MyStudent[i].PutStudent();
	}
	// 输出最高分、最低分和平均分
	MyStudent[0].PutMax_and_min_and_avg();
	cout << '\n';
	// 暂停程序执行，等待用户按键
	system("pause");
	return 0;
}
