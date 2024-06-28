#include<iostream>
#include<string>
#include<algorithm>
int main(){
    std::string s{"qwert"};
    std::rotate(s.begin(), s.begin() + 1, s.end());
    std::cout << s << "\n";
    return 0;
}