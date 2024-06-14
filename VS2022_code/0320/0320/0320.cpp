/*
#include<iostream>
using namespace std;
int main()
{
	int add(int x,int y);
	double add(double x, double y );
	double add(int x,double y);
	int a,b,c;
	double d,e,f;
	cout<<"输入整数a,b,c的值:"<<endl;
	cin>>a>>b>>c;
	cout<<"a+b的值等于"<<add(a,b)<<endl;
	cout<<"输入小数d,e,f的值:"<<endl;
	cin>>d>>e>>f;
	cout<<"d+e的值等于"<<add(d,e)<<endl
		<<"c+f的值等于"<<add(c,f)<<endl;

	return 0;
}
int add(int x,int y)
{
	return x+y;
}
double add(double x,double y)
{
	return x+y;
}
double add(int x,double y)
{
	return (double)x+y;
}
*/



#include<iostream>
using namespace std;
struct date
{
	int year;
	int month;
	int day;
};
void printDate(struct date a);
void printDate();
int main()
{
	struct date a;
	cout<<"请分别输入日期(年月日):"<<endl;
	cin>>a.year>>a.month>>a.day;

	if((a.month>0 && a.month<13) && (a.day>0 && a.day<32) && a.year!=EOF){
	printDate(a);
	}
	else{
	printDate();
	}

	return 0;
}
void printDate(struct date a)
{
	cout<<a.year<<"-"<<a.month<<"-"<<a.day<<endl;
}
void printDate()
{
	cout<<"2024-10-1"<<endl;
}


/*
#include<iostream>
using namespace std;
void fun(int a);
void fun(int a,int b);
int main()
{
	int a,b;
	cout<<"请输入a,b的值";
	cin>>a>>b;
	fun(a);
	fun(a,b);

	return 0;
}
void fun(int a)
{
	int i;
	cout<<"100以内a的倍数"<<endl;
	for(i=1;i<=100;i++){
		if(i%a==0){
			cout<<i<<" ";
		}
	}
	cout<<endl;
}
void fun(int a,int b)
{
	int i;
	cout<<"100以内a和b的倍数"<<endl;
	for(i=1;i<=100;i++){
		if(i%a==0 && i%b==0){
			cout<<i<<" ";
		}
	}
	cout<<endl;
}
*/
