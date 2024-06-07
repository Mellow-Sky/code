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
/*
#include<iostream>
using namespace std;
void good()
{
	int x, i, j;
	int arr[100] = { 0 };
	int max = 0;
	cin >> x;
	for (i = 0; i < x; i++) {
		cin >> arr[i];
	}
	int num = 1;
	bool b=1;
	for (i = 0; i < x; i++) {
		num = 1;
		if(b==1){
			arr[i]++;
			b = 0;
		}
		for (j = 0; j < x; j++) {
			
			num = num * arr[j];
		}
		if (num > max) {
			max = num;
		}
		if (b == 0) {
			arr[i]--;
			b = 1;
		}
	}
	cout << max<<"\n";
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
*/
/*
#include<iostream>
using namespace std;
void ba()
{
	char ch[10][10];
	int i, j;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			cin >> ch[i][j];
		}
	}
	int num = 0;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (i == 0 || i == 9) {
				if (ch[i][j] == 'X') {
					num = num + 1;
					continue;
				}
			}

			if (i == 1 || i == 8) {
				if (j == 0 || j == 9) {
					if (ch[i][j] == 'X') {
						num = num + 1;
						continue;
					}
				}
				else{
					if (ch[i][j] == 'X') {
						num = num + 2;
						continue;
					}
				}
			}

			if (i == 2 || i == 7) {
				if (j == 0 || j == 9) {
					if (ch[i][j] == 'X') {
						num = num + 1;
						continue;
					}
				}
				if (j == 1 || j == 8) {
					if (ch[i][j] == 'X') {
						num = num + 2;
						continue;
					}
				}
				if (j >= 2 && j <= 7) {
					if (ch[i][j] == 'X') {
						num = num + 3;
						continue;
					}
				}
			}

			if (i == 3 || i == 6) {
				if (j == 0 || j == 9) {
					if (ch[i][j] == 'X') {
						num = num + 1;
						continue;
					}
				}
				if (j == 1 || j == 8) {
					if (ch[i][j] == 'X') {
						num = num + 2;
						continue;
					}
				}
				if (j == 2 || j == 7) {
					if (ch[i][j] == 'X') {
						num = num + 3;
						continue;
					}
				}
				if (j >= 3 && j <= 6) {
					if (ch[i][j] == 'X') {
						num = num + 4;
						continue;
					}
				}
			}

			if (i == 4 || i == 5) {
				if (j == 0 || j == 9) {
					if (ch[i][j] == 'X') {
						num = num + 1;
						continue;
					}
				}
				if (j == 1 || j == 8) {
					if (ch[i][j] == 'X') {
						num = num + 2;
						continue;
					}
				}
				if (j == 2 || j == 7) {
					if (ch[i][j] == 'X') {
						num = num + 3;
						continue;
					}
				}
				if (j == 3 || j == 6) {
					if (ch[i][j] == 'X') {
						num = num + 4;
						continue;
					}
				}
				if (j == 4 || j == 5) {
					if (ch[i][j] == 'X') {
						num = num + 5;
						continue;
					}
				}
			}

		}
	}
	cout << num << "\n";
}
int main()
{
	int n;
	cin >> n;
	if(n>=1&&n<=1000)
	{
		while (n--) {
			ba();
		}
	}
	return 0;
}
*/
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	if (n >= 1 && n <= 6) {
//		while (n--) {
//			string str;
//			cin >> str;
//			if (str == "bca" || str == "cab") {
//				cout << "NO" << "\n";
//				continue;
//			}
//			else if (str == "abc" || str == "acb" || str == "bac" || str == "cba") {
//				cout << "YES" << "\n";
//				continue;
//			}
//			else
//				cout << "NO" << "\n";
//		}
//	}
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//void era()
//{
//	int n, k,i;
//	cin >> n >> k;
//	string str;
//	cin >> str;
//	int temp=0;
//	for (i = 0; i < n; i++) {
//		if (str[i] == 'B') {
//			i = i + k - 1;
//			temp++;
//		}
//	}
//	cout << temp << "\n";
//}
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--) {
//		era();
//	}
//	return 0;
//}
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//int aqu()
//{
//	int n, x;
//	cin >> n >> x;
//	int i, j;
//	long long a[2000];
//	for (i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	sort(a, a + n);
//	for (i = 2; 1; i++) {
//		for (j = 0; j<n; j++) {
//			if (i - a[j] > 0) {
//				x--;
//			}
//			if (x == 0) {
//				cout << i << "\n";
//				return 1;
//			}
//		}
//	}
//}
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--) {
//		aqu();
//	}
//	return 0;
//}

#include<iostream>
using namespace std;
void tree()
{
	int n, k;
	cin >> n >> k;
	int arr[10000];
	int i;
	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
}

int main()
{
	int tt; cin >> tt;
	while (tt--) {
		tree();
	}
	return 0;
}