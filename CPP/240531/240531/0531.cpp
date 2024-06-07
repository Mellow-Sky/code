#include<iostream>
using namespace std;

class car {
private:
	int wheels;
	double weight;
public:
	car(int input_wheels, double input_weight);
	int getwheels();
	double getweight();
	void print();
};
car::car(int input_wheels, double input_weight) {
	wheels = input_wheels;
	weight = input_weight;
}
int car::getwheels() { return wheels; }
double car::getweight() { return weight; }
void car::print() {
	cout << "车轮数量:" << wheels << endl;
	cout << "车重:" << weight << endl;
}

class small_car :private car {
private:
	int max_person;
public:
	small_car(int input_wheels, double input_weight, int input_max_person);
	int getmax_person();
	void print();
};
small_car::small_car(int input_wheels, double input_weight, int input_max_perosn) :car(input_wheels, input_weight) {
	//car::car(input_wheels, input_weight);
	max_person = input_max_perosn;
}
int small_car::getmax_person() { return max_person; }
void small_car::print() {
	cout << "小车:" << endl;
	car::print();
	cout << "最大载客量:" << max_person << endl;
}

class truck :private car {
private:
	int max_person;
	double max_weight;
public:
	truck(int input_wheels, double input_weight,int input_max_person,double input_max_weight);
	double get_max_weight();
	double effi();
	void print();
};
truck::truck(int input_wheels, double input_weight, int input_max_person, double input_max_weight) :car(input_wheels, input_weight) {
	max_person = input_max_person;
	max_weight = input_max_weight;
}
double truck::get_max_weight() { return max_weight; }
double truck::effi() {
	return max_weight / (max_weight + getweight());
}
void truck::print() {
	cout << "卡车:" << endl;
	car::print();
	cout << "最大载客量:" << max_person << endl;
	cout << "最大载重:" << max_weight << endl;
	cout << "效率:" << effi() * 100 << "%" << endl;
}

int main()
{
	small_car c1(4, 900, 5);
	truck t1(8, 10000, 3, 300000);
	c1.print();
	t1.print();

	return 0;
}