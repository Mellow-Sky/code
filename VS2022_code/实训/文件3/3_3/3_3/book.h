//3�����һ��ͼ���ࣺ
//1)��ͷ�ļ��У����������Ķ��壺
//����ͼ����Ϣ�࣬������Ա���ԣ������������磬���ߣ��۸����Ϣ.
//�����������캯����һ������������һ���������캯����
//�Գ�Ա�������ʵĺ�����
//���ݳ�Ա���������������
//����ͼ��ļ۸�ӵ͵��߽���ð�ݷ�����ĺ�����
//��ĳһ��λ�ò���ͼ����Ϣ�ĺ�����
//��ĳһ��λ��ɾ��ͼ����Ϣ�ĺ�����
//���ؼ۸���ߵ�ͼ�����Ϣ�ĺ�����
//��������ͼ��ƽ���۸�ĺ�������
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
    //�������캯��
    Book() {}
    Book(string n, string p, string a, double pr) {
        name = n;
        publisher = p;
        author = a;
        price = pr;
        bookNum++;
    }
    //��������
    ~Book() {}
    //�������캯��
    Book(const Book& b) {
        name = b.name;
        publisher = b.publisher;
        author = b.author;
        price = b.price;
        bookNum++;
    }
    //���ó�Ա��������
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
    //��Ա�������ʺ���
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
    //���ݳ�Ա�������������
    void input() {
        cout << "������������";
        cin >> name;
        cout << "����������磺";
        cin >> publisher;
        cout << "���������ߣ�";
        cin >> author;
        cout << "������۸�";
        cin >> price;
    }
    void output() const {
        cout << "������" << name << endl;
        cout << "�����磺" << publisher << endl;
        cout << "���ߣ�" << author << endl;
        cout << "�۸�" << price << endl;
    }
    //����ͼ��ļ۸�ӵ͵��߽���ð�ݷ�����ĺ���
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
    //��ĳһ��λ�ò���ͼ����Ϣ�ĺ���
    void insert(vector<Book>& book, int pos, Book b) {
        book.insert(book.begin() + pos, b);
        bookNum++;
    }
    //��ĳһ��λ��ɾ��ͼ����Ϣ�ĺ���
    friend void remove(vector<Book>& book, int pos) {
        book.erase(book.begin() + pos);
        bookNum--;
    }
    //���ؼ۸���ߵ�ͼ�����Ϣ�ĺ���
    Book getHighestPrice(vector<Book>& book) {
        Book highest = book[0];
        for (int i = 1; i < bookNum; i++) {
            if (book[i].getPrice() > highest.getPrice()) {
                highest = book[i];
            }
            return highest;
        }
    }
    //��������ͼ��ƽ���۸�ĺ���
    friend double getAveragePrice(vector<Book> &book, int n) {
        double sum = 0;
        for (int i = 0; i < n; i++) {
            sum += book[i].getPrice();
        }
        return sum / n;
    }
};
int Book::bookNum = 0; //��̬������ʼ��

void menu() {
    cout << "������������:" << endl;
    cout << "1.�������ͼ���У��۸���ߵ�ͼ�����Ϣ��" << endl;
    cout << "2.����ͼ����Ϣ����ӡ�" << endl;
    cout << "3.ɾ����Ӧͼ�����Ϣ��" << endl;
    cout << "4.�������ͼ���ƽ���۸�" << endl;
    cout << "5.�˳�����" << endl;
}