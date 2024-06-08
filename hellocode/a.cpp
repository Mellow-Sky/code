//#include <iostream>
//#include<vector>
//using namespace std;
//
//int main() {
//    vector<int>a(6);
//    for(int i=1;i<=5;i++){cin>>a[i];}
//    for(int i=1;i<=5;i++){cout<<a[i];}
//    std::cout << "Hello, World!" << std::endl;
//    return 0;
//}


#include<iostream>
#include<algorithm>
using namespace std;
int a[5]={1,2,3,4,6};
int main()
{
    std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    sort(a,a+5);
    
    return 0;
}