#include<iostream>
#include<string>
#include<algorithm>
#define NUM 3
using namespace std;
class Book
{
private:
	//����
	string Book_Name;
	//����
	string Book_Author;
	//������
	string Book_Publisher;
	//�۸�
	int Book_Price;
public:
	//���������Ϣ ʹ���вι��캯��
	void input(string name, string aut, string pub,int price);
	//��������Ϣ
	void output();
	int out_price;
};
//��¼��������
void Book::input(string name, string aut, string pub, int price)
{
	Book_Name = name;
	Book_Author = aut;
	Book_Publisher = pub;
	Book_Price = price;
	out_price = Book_Price;
}
//�����¼����
void Book::output()
{
	cout << "������" << Book_Name << "  ���ߣ�" << Book_Author 
		<< "  �����磺" << Book_Publisher << "  �۸�" << Book_Price << endl;
}
int main()
{
	Book ThreeBook[NUM];
	Book TEMP;
	int i, j, pri;
	string n, a, pub;
	cout << "��ֱ�����ͼ����Ϣ" << endl 
		<< "����  ����  ������  �۸�" << endl;
	for (i = 0; i < NUM; i++)
	{
		cin >> n >> a >> pub >> pri;
		ThreeBook[i].input(n, a, pub, pri);
	}
	//AWA//23034225������//QAQ//
	//��ͼ��۸��С��������
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
	//���������ͼ����Ϣ
	for (i = 0; i < NUM; i++)
	{
		ThreeBook[i].output();
	}
	return 0;
}
