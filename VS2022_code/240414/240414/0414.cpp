//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string str = "www";
//	string ll;
//	int x,y;
//	x = str.size();
//	getline(cin, ll);
//	cout << x<<"\n";
//	cout << ll << endl;
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string str;
//	getline(cin, str);
//	cout << str << endl;
//
//	return 0;
//}

#include <iostream>
#include<string>
using namespace std;

int sub_len(string s) {
    int mem[256] = { 0 };
    int ans = 0, start = 0, i;
    for (i = 0; i < s.size(); i++) {
        if (mem[s[i]] == 0 || mem[s[i]] < start) {
            ans = max(ans, i - start + 1);
        }
        else {
            start = mem[s[i]];
        }
        mem[s[i]] = i + 1;
    }
    return ans;
}

int main() {
    string s;
    cout << "请输入字符串：";
    getline(cin, s);
    cout << "最长不重复子串的长度为：" << sub_len(s);
}
