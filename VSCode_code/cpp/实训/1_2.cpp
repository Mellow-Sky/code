//2、设计一个函数，完成百分制分数向五分制分数转换的功能，并通过键盘录入百分制分数的方式实现对该函数的调用与测试。
#include<iostream>
using namespace std;
int main(){
    double n;
    cin >> n;
    if(n >= 90){
        cout << "优秀\n";
    }else if(n >= 80 && n < 90){
        cout << ""
    }else if(n >= 70 && n < 80){

    }else if(n >= 60 && n < 70){

    }else if(n >= 0 && n < 60){

    }

    return 0;
}