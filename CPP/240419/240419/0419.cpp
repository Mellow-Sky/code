//#include<iostream>
//#include<string>
//using namespace std;
//typedef  long long ll;
//int main()
//{
//	char* m[6][7] = { ... | ......_..... / .\.... | . | ....\_ / \........ };
//	string o = {".........._...../.\/...|.|....\_/\........"};
//	string p = {"...|......_...../.\....|.|....\_/.....|..."};
//	string x, temp = "";
//	int i;
//	for (i = 0; i < 6; i++) {
//		cin >> x;
//		temp = temp + x;
//	}
//	if (temp == m) {
//		cout << "m";
//	}
//	else if (temp == o) {
//		cout << "o";
//	}
//	else if (temp == p) {
//		cout << "p";
//	}
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	char m[] = "...|......_...../.\....|.|....\_/\........";
//	char o[] = ".........._...../.\/...|.|....\_/\........";
//	char p[] = "...|......_...../.\....|.|....\_/.....|...";
//	char x[43]="", temp[43]="";
//	int i;
//	/*for (i = 0; i < 42; i++) {
//		cin >> x[i];
//		temp[i] = temp[i] + x[i];
//	}*/
//	
//	char a[] = "123";
//	char b[] = "";
//	for(i=0;i<3;i++)
//	{
//		cin >> b;
//	}
//	if (strcmp(a, b) == 0) {
//		cout << "a";
//	}
//
//	if (strcmp(temp,m)==0){
//		cout << "m";
//	}
//	else if (strcmp(temp, o) == 0) {
//		cout << "o";
//	}
//	else if (strcmp(temp, p) == 0) {
//		cout << "p";
//	}
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	char m[] = "...|......_...../.\....|.|....\_/\........";
//	char o[] = ".........._...../.\/...|.|....\_/\........";
//	char p[] = "...|......_...../.\....|.|....\_/.....|...";
//	char x[43] = "", temp[43] = "";
//	int i;
//	for (i = 0; i < 42; i++) {
//		cin >> x[i];
//		temp[i] = temp[i] + x[i];
//	}
//	if (strcmp(temp,m)!=0) {
//		cout << "m";
//	}
//	else if (strcmp(temp, o)==0) {
//		cout << "o";
//	}
//	else if (strcmp(temp, p)==0) {
//		cout << "p";
//	}
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	char m[] = "...|......_...../.\....|.|....\_/\........";
//	char o[] = ".........._...../.\/...|.|....\_/\........";
//	char p[] = "...|......_...../.\....|.|....\_/.....|...";
//	char x[43] = "", temp[43] = "";
//	int i;
//	for (i = 0; i < 42; i++) {
//		cin >> x[i];
//		temp[i] = temp[i] + x[i];
//	}
//	int m1=0,o1=0,p1=0;
//	for (i = 0; i < 42; i++) {
//		if (temp[i] == m[i]) {
//			m1++;
//		}
//		else if (temp[i] == o[i]) {
//			o1++;
//		}
//		else if (temp[i] == p[i]) {
//			p1++;
//		}
//	}
//	if (m1 == 41) {
//		cout << "m";
//	}
//	else if (o1 == 41) {
//		cout << "o";
//	}
//	else if (p1 == 41) {
//		cout << "p";
//	}
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string m = { "...|......_...../.\....|.|....\_/\........" };
//	string o = { ".........._...../.\/...|.|....\_/\........" };
//	string p = { "...|......_...../.\....|.|....\_/.....|..." };
//	string n;
//	int i;
//	for (i = 0; i < 6; i++) {
//		cin >> n;
//	}
//	int m1=0,o1=0,p1=0,n1=0;
//	for (i = 0; i < 42; i++) {
//		m1 = m1 + m[i];
//		o1 = o1 + o[1];
//		p1 = p1 + p[i];
//		n1 = n1 + n[i];
//	}
//	if (n1==m1) {
//		cout << "m";
//	}
//	else if (n1 == o1) {
//		cout << "o";
//	}
//	else if (n1 == p1) {
//		cout << "p";
//	}
//	return 0;
//}
// 
// 
// 
// 
// 
// 
// 
// 第一题
//#include<iostream>
//using namespace std;
//int main()
//{
//	int i,temp=0;
//	char arr[10][10];
//	char out[] = "omp";
//	for (i = 0; i < 6; i++) {
//		cin >> &arr[i][0];
//	}
//	if (arr[0][3] == '|') {
//		temp++;
//	}
//	if (arr[5][3] == '|') {
//		temp++;
//	}
//	cout << out[temp];
//	return 0;
//}

//第二题
//#include<iostream>
//#include<cmath>
//using namespace std;
//void two()
//{
//	int n;
//	cin >> n;
//	n %= 4;
//	if (n == 1 || n == 2 || n == 3) {
//		cout << "Bing"<<endl;
//	}
//	else{
//		cout << "Bong"<<endl;
//	}
//}
//int main()
//{
//	int n;
//	cin >> n;
//	while (n--) {
//		two();
//	}
//	return 0;
//}

//第三题
#include<iostream>
using namespace std;
int main()
{


	return 0;
}