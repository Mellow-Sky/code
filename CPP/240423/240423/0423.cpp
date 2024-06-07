//#include<iostream>
//#include<string>
//#include<cstdlib>
//#include<cmath>
//using namespace std;
//int main()
//{
//	string str;
//	cin >> str;
//	int x;
//	x = count(str.begin(), str.end(),'a');
//	cout << x;
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string str;
//	cin >> str;
//	int num = 0;
//	int size = str.size();
//	int i,temp=0;
//	for (i = 0; i < size; i++) {
//		num = num * 10 + (str[i] - '0');
//		num %= 9;
//		if (num == 0) {
//			temp++;
//		}
//	}
//	cout << temp;
//	return 0;
//}
//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main()
//{
//	double p;
//	double x;
//	cin >> p;
//	x = p * p * (1 - p) * (1 - p);
//	printf("%.6lf", x);
//	return 0;
//}





#include<iostream>
#include<deque>
#include<string>
using namespace std;
typedef long long ll;
int main()
{
	string str;
	cin >> str;
	ll  k;
	cin >> k;
	deque<char>q1, q2;
	bool ok = 0;
	int size = (int)str.size();
	for (int i = 0; i < size; i++) {
		if (str[i] == '|') {
			ok = 1;
			continue;
		}
		if (ok == 0) {
			q1.push_back(str[i]);
		}
		else q2.push_back(str[i]);
	}
	while (k--) {
		string s;
		cin >> s;
		if (s == "backspace") {
			if (q1.back() == '(' && q2.front() == ')') {
				q1.pop_back();
				q2.pop_front();
			}
			else if (q1.empty() != 0) {
				q1.pop_back();
			}
		}
		else if (s == "delete") {
			if (q1.empty() != 0) {
				q1.pop_back();
			}
		}
		else if (s == "<") {
			if (q1.empty() != 0) {
				q2.push_front(q1.back());
				q1.pop_back();
			}
		}
		else if (s == ">") {
			if (q2.empty() != 0) {
				q1.push_back(q2.front());
				q2.pop_front();
			}
		}
	}
	deque<char>::iterator it;
	for (it = q1.begin(); it != q1.end(); it++) {
		cout << *it;
	}
	cout << "|";
	for (it = q2.begin(); it != q2.end(); it++) {
		cout << *it;
	}

	return 0;
}