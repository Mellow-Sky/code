//#include<iostream>
//using namespace std;
//class book
//{
//public:
//	book()
//	{
//		cout << "类的无参构造函数" << endl;
//	}
//	book(int a)
//	{
//		b = a;
//		cout << "类的有参构造函数" << b << endl;
//	
//	}
//	book(const book& b)
//	{
//		cout << "类的拷贝构造函数" << b.b << endl;
//	}
//	int b;
//};
//void test()
//{
//	//括号法
//	book b1;
//	book b2(10);
//	book b3(b2);
//
//	//显示法
//	book b4;
//	book b5 = book(10);
//	book b6 = book(b5);
//
//	//隐式转换法
//	book b7 = 10;
//	book b8 = b7;
//}
//int main()
//{
//	test();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class person
//{
//public:
//	~person()
//	{
//		cout << "类的析构函数" << endl;
//	}
//};
//void test()
//{
//	person p1;
//}
//int main()
//{
//	test();
//	person p2;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//typedef long long ll;
//string conversion(ll n)
//{
//	string temp = "";
//	string a = "01234567";
//	int arr[4] = { 0,1,2,4 };
//	int i, j=1;
//	int x=0,p=1;
//	for(i=0;1;i++)
//	{
//		if (n % 10 == 1)
//		{
//			x = x + arr[j++];
//			n /= 10;
//		}
//		else if(n == 0 && p==3)
//		{
//			break;
//		}
//		else 
//		{
//			n /= 10;
//			j++;
//		}
//		if (i == 2)
//		{
//			temp = a[x] + temp;
//			x = 0;
//			j = 1;
//			i = 0;
//			p++;
//		}
//	}
//
//	return temp;
//}
//int main()
//{
//	ll n;
//	cin >> n;
//	cout << conversion(n);
//	return 0;
//}

//利用栈实现十进制转换N进制
//#include<iostream>
//#include<stack>
//#include <cstdio>
//typedef long long ll;
//using namespace std;
//char change(ll x)
//{
//	if (x <= 9) {
//		return x + '0';
//	}
//	else {
//		return x - 10 + 'A';
//	}
//}
//void conversion(ll num, ll n)
//{
//	stack<char> st;
//	if (num == 0) {
//		st.push(0);
//	}
//	else {
//		while (num) {
//			st.push(change(num % n));
//			num / n;
//		}
//	}
//	while (!st.empty()){
//		printf("%c", st.top());
//		st.pop();
//	}
//}
//int main()
//{
//	ll num;
//	cin >> num;
//	conversion(num, 16);
//}

//#include<iostream>
//#include<string>
//#include<cmath>
//using namespace std;
//typedef long long ll;
//ll conversion2_10(string n)
//{
//	int i;
//	ll y, num=0;
//	for (i = 0; i < n.size(); i++)
//	{
//		y = n[i] - '0';
//		num = num + y * pow(2, n.size() - i - 1);
//	}
//	return num;
//}
//string conversion(string n)
//{	
//	string temp = "";
//	ll num = conversion2_10(n);
//	string num1 = "01234567";
//	while (1)
//	{
//		temp = num1[num % 8] + temp;
//		num /= 8;
//		if (num == 0)
//		{
//			return temp;
//		}
//	}
//}
//int main()
//{
//	string n;
//	cin >> n;
//	cout << conversion(n);
//	return 0;
//}


//二进制转十六进制
//#include<iostream>
//#include<cmath>
//using namespace std;
//typedef long long ll;
//
//ll conversion2_10(string n)
//{
//	int i;
//	ll num=0, y;
//	for (i = 0; i < n.size(); i++)
//	{
//		y = n[i] - '0';
//		num = num + y * pow(2, n.size() - i - 1);
//	}
//	return num;
//}
//string conversion(string n)
//{
//	string temp = "";
//	string num = "0123456789ABCDEF";
//	ll x = conversion2_10(n);
//	while (1)
//	{
//		temp = num[x % 16] + temp;
//		x /= 16;
//		if(x==0)
//		{
//			return temp;
//		}
//	}
//}
//int main()
//{
//	string n;
//	cin >> n;
//	cout << conversion(n);
//
//	return 0;
//}

//八进制转换二进制
//#include<iostream>
//#include<string>
//#include<cmath>
//using namespace std;
//typedef long long ll;
//ll conversion8_10(string n)
//{
//	ll y, num = 0;
//	int i;
//	for (i = 0; i < n.size(); i++)
//	{
//		y = n[i] - '0';
//		num = num + y * (ll)pow(8, n.size() - i - 1);
//	}
//	return num;
//}
//string conversion(string n)
//{
//	string temp = "";
//	string num = "01";
//	ll x = conversion8_10(n);
//	while (1)
//	{
//		temp = num[x % 2] + temp;
//		x /= 2;
//		if (x == 0)
//		{
//			return temp;
//		}
//	}
//}
//int main()
//{
//	string n;
//	cin >> n;
//	cout << conversion(n);
//	return 0;
//}

//十六进制转二进制
//#include<iostream>
//#include<string>
//#include<cmath>
//using namespace std;
//typedef long long ll;
//
//ll conversion16_10(string n)
//{
//	int i;
//	ll y,num=0;
//	for (i = 0; i < n.size(); i++)
//	{
//		if (n[i] >= '0' && n[i] <= '9')
//		{
//			y = n[i] - '0';
//		}
//		else if (n[i] >= 'A' && n[i] <= 'Z')
//		{
//			y = n[i] + 10 - 'A';
//		}
//		num = num + y * (ll)pow(16, n.size() - i - 1);
//	}
//	return num;
//}
//string conversion(string n)
//{
//	string temp = "";
//	string num = "01";
//	ll x = conversion16_10(n);
//	while (1)
//	{
//		temp = num[x % 2] + temp;
//		x /= 2;
//		if (x == 0)
//		{
//			return temp;
//		}
//	}
//}
//int main()
//{
//	string n;
//	cin >> n;
//	if(n.size()<=100)
//	{
//		cout << conversion(n);
//	}
//	return 0;
//}

//十六进制转换八进制
//#include<iostream>
//#include<string>
//#include<cmath>
//using namespace std;
//typedef unsigned long long ll;
//ll mypow(ll x, ll y)
//{
//	ll num=1;
//	ll i;
//	for (i = 0; i < y; i++)
//	{
//		num *= 16;
//	}
//	return num;
//}
//static ll* conversion16_10(string n)
//{
//	static ll y[100000] = {0};
//	static ll num[100000] = {0};
//	ll i;
//	for (i = 0; i < n.size(); i++)
//	{
//		if (n[i] >= '0' && n[i] <= '9')
//		{
//			y[i] = n[i] - '0';
//		}
//		else if (n[i] >= 'A' && n[i] <= 'F')
//		{
//			y[i] = n[i] + 10 - 'A';
//		}
//		num[i] = num[i] + y[i] * mypow(16, n.size() - i - 1);
//	}
//	return num;
//}
//string conversion(string n)
//{
//	string temp = "";
//	string num = "01234567";
//	ll x[100000] = conversion16_10(n);
//	int i=0;
//	while (1)
//	{
//		temp = num[x[i] % 8] + temp;
//		i++;
//		x[i] /= 8;
//		if (x[i] == 0 && temp[0] != '0')
//		{
//			return temp;
//		}
//	}
//}
//int main()
//{
//	string n;
//	cin >> n;
//	if (n[0] != '0' && n.size() <= 100000)
//	{
//		cout << conversion(n);
//	}
//	return 0;
//}
//3456789ABCDEFABCDEFABCABC
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	int x, y;
//	cin >> n;
//	x = n % 10;
//	y = n / 10;
//	int num = x + y;
//	cout << num;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	int x, y;
//	cin >> n;
//	x = n % 10;
//	y = n / 10;
//	if(n>9)
//	{
//		x *= 10;
//	}
//	cout << x+y;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int x, y, z;
//	int num;
//	if (n >= 100 && n <= 999) {
//		x = n % 10;
//		y = n % 100 / 10;
//		z = n / 100;
//		num = x + y + z;
//	}
//	cout << num;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int x, y, z;
//	int num;
//	if (n >= 100 && n <= 999) {
//		x = n % 10;
//		x = x * 100;
//		y = n % 100 / 10;
//		y = y * 10;
//		z = n / 100;
//		num = x + y + z;
//	}
//	cout << num;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int x;
//	cin >> x;
//	int g, s, b, q;
//	g = x % 10;
//	s = x % 100 / 10;
//	b = x / 100 % 10;
//	q = x / 1000;
//	int num = g + s + b + q;
//	cout << num;
//	return 0;
//}

//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	double x, y;
//	x = n % 10;
//	y = n / 10;
//	if(n>=10 && n<=99)
//	{
//		cout << setiosflags(ios::fixed) << setprecision(1) << y / x;
//	}
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n, sum, g, s, b;
//	cin >> n;
//	g = n % 10;
//	s = n / 10 % 10;
//	b = n / 100;
//	sum = 100 * g + 10 * s + b;
//	cout << n + sum;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n, g, s, b, q, sum;
//	cin >> n;
//	if (n >= 1000 && n <= 9999)
//	{
//		g = n % 10;
//		s = n % 100 / 10;
//		b = n / 100 % 10;
//		q = n / 1000;
//		sum = 1000*g + 100*s + 10*b + q;
//		cout << sum;
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n, g, s, b, q, w, sum;
//	cin >> n;
//	g = n % 10;
//	s = n % 100 / 10;
//	b = n % 1000 / 100;
//	q = n % 10000 / 1000;
//	w = n / 10000;
//	sum = g + s + b + q + w;
//	cout << sum;
//	return 0;
//}
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	int n, g, s, b, bs,sg;
//	cin >> n;
//	g = n % 10;
//	s = n % 100 / 10;
//	b = n / 100;
//	bs = b + s;
//	sg = s + g;
//	cout << setiosflags(ios::fixed) << setprecision(2) << 1.0*bs / sg;
//	return 0;
//}
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	double x, y, z;
//	cin >> x >> y >> z;
//	cout << setiosflags(ios::fixed) << setprecision(1) << x * 8.5 + y * 5.6 + z * 6.2;
//	return 0;
//}
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	int n, g, s, b, q;
//	int x, y;
//	cin >> n;
//	g = n % 10;
//	s = n % 100 / 10;
//	if(g!=0 || s!=0)
//	{
//		b = n / 100 % 10;
//		q = n / 1000;
//		x = g + s * 10;
//		y = b + q * 10;
//		cout << x + y << endl;
//		cout << setiosflags(ios::fixed) << setprecision(1) << 1.0 * y / x;
//	}
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	int g, s, b, q, w, sw;
//	cin >> n;
//	sw = n / 100000;
//	w = n / 10000 % 10;
//	q = n / 1000 % 10;
//	b = n / 100 % 10;
//	s = n / 10 % 10;
//	g = n % 10;
//	cout << sw << endl << w << endl << q << endl << b << endl << s << endl << g;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	int g, s, b, q;
//	int sum;
//	cin >> n;
//	g = n % 10;
//	s = n / 10 % 10;
//	b = n / 100 % 10;
//	q = n / 1000;
//	g = (g + 5) % 10;
//	s = (s + 5) % 10;
//	b = (b + 5) % 10;
//	q = (q + 5) % 10;
//	sum = g * 1000 + s * 100 + b * 10 + q;
//	cout << sum;
//	return 0;
//}