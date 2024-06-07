//#include<iostream>
//#include<string>
//using namespace std;
//using ll = long long;
//string s1 = "COFFEE";
//string s2 = "CHICKEN";
//int sizes1 = s1.size();
//int sizes2 = s2.size();
//
//string str()
//{
//	string sn = s1 + s2;
//	for (int i = 0; i < 30; i++) {
//		sn += sn;
//	}
//	return sn;
//}
//
//void vol()
//{
//	ll n, k; cin >> n >> k;
//	if (n == 1 ) {
//		for (int i = 0; i < k; i++) {
//			cout << s1[i];
//		}
//		cout << '\n';
//		return;
//	}
//	if (n == 2) {
//		for (int i = 0; i < k; i++) {
//			cout << s2[i];
//		}
//		cout << '\n';
//		return;
//	}
//	string sn = str();
//}
//
//int main()
//{
//	int tt; cin >> tt;
//	while (tt--) {
//		vol();
//	}
//
//	return 0;
//}



//#include<iostream>
//using namespace std;
//int a[5], b[5];
//
//void vol()
//{
//	for (int i = 0; i < 5; i++) {
//		cin >> a[i] >> b[i];
//	}
//
//
//
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int t; cin >> t;
//	while (t--) {
//		vol();
//	}
//
//	return 0;
//}


//题目与斐波那契数列有关
//但是因为Sn的增长到后面过于爆炸，因此不能直接求Sn然后求十个字符
//需要转换一下长度,请观察下面的规律
//A 1 B 1 AB 2 BA 3 ABBAB 5 BABABBAB 8 ABBABBABABBAB  13 BABABBABABBABBABABBAB  21 ABBABBABABBABBABABBABABBABBABABBAB 34 BABABBABABBABBABABBABBABABBABABBABBABABBAB 45
//可以知道当前指向的位置大于a[n-2]就可以求a[n-1]的第k-a[n-2]个数（上面的数一数），如果小于等于a[n-2]就等于求a[n-2]的第几个数
#include<iostream>
using namespace std;
using ll = long long;
ll a[700];
//mello函数记录Sn的字符串长度的值
void mello() {
    a[1] = 6;//6是COFFEE的长度
    a[2] = 7;//7是CHICKEN的长度
    for (int i = 3; i <= 60; i++) {
        a[i] = a[i - 1] + a[i - 2];//循环记录Sn的长度
    }
}

int main() {
    mello();
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        //对于大于60的n，我们只需要取小的值替代即可，奇数用59，偶数用58
        //为什么用60？因为k最多到1e12，当Sn大于58时长度就超过了1e12
        if (n >= 60) {
            if (n % 2) n = 59;
            else n = 58;
        }

        for (ll i = k; i <= a[n] && i < k + 10; i++) {
            ll w = i, v = n;//w追踪当前位置，v追踪当前项
            while (v != 1 && v != 2) {//不断递归减小，直到v选择COFFEE或CHICKEN
                if (w > a[v - 2]) {
                    w = w - a[v - 2];
                    v -= 1;
                }
                else {
                    v -= 2;
                } 
            }
            if (v == 1) printf("%c", "COFFEE"[w - 1]);
            else if (v == 2) printf("%c", "CHICKEN"[w - 1]);
        }
        printf("\n");
    }
    return 0;
}
