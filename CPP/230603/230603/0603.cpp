//#include <iostream>
//using namespace std;
//
//// ������
//class Car {
//protected:
//    int power; // ����
//    int seat;  // ��λ��
//
//public:
//    // ���캯��
//    Car(int s, int p = 10) : seat(s), power(p) {}
//    // ��ӡ��Ϣ
//    void print();
//};
//
//// С������
//class Van {
//protected:
//    int power;   // ����
//    double load; // �ؿ���
//
//public:
//    // ���캯��
//    Van(double l, int p = 10) : load(l), power(p) {}
//    // ��ӡ��Ϣ
//    void print();
//};
//
//// �ͻ����ó���
//class Wagon : public Car, public Van {
//public:
//    // ���캯��
//    Wagon(int p, int s, double l) : Car(s, p), Van(l, p) {}
//    // ��ӡ��Ϣ
//    void print();
//};
//
//// ��ӡС�ͳ���Ϣ
//void Car::print() {
//    cout << "С�ͳ�:" << endl;
//    cout << "����:" << power << endl;
//    cout << "��λ��:" << seat << endl;
//}
//
//// ��ӡС������Ϣ
//void Van::print() {
//    cout << "С����:" << endl;
//    cout << "����:" << power << endl;
//    cout << "�ؿ���:" << load << endl;
//}
//
//// ��ӡ�ͻ����ó���Ϣ
//void Wagon::print() {
//    cout << "�ͻ����ó�:" << endl;
//    cout << "����:" << Car::power << endl;
//    cout << "��λ��:" << seat << endl;
//    cout << "�ؿ���:" << load << endl;
//}
//
//int main() {
//    // ����һ���ͻ����ó����󲢴�ӡ��Ϣ
//    Wagon w(500, 4, 800);
//    w.print();
//
//    return 0;
//}
//
//
//
//
//
//#include<iostream>
//using namespace std;
//
//// ͼ����
//class graph {
//protected:
//	double height;  // ��
//	double weight;  // ��
//public:
//	// Ĭ�Ϲ��캯��
//	graph() : height(0), weight(0) {}
//	// ���ι��캯��
//	graph(double h, double w) : height(h), weight(w) {}
//	// �������캯��
//	graph(const graph& t) : height(t.height), weight(t.weight) {}
//	// ���øߺͿ�
//	void setgraph(double h, double w) { height = h; weight = w; }
//	// չʾ�ߺͿ�
//	void show() {
//		cout << "height is:" << height << endl;
//		cout << "weight is:" << weight << endl;
//	}
//	// ��ȡ��
//	double put_h() { return height; }
//	// ��ȡ��
//	double put_w() { return weight; }
//};
//
//// �����࣬�̳���ͼ����
//class squar :public graph {
//public:
//	// ����������
//	double area() { return weight * height; }
//	// ���캯��
//	squar(double h, double w) : graph(h, w) {}
//	// Ĭ�Ϲ��캯��
//	squar() {}
//};
//
//// �������࣬�̳���ͼ����
//class delta :public graph {
//public:
//	// �������������
//	double area() { return weight * height / 2; }
//	// ���캯��
//	delta(double h, double w) : graph(h, w) {}
//	// Ĭ�Ϲ��캯��
//	delta() {}
//};
//
//int main()
//{
//	// ����һ�����ζ���չʾ��Ϣ
//	squar s(4, 5);
//	s.show();
//	cout << "�������:" << s.area() << endl;
//
//	// ����һ�������ζ���չʾ��Ϣ
//	delta d(4, 5);
//	d.show();
//	cout << "���������:" << d.area() << endl;
//
//	// ���������εĸߺͿ�չʾ��Ϣ
//	d.setgraph(5, 6);
//	d.show();
//	cout << "���������:" << d.area() << endl;
//	return 0;
//}
//
