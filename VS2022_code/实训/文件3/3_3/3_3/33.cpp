//2）在源文件中，书写主函数。
//在主函数中，输入图书的数量，然后输入每一本图书的信息，完成所有图书的信息按照价格从小到大进行冒泡法排序，并输出到屏幕上。
//用户可以根据输入的操作序号，反复进行如下操作：
//1.输出所有图书中，价格最高的图书的信息。
//2.在用户输入的任意位置，进行图书信息的添加。
//3.在用户输入的任意位置，删除对应图书的信息。
//4.输出所有图书的平均价格。
//5.退出程序操作。
#include"book.h"

int main() {
	int n;
	cout << "请输入图书的数量:" << endl;
	cin >> n;
	vector<Book>book(n);
	for (int i = 0; i < n; i++) {
		string name, author, publisher;
		double price;
		cout << "请输入图书名称 出版社 作者 价格:" << endl;
		cin >> name >> publisher >> author >> price;
		book[i].setName(name);
		book[i].setPublisher(publisher);
		book[i].setAuthor(author);
		book[i].setPrice(price);
	}
	//排序
	bubbleSort(book, n);
	//输出排序后的图书信息
	cout << "全部图书信息:" << endl;
	for (int i = 0; i < n; i++) {
		cout << "书名" << book[i].getName() << " " << "出版社" << book[i].getPublisher() 
			<< " " << "作者" << book[i].getAuthor() << " " << "价格" << book[i].getPrice() << endl;
	}
	system("pause");
	int choice = 0;
	while (choice != 5) 
	{
		system("cls");
		menu();
		cin >> choice;
		switch (choice) {
			case 1:{
				cout << "价格最高的图书信息:" << endl;
				cout << "书名" << book[n - 1].getName() << " " << "出版社" << book[n - 1].getPublisher()
					<< " " << "作者" << book[n - 1].getAuthor() << " " << "价格" << book[n - 1].getPrice() << endl;
				system("pause");
				break;
			}
			case 2:{
				int pos;
				cout << "请输入要添加的位置:" << endl;
				cin >> pos;
				if (pos < 0 || pos > n) {
					cout << "输入的位置超出范围！" << endl;
					system("pause");
					break;
				}
				string name, publisher, author;
				double price;
				cout << "请输入图书名称:" << endl;
				cin >> name;
				cout << "请输入图书出版社:" << endl;
				cin >> publisher;
				cout << "请输入图书作者:" << endl;
				cin >> author;
				cout << "请输入图书价格:" << endl;
				cin >> price;
				Book newBook(name, publisher, author, price);
				book.insert(book.begin() + pos, newBook);
				bubbleSort(book, n + 1);
				n++;
				cout << "图书信息添加成功！" << endl;
				system("pause");
				break;
			}
			case 3:{
				int index;
				cout << "请输入要删除的图书的序号:" << endl;
				cin >> index;
				if (index < 0 || index >= n) {
					cout << "输入的序号超出范围！" << endl;
				}
				else {
					remove(book, index);
					n--;
					cout << "图书信息删除成功！" << endl;
				}
				system("pause");
				break;
			}
			case 4:{
				cout << "图书平均价格为：" << getAveragePrice(book, n) << endl;
				system("pause");
				break;
			}
			case 5:{
				cout << "程序退出！" << endl;
				system("pause");
				break;
			}
			default:{
				cout << "输入的操作序号有误！" << endl;
				system("pause");
				break;
			}
		}
	}
	return 0;
}