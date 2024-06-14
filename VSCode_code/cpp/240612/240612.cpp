// #include<iostream>
// #include<memory>

// int main()
// {
//     std::shared_ptr<int> sharedptr = std::make_shared<int>(30);
//     std::cout << *sharedptr << '\n';
//     //std::cout << sharedptr << '\n';
//     std::weak_ptr<int>weakptr = sharedptr;
//     std::cout << *weakptr << '\n';
    

//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// int main()
// {
//     int n, m;
//     std::cin >> n >> m;
//     std::vector<int>a(m);
//     for(int i = 0; i < m; i++){
//         std::cin >> a[i];
//     }
//     std::sort(a.begin(), a.end());
//     for(auto &i :a){
//         std::cout << i << " ";
//     }
//     return 0;
// }




// #include<iostream>
// #include<vector>
// #include<algorithm>
// int main()
// {
//     int n;
//     std::cin >> n;
//     vector<int>a(n);
//     for(int i = 0; i < n; i++){
//         std::cin >> a[i];
//     }
//     std::sort(a.begin(), a.end());
//     for(auto &i : a){
//         std::cout << i << " ";
//     }
//     return 0;
// }


// #include<iostream>
// #include<vector>

// void merge(std::vector<int> &a, int l, int mid, int r){
//     int nx = mid - l + 1;
//     int ny = r - mid;
//     std::vector<int>P(nx);
//     std::vector<int>Q(ny);
//     for(int i = 0; i < nx; i++){
//         P[i] = a[l + i];
//     }
//     for(int i = 0; i < ny; i++){
//         Q[i] = a[mid + i + 1];
//     }
//     int i = 0, j = 0, k = l;
//     while(i < nx && j < ny){
//         if(P[i] <= Q[j]){
//             a[k] = P[i++];
//         }else{
//             a[k] = Q[j++];
//         }
//         k++;
//     }
//     while(i < nx){
//         a[k++] = P[i++];
//     }
//     while(j < ny){
//         a[k++] = Q[j++];
//     }
// }


// void merge_sort(std::vector<int> &a, int l, int r){
//     if(l < r){
//         int mid = (l + r) >> 1;
//         merge_sort(a, l, mid);
//         merge_sort(a, mid + 1, r);
//         merge(a, l, mid, r);
//     }
// }

// int main(){
//     std::ios::sync_with_stdio(0),std::cin.tie(0),std::cout.tie(0);
//     int n;
//     std::cin >> n;
//     std::vector<int>a(n);
//     for(int i = 0; i < n; i++){
//         std::cin >> a[i];
//     }
//     merge_sort(a, 0, a.size() - 1);
//     for(auto &i: a){
//         std::cout << i << " ";
//     }
//     return 0;
// }




// #include<iostream>
// #include<set>
// int main()
// {
//     int n;
//     std::cin >> n;
//     std::set<int>st;
//     for(int i = 0; i < n; i++){
//         int x;
//         std::cin >> x;
//         st.insert(x);
//     }
//     std::cout << st.size() << std::endl;
//     for(auto &i :st){
//         std::cout << i << " ";
//     }

//     return 0;
// }






#include<iostream>
#include<vector>
using namespace std;



int main(){
    int n;
    cin >> n;
    vector<pair<int, int>>a(n + 1);
    for(int i = 1; i <= n; i++){
        int x, y, z;
        cin >> x >> y >> z;
        int sum = x + y + z;
        a[i].first = i;
        a[i].second = sum;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            if(a[j].second< a[j + 1].second )
                swap(a[j], a[j + 1]);
        }
    }
    for(int i = 1; i <= 5; i++){
        cout << a[i].first << " " << a[i].second << '\n';
    }

    return 0;
}