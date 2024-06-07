#include<iostream>
#include<string>
#include<algorithm>
#define NUM 3
using namespace std;
class Book
{
private:
	//书名
	string Book_Name;
	//作者
	string Book_Author;
	//出版社
	string Book_Publisher;
	//价格
	int Book_Price;
public:
	//输入书的信息 使用有参构造函数
	void input(string name, string aut, string pub,int price);
	//输出书的信息
	void output();
	int out_price;
};
//记录输入数据
void Book::input(string name, string aut, string pub, int price)
{
	Book_Name = name;
	Book_Author = aut;
	Book_Publisher = pub;
	Book_Price = price;
	out_price = Book_Price;
}
//输出记录数据
void Book::output()
{
	cout << "书名：" << Book_Name << "  作者：" << Book_Author 
		<< "  出版社：" << Book_Publisher << "  价格：" << Book_Price << endl;
}
int main()
{
	Book ThreeBook[NUM];
	Book TEMP;
	int i, j, pri;
	string n, a, pub;
	cout << "请分别输入图书信息" << endl 
		<< "书名  作者  出版社  价格" << endl;
	for (i = 0; i < NUM; i++)
	{
		cin >> n >> a >> pub >> pri;
		ThreeBook[i].input(n, a, pub, pri);
	}
	//AWA//23034225吴启立//QAQ//
	//按图书价格从小到大排列
	/*for(j=0;j<NUM-1;j++)
	{
		for (i = 0; i < NUM - j - 1; i++)
		{
			if (ThreeBook[i].out_price > ThreeBook[i + 1].out_price)
			{
				TEMP = ThreeBook[i];
				ThreeBook[i] = ThreeBook[i + 1];
				ThreeBook[i + 1] = TEMP;
			}
		}
	}*/
	sort(ThreeBook[0], ThreeBook[NUM]);
	//输出排序后的图书信息
	for (i = 0; i < NUM; i++)
	{
		ThreeBook[i].output();
	}
	return 0;
}
