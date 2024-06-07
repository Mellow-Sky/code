#include<iostream>
#include<string>
using namespace std;
typedef long long ll;
const int N = 1e6 + 10;
string scale_10_2(int m, char s2, int i)
{//仅限用于2 8 16 进制之间的转换
	string ans = "";
	int n;
	if (m == 8)n = 3;
	if (m == 16)n = 4;
	int tmp = 0;
	if (s2 >= 'A') tmp = s2 - 'A' + 10;
	else tmp = s2 - '0';
	while (tmp)
	{
		char x = tmp % 2 + '0';
		ans = x + ans;
		tmp /= 2;
	}
	if (i != 0)while ((int)ans.size() < n)ans = '0' + ans;
	return ans;
}
string scale_2_10(string s)
{//没开long long 的2进制转10进制
	int ans = 0;
	string re = "";
	for (int i = 0; i < (int)s.size(); i++) {
		int tmp = s[i] - '0';
		ans += tmp * pow(2, s.size() - i - 1);
	}
	char x;
	if (ans >= 10)x = ans - 10 + 'A';
	else x = ans + '0';
	return re + x;//字符转字符串
}
string scale_8_16_2(int m, string s1)
{//仅限用于8 16 进制转2进制
	string ans = "";
	if (s1 == "0") 
	{
		cout << 0; return 0; 
	}
	int len = s1.size();
	for (int i = 0; i < len; i++)
	{
		string x = scale_10_2(m, s1[i], i);
		ans += x;
	}
	return ans;
}
string scale_2_8_16(string s1, int m)
{//仅限用于2进制转8 16进制
	if (m == 8)m = 3;
	else if (m == 16)m = 4;
	string s2 = "";
	string ans;
	int len = s1.size();
	for (int i = 0; i < len; i++)
	{
		if ((i + 1) <= len % m)
		{//特殊情况，长度不是正好的位数，特判一下第一位
			s2 += s1[i];//把2进制的字符串存到s2
			if (i + 1 == len % m)
			{
				ans += scale_2_10(s2);//2进制字符串转换成10进制数
				s2 = "";
			}
			continue;
		}
		else
		{//正常情况
			s2 += s1[i];
			if ((i + 1 - len % m) % m != 0)continue;
			ans += scale_2_10(s2);
			s2 = "";
		}
	}
	return ans;
}
void smoking()
{
	string s1; 
	cin >> s1;
	if (s1 == "0")
	{ 
		cout << 0; return; 
	}
	string s2 = scale_8_16_2(16, s1);
	cout << scale_2_8_16(s2, 8);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	int _ = 1;
	// cin >> _;
	while (_--)
		smoking();
	return 0;
}