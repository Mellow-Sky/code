//#include<iostream>
//#include<deque>
//#include<string>
//using namespace std;
//typedef long long ll;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	string str;
//	ll  k,n;
//	cin >> n >> k;
//	cin >> str;
//	deque<char>q1, q2;
//	bool ok = 0;
//	ll size = ((ll)str.size());
//	if (n < size) {
//		return 0;
//	}
//	for (ll i = 0; i < size; i++) {
//		if (str[i] == '|') {
//			ok = 1;
//			continue;
//		}
//		if (ok == 0) {
//			q1.push_back(str[i]);
//		}
//		else q2.push_back(str[i]);
//	}
//	while (k--) {
//		string s;
//		cin >> s;
//		if (s == "backspace") {
//			if (q1.back() == '(' && q2.front() == ')') {
//				q1.pop_back();
//				q2.pop_front();
//			}
//			else if (q1.empty() == 0) {
//				q1.pop_back();
//			}
//		}
//		else if (s == "delete") {
//			if (q1.empty() == 0) {
//				q2.pop_front();
//			}
//		}
//		else if (s == ">") {
//			if (q2.empty() == 0) {
//				q1.push_back(q2.front());
//				q2.pop_front();
//			}
//		}
//		else if (s == "<") {
//			if (q1.empty() == 0) {
//				q2.push_front(q1.back());
//				q1.pop_back();
//			}
//		}
//	}
//	deque<char>::iterator it;
//	for (it = q1.begin(); it != q1.end(); it++) {
//		cout << *it;
//	}
//	cout << "|";
//	for (it = q2.begin(); it != q2.end(); it++) {
//		cout << *it;
//	}
//	return 0;
//}


/*
#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<map>
#include<deque>
#include<cstdio>
#include<cstdlib>
#include<limits>
#include<iomanip>
*/

/*
#include<iostream>
#include<array>
using namespace std;
int main(){
	array<int, 5>a{};
	array<int, 5>::iterator it=a.begin();
	for (it = a.begin(); it != a.end();it++) {
		cin >> *it;
	}
	for (it = a.begin(); it != a.end(); it++) {
		cout << *it;
	}

	return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;



int main()
{
	int n;
	cin >> n;
	if(n>=1 && n<=6){
		while (n--) {
			string str;
			cin >> str;
			if (str == "bca" || str == "cab") {
				cout << "NO";
				continue;
			}
			else if (str == "abc" || str == "acb" || str == "bac" || str == "cba") {
				cout << "YES";
				continue;
			}
			else
				cout << "NO";
		}
	}	
	return 0;
}
*/
#include<iostream>
using namespace std;
void good()
{
	int x,i,j;
	int arr[10] = { 0 };
	int max=0;
	cin >> x;
	for (i = 0; i < x; i++) {
		cin >> arr[i];
	}
	int num = 1;
	for (i = 0; i < x; i++) {
		num = 1;
		for (j = 0; j < x; j++) {
			arr[i]++;
			num = num * arr[j];
		}
		if(num>max){
			max = num;
		}
	}
	cout << max;
}
int main()
{
	int t;
	cin >> t;
	while (t--) {
		good();
	}
	return 0;
}