#include"address.h"

//函数的实现

//菜单功能
void menu() {
	cout << "*****************" << endl;
	cout << "***1.添加联系人***" << endl;
	cout << "***2.显示联系人***" << endl;
	cout << "***3.删除联系人***" << endl;
	cout << "***4.查找联系人***" << endl;
	cout << "***5.修改联系人***" << endl;
	cout << "***6.清空联系人***" << endl;
	cout << "***0.推出通讯录***" << endl;
	cout << "*****************" << endl;
}
//添加联系人
void Add_Contact(person mp)
{
	cout << "请输入姓名:";
	cin >> mp.name;
	cout << endl << "请选择性别:" << endl << "1.男" << endl << "2.女" << endl;
	cin >> mp.sex;
	cout << endl << "请输入年龄:" << endl;
	cin >> mp.age;
	cout << endl << "请输入电话号码:" << endl;
	cin >> mp.number;
	cout << endl << "请输入地址:" << endl;
	cin >> mp.home;
}
//显示联系人
void Show_contact()
{
	person mp;
	cout << "姓名:" << mp.name << "性别:" << mp.sex;
}