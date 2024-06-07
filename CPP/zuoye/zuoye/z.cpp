#include<iostream>
using namespace std;
class Complex
{
public:
	Complex(double r, double i);//构造函数
	Complex(Complex &c);
	Complex add(Complex c);
	void Output();
private:
	double real, image;
};
Complex::Complex(double r, double i)
{
	real = r; image = i;
	cout << "调用两个参数的构造函数" << "\n";
}
Complex::Complex(Complex& c)
{
	real = c.real; image = c.image;
	cout << "调用拷贝构造函数" << "\n";
}
Complex Complex::add(Complex c)
{
	Complex y = (real + c.real, image + c.image);
	return y;
}
void f(Complex n)
{
	cout << "n=";
	n.Output();
}
void Complex::Output()
{
	cout << "(" << real << "," << image << ")" << "\n";
}
int main()
{
	Complex a(3.0, 4.0), b(5.6, 7.9);
	Complex c(a);
	cout << "a=";
	a.Output();
	cout << "c=";
	c.Output();
	f(b);
	c = a.add(b);
	c.Output();
	return 0;
}