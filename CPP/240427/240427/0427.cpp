//#include<iostream>
//#include<cstdio>
//using namespace std;
//string a1, a2;
//int main()
//{
//	cin >> a1;
//	cin >> a2;
//	int size1 = a1.size();
//	int size2 = a2.size();
//	int num1 = 0, num2 = 0;
//	for (int i = 0; i < size1; i++) {
//		num1 += a1[i] - '0';
//	}
//	for (int i = 0; i < size2; i++) {
//		num2 += a2[i] - '0';
//	}
//	cout << num1 - num2 + 1<<'\n';
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int a[9], b[8];
//	int num1=0, num2=0;
//	for (int i = 0; i < 9; i++) {
//		cin >> a[i];
//		num1 += a[i];
//	}
//	for (int i = 0; i < 8; i++) {
//		cin >> b[i];
//		num2 += b[i];
//	}
//	if (num1 - num2 >= 0) {
//		cout << num1 - num2 + 1;
//	}
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	long long n; cin >> n;
//	long long n2 = 2 * n;
//	char arr[200][200];
//	for (long long i = 1; i <= n2; i++) {
//		for (long long j = 1; j <= n; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	for (long long i = 1; i <= n; i++) {
//		for (long long j = 1; j <= n; j++) {
//			if (arr[i][j] == arr[i + n][j]) continue;
//			else{
//				cout << i << " " << j << '\n';
//				return 0;
//			}
//		}
//	}
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//int main() {
//    int n;
//    cin >> n;
//    vector<vector<char>>a(2 * n, vector<char>(n + 1));
//    for (int i = 0; i < 2 * n; i++) {
//        for (int j = 0; j < n; j++) {
//            cin >> a[i][j];
//        }
//    }
//    for (int i = 0; i <  n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (a[i][j] != a[n + i][j]) {
//                cout << i + 1 << " " << j + 1;
//            }
//        }
//    }
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//void vol()
//{
//	int n; cin >> n;
//	vector<int>arr;
//	for (int i = 0; i < n; i++) {
//		int a; cin >> a;
//		arr.push_back(a);
//		while (arr.size() >= 2) {
//			if (arr.back() == arr[arr.size() - 2]) {
//				int x = arr.back() + 1;
//				arr.pop_back();
//				arr.pop_back();
//				arr.push_back(x);
//			}
//			else break;
//		}
//	}
//	cout << arr.size() << "\n";
//}
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int n = 1;
//	while (n--) {
//		vol();
//	}
//	return 0;
//}
#include<iostream>
#include<string>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	string str[1005];
	int n, i; cin >> n;
	for (i = 0; i < n; i++) cin >> str[i];

	return 0;
}