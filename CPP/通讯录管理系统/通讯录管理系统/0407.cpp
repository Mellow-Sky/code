#include<iostream>
using namespace std;
#include<string>
#define MAX 1000


//�����ϵ�˽ṹ��
struct Person
{
	//����
	string Name;
	//�Ա�  1.�� 2.Ů
	int Sex;
	//����
	int Age;
	//�绰
	string Phone;
	//סַ
	string Addr;
};

//���ͨѶ¼�ṹ��
struct Address_Books
{
	//ͨѶ¼�б������ϵ������
	struct Person personArray[MAX];
	//ͨѶ¼�е�ǰ��¼��ϵ�˸���
	int size;
};
//�˵�����
void showmenu()
{
	cout << "***** 1.�����ϵ�� *****" << endl;
	cout << "***** 2.��ʾ��ϵ�� *****" << endl;
	cout << "***** 3.ɾ����ϵ�� *****" << endl;
	cout << "***** 4.������ϵ�� *****" << endl;
	cout << "***** 5.�޸���ϵ�� *****" << endl;
	cout << "***** 0.�˳�ϵͳ   *****" << endl;
}

//�����ϵ��
void addPerson(Address_Books *abs)
{
	//�ж�ͨѶ¼����ϵ���Ƿ�����
	if (abs->size == MAX) 
	{
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	}
	else
	{
		//��Ӿ�����ϵ��

		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->size].Name = name;
		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1---��" << endl;
		cout << "2---Ů" << endl;
		int sex;
		while(true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->size].Sex = sex;
				break;
			}
				cout << "������������������" << endl;
		}
		//����
		cout << "����������" << endl;
		int age;
		while (true)
		{
			cin >> age;
			if (age > 0 && age < 150) {
				abs->personArray[abs->size].Age = age;
				break;
			}
			cout << "������������������" << endl;
		}
		//�绰
		cout << "��������ϵ�绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->size].Phone = phone;
		//��ַ
		cout << "�������ͥסַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->size].Addr = address;
		abs->size++;

		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");
	}

}

int main()
{
	//����ͨѶ¼�ṹ�����
	Address_Books abs;
	//��ʼ��ͨѶ¼��ǰ��Ա����
	abs.size = 0;

	int select=0;//�û���ѡ��
	
	while(1)
	{
		showmenu();
		cout << "��ѡ��";
		cin >> select;
		switch (select)
		{
		case 1:
			addPerson(&abs);//���ݵ�ַ
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