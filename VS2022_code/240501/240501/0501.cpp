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


//��Ŀ��쳲����������й�
//������ΪSn��������������ڱ�ը����˲���ֱ����SnȻ����ʮ���ַ�
//��Ҫת��һ�³���,��۲�����Ĺ���
//A 1 B 1 AB 2 BA 3 ABBAB 5 BABABBAB 8 ABBABBABABBAB  13 BABABBABABBABBABABBAB  21 ABBABBABABBABBABABBABABBABBABABBAB 34 BABABBABABBABBABABBABBABABBABABBABBABABBAB 45
//����֪����ǰָ���λ�ô���a[n-2]�Ϳ�����a[n-1]�ĵ�k-a[n-2]�������������һ���������С�ڵ���a[n-2]�͵�����a[n-2]�ĵڼ�����
#include<iostream>
using namespace std;
using ll = long long;
ll a[700];
//mello������¼Sn���ַ������ȵ�ֵ
void mello() {
    a[1] = 6;//6��COFFEE�ĳ���
    a[2] = 7;//7��CHICKEN�ĳ���
    for (int i = 3; i <= 60; i++) {
        a[i] = a[i - 1] + a[i - 2];//ѭ����¼Sn�ĳ���
    }
}

int main() {
    mello();
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        //���ڴ���60��n������ֻ��ҪȡС��ֵ������ɣ�������59��ż����58
        //Ϊʲô��60����Ϊk��ൽ1e12����Sn����58ʱ���Ⱦͳ�����1e12
        if (n >= 60) {
            if (n % 2) n = 59;
            else n = 58;
        }

        for (ll i = k; i <= a[n] && i < k + 10; i++) {
            ll w = i, v = n;//w׷�ٵ�ǰλ�ã�v׷�ٵ�ǰ��
            while (v != 1 && v != 2) {//���ϵݹ��С��ֱ��vѡ��COFFEE��CHICKEN
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
