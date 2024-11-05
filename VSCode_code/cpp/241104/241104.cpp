// #include<iostream>
// using namespace std;
// int n,m;
// struct sh
// {
// 	int x=0;
	
// }sh1[5000];
// int main()
// {
// 	cin >> n;
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> m;
// 		sh1[m].x++;
// 	}
// 	for (int i = 0; i < 5000; i++)
// 	{
// 		if (sh1[i].x >= 1)
// 		{
// 			cout << i << " " << sh1[i].x<<endl;
// 		}
// 	}
// 	return 0;
// }

#include <iostream>
#include <map>
int main () {
    int n;
    std::cin >> n;
    std::map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        mp[x]++;
    }
    for (auto i : mp) {
        std::cout << i.first << " " << i.second << "\n";
    }
    return 0;
}