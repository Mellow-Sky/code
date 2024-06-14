#include<iostream>
using namespace std;
#include<string>
#define MAX 1000


//设计联系人结构体
struct Person
{
	//姓名
	string Name;
	//性别  1.男 2.女
	int Sex;
	//年龄
	int Age;
	//电话
	string Phone;
	//住址
	string Addr;
};

//设计通讯录结构体
struct Address_Books
{
	//通讯录中保存的联系人数组
	struct Person personArray[MAX];
	//通讯录中当前记录联系人个数
	int size;
};
//菜单界面
void showmenu()
{
	cout << "***** 1.添加联系人 *****" << endl;
	cout << "***** 2.显示联系人 *****" << endl;
	cout << "***** 3.删除联系人 *****" << endl;
	cout << "***** 4.查找联系人 *****" << endl;
	cout << "***** 5.修改联系人 *****" << endl;
	cout << "***** 0.退出系统   *****" << endl;
}

//添加联系人
void addPerson(Address_Books *abs)
{
	//判断通讯录中联系人是否以满
	if (abs->size == MAX) 
	{
		cout << "通讯录以满，无法添加" << endl;
		return;
	}
	else
	{
		//添加具体联系人

		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->size].Name = name;
		//性别
		cout << "请输入性别" << endl;
		cout << "1---男" << endl;
		cout << "2---女" << endl;
		int sex;
		while(true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->size].Sex = sex;
				break;
			}
				cout << "输入有误请重新输入" << endl;
		}
		//年龄
		cout << "请输入年龄" << endl;
		int age;
		while (true)
		{
			cin >> age;
			if (age > 0 && age < 150) {
				abs->personArray[abs->size].Age = age;
				break;
			}
			cout << "输入有误请重新输入" << endl;
		}
		//电话
		cout << "请输入联系电话：" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->size].Phone = phone;
		//地址
		cout << "请输入家庭住址：" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->size].Addr = address;
		abs->size++;

		cout << "添加成功" << endl;
		system("pause");
		system("cls");
	}

}

int main()
{
	//创建通讯录结构体变量
	Address_Books abs;
	//初始化通讯录当前人员个数
	abs.size = 0;

	int select=0;//用户的选择
	
	while(1)
	{
		showmenu();
		cout << "请选择：";
		cin >> select;
		switch (select)
		{
		case 1:
			addPerson(&abs);//传递地址
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 0:
			return 0;
			system("pause");
			break;
		}
	}

	system("pause");
	return 0;
}