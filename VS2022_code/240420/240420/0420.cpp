//#include<iostream>
//using namespace std;
//int main()
//{
//	int ch[] = { 0 };
//	int i;
//	for (i = 0; i < 5; i++) {
//		cin >> ch[i];
//	}
//
//
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//
//int zh(string n)
//{
//	int a, b, c;
//	a = n[3] - '0';
//	b = n[4] - '0';
//	c = n[5] - '0';
//	return a + b + c;
//}
//
//int main()
//{
//	string n;
//	cin >> n;
//	int x;
//	x = zh(n);
//	if (n[0] == 'A' && n[1] == 'B' && n[2] == 'C' && n.size() == 6 && x < 16 && x>0)
//	{
//		if ((n[3] == '3' && n[4] == '1' && n[5] == '6') || (n[3] == '3' && n[4] == '5' && n[5] == '0') )
//		{
//			cout << "No";
//		}
//		else if ((n[3] == '0' || n[3] == '1' || n[3] == '2' || n[3] == '3'))
//		{
//			if (n[3] == '3' && (n[4] - '0') < 5)
//			{
//				cout << "Yes";
//			}
//			else if(n[3] == '0' || n[3] == '1' || n[3] == '2')
//			{
//				cout << "Yes";
//			}
//			return 0;
//		}
//	}
//	cout << "No";
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int N, Q;
//	cin >> N >> Q;
//	int arr[1000] = { 0 };
//	int i,x;
//	for (i = 0; i < N; i++){
//		arr[i] += 1;
//	}
//	for (i = 0; i < Q; i++) {
//		cin >> x;
//		if(arr[x-1]==1)
//		{
//			arr[x-1] -= 1;
//		}
//		else if (arr[x-1] == 0) {
//			arr[x-1] += 1;
//		}
//	}
//	int temp=0;
//	for (i = 0; i < N; i++) {
//		if (arr[i] == 1) {
//			temp += 1;
//		}
//	}
//	cout << temp;
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//typedef long long ll;
//int main()
//{
//	string str;
//	
//	cin >> str;
//	ll l = str.size();
//	ll i;
//	int arr[500000];
//	ll z, y;
//	for (i = 0; i < l; i++) {
//		if (str[i] == '(') {
//			z++;
//		}
//	}
//
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//int zh(string str)
//{
//	int arr[1000000] = { 0 };
//	int l = str.size();
//	int i;
//	if ((str[3] > '0' && str[3] < '9') && (str[4] > '0' && str[4] < '9') && (str[5] > '0' && str[5] < '9'))
//	{
//		for (i = 3; i < l; i++) {
//			arr[i] = str[i] - '0';
//		}
//	}
//	int num;
//	num = arr[3] * 100 + arr[4] * 10 + arr[5];
//	return num;
//}
//int main()
//{
//	string str;
//	cin >> str;
//	int num;
//	num = zh(str);
//	if (num == 316 || num > 349 || num<1 ) {
//		cout << "No";
//		return 0;
//	}
//	cout << "Yes";
//	return 0;
//}
#include<iostream>
#include<string>
using namespace std;
string s;
int a = 0;
int main() {
	cin >> s;
	for (int i = 3; i <= 5; i++) {
		a = a * 10 + (s[i] - 48);
	}
	if (a < 001 || a>349 || a == 316) {
		cout << "No";
		return 0;
	}
	cout << "Yes";
	return 0;
}