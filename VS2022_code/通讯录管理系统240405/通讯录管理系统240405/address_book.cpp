#include"address.h"

//������ʵ��

//�˵�����
void menu() {
	cout << "*****************" << endl;
	cout << "***1.�����ϵ��***" << endl;
	cout << "***2.��ʾ��ϵ��***" << endl;
	cout << "***3.ɾ����ϵ��***" << endl;
	cout << "***4.������ϵ��***" << endl;
	cout << "***5.�޸���ϵ��***" << endl;
	cout << "***6.�����ϵ��***" << endl;
	cout << "***0.�Ƴ�ͨѶ¼***" << endl;
	cout << "*****************" << endl;
}
//�����ϵ��
void Add_Contact(person mp)
{
	cout << "����������:";
	cin >> mp.name;
	cout << endl << "��ѡ���Ա�:" << endl << "1.��" << endl << "2.Ů" << endl;
	cin >> mp.sex;
	cout << endl << "����������:" << endl;
	cin >> mp.age;
	cout << endl << "������绰����:" << endl;
	cin >> mp.number;
	cout << endl << "�������ַ:" << endl;
	cin >> mp.home;
}
//��ʾ��ϵ��
void Show_contact()
{
	person mp;
	cout << "����:" << mp.name << "�Ա�:" << mp.sex;
}