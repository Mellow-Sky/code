//#include<iostream>
//#include<string>
//using namespace std;
//void ab()
//{
//	string str;
//	cin >> str;
//	long long temp = 0 , i, size = str.size();
//	if (size >= 1 && size <= 200000) {
//		for (i = 0; i < size; i++) {
//			if (str[i] == 'A' && str[i + 1] == 'B') {
//				str[i] = 'B';
//				str[i + 1] = 'C';
//				temp++;
//				i = -1;
//				continue;
//			}
//			if (str[i] == 'B' && str[i + 1] == 'A') {
//				str[i] = 'C';
//				str[i + 1] = 'B';
//				temp++;
//				i = -1;
//				continue;
//			}
//		}
//		cout << temp << "\n";
//	}
//}
//int main()
//{
//	long long tt;
//	cin >> tt;
//	if (tt >= 1 && tt <= 1000) {
//		while (tt--) {
//			ab();
//		}
//	}
//	return 0;
//}




//
//#include<iostream>
//using namespace std;
//class Complex
//{
//public:
//	Complex(double r, double i);//构造函数
//	Complex(Complex& c);
//	Complex add(Complex c);
//	void Output();
//private:
//	double real, image;
//};
//Complex::Complex(double r, double i)
//{
//	real = r; image = i;
//	cout << "调用两个参数的构造函数" << "\n";
//}
//Complex::Complex(Complex& c)
//{
//	real = c.real; image = c.image;
//	cout << "调用拷贝构造函数" << "\n";
//}
//Complex Complex::add(Complex c)
//{
//	Complex y = (real + c.real, image + c.image);
//	return y;
//}
//void f(Complex n)
//{
//	cout << "n=";
//	n.Output();
//}
//void Complex::Output()
//{
//	cout << "(" << real << "," << image << ")" << "\n";
//}
//int main()
//{
//	Complex a(3.0, 4.0), b(5.6, 7.9);
//	Complex c(a);
//	cout << "a=";
//	a.Output();
//	cout << "c=";
//	c.Output();
//	f(b);
//	c = a.add(b);
//	c.Output();
//	return 0;
//}
//
//




/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	while (n--)
	{
		int tt;
		cin >> tt;
		vector<int>a(tt + 1);
		for (int i = 1; i <= tt; i++) cin >> a[i];
		int l = a[1];
		int m = a[tt];
		sort(a.begin() + 1, a.end());
		if (l == a[1] || m == a[tt]) cout << "YES"<<"\n";
		else cout << "NO"<<"\n";
	}
	return 0;
}*/	

//#include<iostream>
//#include<vector>
//using namespace std;
//int main() {
//
//	int n, m; cin >> n >> m;
//	vector<int>a(n + 1);
//	for (int i = 1; i <= n; i++) cin >> a[i];
//
//	for (int i = 1; i <= n; i++) {
//		a[i] += a[i - 1];
//	}
//	while (m--) {
//		int l, r; cin >> l >> r;
//		cout << a[r] - a[l - 1];
//	}
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int n, m; cin >> n >> m;
//	vector<int>a(n + 1);
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//	}
//	vector<int>b(n + 1);
//	b[1] = 1;
//	for (int i = 2; i <= n; i++) {
//		if (a[i] == a[i - 1]) {
//			b[i] = b[i - 1];
//		}
//		else {
//			b[i] = b[i - 1] + 1;
//		}
//	}
//	while (m--) {
//		int l, r; cin >> l >> r;
//		cout << b[r] - b[l] + 1 << '\n';
//	}
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<cstdlib>
//using namespace std;
//int n, w, i, j;
//int main()
//{
//	cin >> w >> n;
//	//定义容器列为几号物品，行为重量
//	vector<vector<int>>f(n + 1, vector<int>(w+1,0));
//	//定义重量与价值的容器
//	vector<int>weight(n +1);
//	vector<int>price(n + 1);
//	//输入
//	for ( i = 1; i <= n; i++) {
//		cin >> weight[i] >> price[i];
//	}
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= w; j++) {
//			if (j >= weight[i]) {
//				f[i][j] = max(f[i - 1][j - weight[i]] + price[i], f[i - 1][j]);//比较和比这个物品重量小的物品的价值的和，和上一个物品价值的值哪个大
//			}
//			else {
//				f[i][j] = f[i - 1][j];//否则返回上一个物品的价值
//			}
//		}
//	}
//	cout << f[n][w] << "\n";
//	return 0;
//}

#include <iostream>
#include <vector>
#include<cstdlib>
using namespace std;

int max_sum_pyramid(int N, vector<vector<int>>& pyramid) {
    // Initialize a 2D vector to store the maximum sum
    vector<vector<int>> dp(N, vector<int>(N, 0));

    // Initialize the last row of dp with the values from the pyramid
    dp[N - 1] = pyramid[N - 1];

    // Iterate from second last row to the top
    for (int i = N - 2; i >= 0; --i) {
        for (int j = 0; j <= i; ++j) {
            // Update dp[i][j] with the maximum sum from the two adjacent numbers below
            dp[i][j] = pyramid[i][j] + max(dp[i + 1][j], dp[i + 1][j + 1]);
        }
    }

    // The maximum sum is stored in dp[0][0]
    return dp[0][0];
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> pyramid(N, vector<int>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= i; ++j) {
            cin >> pyramid[i][j];
        }
    }

    // Calculate the maximum sum
    int result = max_sum_pyramid(N, pyramid);

    // Print the result
    cout << result << endl;

    return 0;
}
