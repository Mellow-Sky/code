#include <vector>
#include <iostream>
int main () {
    std::vector<int> a;
    a.push_back(1);
    a.push_back(3);
    std::cout << *a.begin();
}