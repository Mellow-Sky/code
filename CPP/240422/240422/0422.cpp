
//背包问题

//#include<iostream>
//#include<cstdlib>
//using namespace std;
//int m, n, i, j;
//int w[1000], c[1000], f[1000][1000];
//int main()
//{
//	cin >> m >> n;//m代表背包最大能装的重量，n代表物品的数量
//	for (i = 1; i <= n; i++) {
//		cin >> w[i] >> c[i];//输入每个物品的重量和价值
//	}
//	//i控制物品，j控制重量
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= m; j++) {
//			if (j >= w[i]) {
//				f[i][j] = max(f[i - 1][j - w[i]] + c[i], f[i - 1][j]);
//			}
//			else{
//				f[i][j] = f[i - 1][j];
//			}
//		}
//	}
//	cout << f[n][m] << endl;
//
//	return 0;
//}

//#include<iostream>
//#include<cstdlib>
//using namespace std;
//int i, j, t, m;
//int f[200][200], mtime[200], price[200];
//int main()
//{
//	cin >> t >> m;//t代表总时间，m代表草药总数目
//	for (i = 1; i <= m; i++) {
//		cin >>mtime[i] >> price[i];
//	}
//	//i控制草药数目，j控制采集的时间
//	for (i = 1; i <= m; i++) {
//		for (j = 1; j <= t; j++) {
//			if (j >= mtime[i]) {
//				f[i][j] = max(f[i - 1][j - mtime[i]] + price[i], f[i - 1][j]);
//			}
//			else {
//				f[i][j] = f[i - 1][j];
//			}
//		}
//	}
//	cout << f[m][t] << endl;
//	return 0;
//}


//#include<iostream>
//#include<cstdlib>
//using namespace std;
//int main()
//{
//	int i, j, m, n;
//	int f[200][200], weight[200], price[200];
//	cin >> m >> n;
//	for (i = 1; i <= n; i++) {
//		cin >> weight[i] >> price[i];
//	}
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= m; j++) {
//			if (j >= weight[i]) {
//				f[i][j] = max(f[i - 1][j - weight[i]] + price[i], price[i]);
//			}
//			else {
//				f[i][j] = f[i - 1][j];
//			}
//		}
//	}
//	cout << f[n][m] << endl;
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//#define N 2//示例为十进制转换二进制，其他进制需要把2修改
//string conversion(int num_10)
//{
//	if (num_10 == 0) {
//		string str = "0";
//		return str;
//	}
//	string temp = "";
//	string num_N = "01";//示例为十进制转换二进制，因此在""内为01，若为八进制则改为01234567
//	int i;
//	for (i = 0; num_10 != 0; i++) {
//		temp = num_N[num_10 % N] + temp;
//		num_10 /= N;
//	}
//	return temp;
//}
//int main()
//{
//	int num_10;
//	string num_N;
//	cin >> num_10;
//	num_N=conversion(num_10);
//	cout << num_N << endl;
//	return 0;
//}



//N进制转十进制
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
#define N 2//示例为二进制转换十进制
int conversion(string num_N)
{
	int i;
	int size = num_N.size();
	int num=0,temp=0;
	for (i = 0; i < size; i++) {
		temp = num_N[i] - '0';
		num = num + temp * pow(N, size - i - 1);
	}
	return num;
}
int main()
{
	string num_N;
	int num_10;
	cin >> num_N;
	num_10 = conversion(num_N);
	cout << num_10 << endl;
	return 0;
}