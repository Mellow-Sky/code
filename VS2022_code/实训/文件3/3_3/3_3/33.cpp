//2����Դ�ļ��У���д��������
//���������У�����ͼ���������Ȼ������ÿһ��ͼ�����Ϣ���������ͼ�����Ϣ���ռ۸��С�������ð�ݷ����򣬲��������Ļ�ϡ�
//�û����Ը�������Ĳ�����ţ������������²�����
//1.�������ͼ���У��۸���ߵ�ͼ�����Ϣ��
//2.���û����������λ�ã�����ͼ����Ϣ����ӡ�
//3.���û����������λ�ã�ɾ����Ӧͼ�����Ϣ��
//4.�������ͼ���ƽ���۸�
//5.�˳����������
#include"book.h"

int main() {
	int n;
	cout << "������ͼ�������:" << endl;
	cin >> n;
	vector<Book>book(n);
	for (int i = 0; i < n; i++) {
		string name, author, publisher;
		double price;
		cout << "������ͼ������ ������ ���� �۸�:" << endl;
		cin >> name >> publisher >> author >> price;
		book[i].setName(name);
		book[i].setPublisher(publisher);
		book[i].setAuthor(author);
		book[i].setPrice(price);
	}
	//����
	bubbleSort(book, n);
	//���������ͼ����Ϣ
	cout << "ȫ��ͼ����Ϣ:" << endl;
	for (int i = 0; i < n; i++) {
		cout << "����" << book[i].getName() << " " << "������" << book[i].getPublisher() 
			<< " " << "����" << book[i].getAuthor() << " " << "�۸�" << book[i].getPrice() << endl;
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
				cout << "�۸���ߵ�ͼ����Ϣ:" << endl;
				cout << "����" << book[n - 1].getName() << " " << "������" << book[n - 1].getPublisher()
					<< " " << "����" << book[n - 1].getAuthor() << " " << "�۸�" << book[n - 1].getPrice() << endl;
				system("pause");
				break;
			}
			case 2:{
				int pos;
				cout << "������Ҫ��ӵ�λ��:" << endl;
				cin >> pos;
				if (pos < 0 || pos > n) {
					cout << "�����λ�ó�����Χ��" << endl;
					system("pause");
					break;
				}
				string name, publisher, author;
				double price;
				cout << "������ͼ������:" << endl;
				cin >> name;
				cout << "������ͼ�������:" << endl;
				cin >> publisher;
				cout << "������ͼ������:" << endl;
				cin >> author;
				cout << "������ͼ��۸�:" << endl;
				cin >> price;
				Book newBook(name, publisher, author, price);
				book.insert(book.begin() + pos, newBook);
				bubbleSort(book, n + 1);
				n++;
				cout << "ͼ����Ϣ��ӳɹ���" << endl;
				system("pause");
				break;
			}
			case 3:{
				int index;
				cout << "������Ҫɾ����ͼ������:" << endl;
				cin >> index;
				if (index < 0 || index >= n) {
					cout << "�������ų�����Χ��" << endl;
				}
				else {
					remove(book, index);
					n--;
					cout << "ͼ����Ϣɾ���ɹ���" << endl;
				}
				system("pause");
				break;
			}
			case 4:{
				cout << "ͼ��ƽ���۸�Ϊ��" << getAveragePrice(book, n) << endl;
				system("pause");
				break;
			}
			case 5:{
				cout << "�����˳���" << endl;
				system("pause");
				break;
			}
			default:{
				cout << "����Ĳ����������" << endl;
				system("pause");
				break;
			}
		}
	}
	return 0;
}