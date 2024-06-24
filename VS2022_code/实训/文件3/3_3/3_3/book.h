//3、设计一个图书类：
//1)在头文件中，完成如下类的定义：
//描述图书信息类，包含成员属性：书名，出版社，作者，价格等信息.
//包含两个构造函数，一个析构函数，一个拷贝构造函数。
//对成员变量访问的函数。
//数据成员的输入输出函数。
//根据图书的价格从低到高进行冒泡法排序的函数。
//在某一个位置插入图书信息的函数。
//在某一个位置删除图书信息的函数。
//返回价格最高的图书的信息的函数。
//返回所有图书平均价格的函数。、
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Book {
private:
    string name;
    string publisher;
    string author;
    double price;
public:
    static int bookNum;
    //两个构造函数
    Book() {}
    Book(string n, string p, string a, double pr) {
        name = n;
        publisher = p;
        author = a;
        price = pr;
        bookNum++;
    }
    //析构函数
    ~Book() {}
    //拷贝构造函数
    Book(const Book& b) {
        name = b.name;
        publisher = b.publisher;
        author = b.author;
        price = b.price;
        bookNum++;
    }
    //设置成员变量函数
    void setName(string n) {
        name = n;
    }
    void setPublisher(string p) {
        publisher = p;
    }
    void setAuthor(string a) {
        author = a;
    }
    void setPrice(double pr) {
        price = pr;
    }
    //成员变量访问函数
    string getName() const {
        return name;
    }
    string getPublisher() const {
        return publisher;
    }
    string getAuthor() const {
        return author;
    }
    double getPrice() const {
        return price;
    }
    //数据成员的输入输出函数
    void input() {
        cout << "请输入书名：";
        cin >> name;
        cout << "请输入出版社：";
        cin >> publisher;
        cout << "请输入作者：";
        cin >> author;
        cout << "请输入价格：";
        cin >> price;
    }
    void output() const {
        cout << "书名：" << name << endl;
        cout << "出版社：" << publisher << endl;
        cout << "作者：" << author << endl;
        cout << "价格：" << price << endl;
    }
    //根据图书的价格从低到高进行冒泡法排序的函数
    friend void bubbleSort(vector<Book>& book, int bookNum) {
        Book temp;
        for (int i = 0; i < bookNum - 1; i++) {
            for (int j = 0; j < bookNum - i - 1; j++) {
                if (book[j].getPrice() > book[j + 1].getPrice()) {
                    temp = book[j];
                    book[j] = book[j + 1];
                    book[j + 1] = temp;
                }
            }
        }
    }
    //在某一个位置插入图书信息的函数
    void insert(vector<Book>& book, int pos, Book b) {
        book.insert(book.begin() + pos, b);
        bookNum++;
    }
    //在某一个位置删除图书信息的函数
    friend void remove(vector<Book>& book, int pos) {
        book.erase(book.begin() + pos);
        bookNum--;
    }
    //返回价格最高的图书的信息的函数
    Book getHighestPrice(vector<Book>& book) {
        Book highest = book[0];
        for (int i = 1; i < bookNum; i++) {
            if (book[i].getPrice() > highest.getPrice()) {
                highest = book[i];
            }
            return highest;
        }
    }
    //返回所有图书平均价格的函数
    friend double getAveragePrice(vector<Book> &book, int n) {
        double sum = 0;
        for (int i = 0; i < n; i++) {
            sum += book[i].getPrice();
        }
        return sum / n;
    }
};
int Book::bookNum = 0; //静态变量初始化

void menu() {
    cout << "请输入操作序号:" << endl;
    cout << "1.输出所有图书中，价格最高的图书的信息。" << endl;
    cout << "2.进行图书信息的添加。" << endl;
    cout << "3.删除对应图书的信息。" << endl;
    cout << "4.输出所有图书的平均价格。" << endl;
    cout << "5.退出程序。" << endl;
}