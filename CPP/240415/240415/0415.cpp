//十进制转换二进制
//#include<iostream>
//#include<string>
//using namespace std;
//string zh(int n)
//{
//	string x = "01";
//	string temp = "";
//	if (n < 0) 
//	{
//		return temp;
//	}
//	while (1)
//	{
//		temp = x[n % 2] + temp;
//		n /= 2;
//		if (n == 0)
//		{
//			return temp;
//		}
//	}
//
//}
//int main()
//{
//	int n;
//	cin >> n;
//	cout << zh(n);
//
//	return 0;
//}

//25位内的二进制数转换十进制
//#include<iostream>
//#include<string>
//#include<cmath>
//using namespace std;
//int main()
//{
//	string input;
//	int x,i,y,num=0;
//	getline(cin, input);
//	x = input.size();
//	for (i = 0; i < x; i++)
//	{
//		y = input[i] - '0';
//		num += y * pow(2, x - i - 1);
//	}
//	cout << num;
//
//	return 0;
//}


//正整数n转换为16进制
//#include<iostream>
//#include<string>
//using namespace std;
//string zh(long long n)
//{
//	string x = "0123456789ABCDEF";
//	string temp = "";
//	if (n < 0) 
//	{
//		return temp;
//	}
//	while (1)
//	{
//		temp = x[n % 16] + temp;
//		n /= 16;
//		if (n == 0)
//		{
//			return temp;
//		}
//	}
//}
//int main()
//{
//	long long n;
//	cin >> n;
//	cout << zh(n);
//
//	return 0;
//}

//十六进制转十进制
//#include<iostream>
//#include<string>
//#include<cmath>
//using namespace std;
//int main()
//{
//	string input;
//	long long x,i,y,num=0;
//	getline(cin, input);
//	x = input.size();
//	if (x > 10) {
//		return 0;
//	}
//	for (i = 0; i < x; i++)
//	{
//		if (input[i]>='0' && input[i] <= '9')
//		{
//			y = input[i] - '0';
//		}
//		else if(input[i]>='a' && input[i]<='f')
//		{
//			y = input[i] - 'a'+10;
//		}
//		else if (input[i] >= 'A' && input[i] <= 'F')
//		{
//			y = input[i] - 'A' + 10;
//		}
//		num += y * pow(16, x - i - 1);
//	}
//	cout << num;
//
//	return 0;
//}


//正整数n转换为8进制
//#include<iostream>
//#include<string>
//using namespace std;
//
//string zh(long long n)
//{
//	string c = "01234567";
//	string temp = "";
//	if (n < 0) {
//		return 0;
//	}
//	for (int i = 0; n > 0; i++) {
//		temp = c[n % 8] + temp;
//		n /= 8;
//	}
//	return temp;
//}
//
//int main()
//{
//	long long n;
//	cin >> n;
//	cout << zh(n);
//
//	return 0;
//}

//八进制转十进制
//#include<iostream>
//#include<string>
//#include<cmath>
//using namespace std;
//
//long long zh(string n)
//{
//	
//	long long y=0,num = 0,i=0;
//	while (n[i] != '\0'){
//		y = n[i] - '0';
//		num += y*pow(8, n.size() - i - 1);
//		i++;
//	}
//	return num;
//}
//
//int main()
//{
//	string n;
//	getline(cin, n);
//	cout << zh(n);
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<cmath>
//#define ll long long
//using namespace std;
//int main()
//{
//	string s;
//	cin >> s;
//	ll t = s.size();
//	ll t1 = s.size() - 1;
//	ll sum = 0;
//	for (ll i = 0; i < t; i++) {
//		int num = s[i] - '0';
//		sum += (ll)(num * pow(8, t1--));
//	}
//	cout << sum;
//	return 0;
//}


#include<iostream>
#include<cmath>
#include<string>
using namespace std;

string zh2(long long n)
{
	string x = "01";
		string temp = "";
		if (n < 0) 
		{
			return temp;
		}
		while (1)
		{
			temp = x[n % 2] + temp;
			n /= 2;
			if (n == 0)
			{
				return temp;
			}
		}
}
string zh8(long long n)
{
	string c = "01234567";
		string temp = "";
		if (n < 0) {
			return 0;
		}
		for (int i = 0; n > 0; i++) {
			temp = c[n % 8] + temp;
			n /= 8;
		}
		return temp;
}

string zh16(long long n)
{
	string x = "0123456789ABCDEF";
		string temp = "";
		if (n < 0) 
		{
			return temp;
		}
		while (1)
		{
			temp = x[n % 16] + temp;
			n /= 16;
			if (n == 0)
			{
				return temp;
			}
		}
}
int main()
{
	long long N, D;
	cin >> N >> D;
	switch(D)
	{
	case 2:
		cout << zh2(N);
		break;
	case 8:
		cout << zh8(N);
		break;
	case 16:
		cout << zh16(N);
		break;
	default:
		break;
	}
	return 0;
}