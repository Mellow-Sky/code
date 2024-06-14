// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//     int n;cin >> n;
//     vector<int> a(n + 1);
//     for(int i = 1; i <= n; i++) cin >> a[i];

//     vector<int> b(n + 1, 0);
//     for(int i = 1;i <= n;i++) b[i]=b[i - 1]+a[i];

//     int x;cin >> x;
//     while( x-- ){
//         int l, r;cin >> l >> r;
//         cout << b[r] - b[l - 1] << '\n';
//     }
    
//     return 0;
// }





// #include<iostream>
// #include<vector>
// using namespace std;
// int n;
// int che(int x1,int y1, vector<vector<int> > &b)
// {
//     int ma1 = 0;
//     for(int i = 1; i <= x1; i++)
//         for(int j = 1; j <= y1; j++) {
//           ma1 = max(ma1, b[x1][y1] - b[i - 1][y1] - b[x1][j - 1] + b[i - 1][j - 1]); 
//         }
//     return ma1;
// }

// int main()
// {
//     std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//     cin >> n;
//     vector<vector<int> >a(n + 1, vector<int>(n + 1, 0));
//     vector<vector<int> >b(n + 1, vector<int>(n + 1, 0));
//     for(int i = 1; i <= n; i++)
//         for(int j = 1; j <= n; j++) cin >> a[i][j];
    
//     for(int i = 1; i <= n; i++)
//         for(int j = 1; j <= n; j++) b[i][j] = b[i-1][j] + b[i][j-1] - b[i-1][j-1] + a[i][j];
    
//     int ma = b[1][1];
//     for(int i = 1; i <= n; i++)
//         for(int j = 1; j <= n; j++) {
           
//             ma=max(ma, che(i, j, b));
//         }
//     cout << ma;
//     return 0;
// }





// //洛谷 进击的奶牛
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// const int N=0x3f3f3f3f;
// using ll = long long;

// ll n, c;
// vector<ll>a(1);

// bool check(ll mid){
//     ll num = 0;
//     ll nn = 1;
//     for(ll i = 2; i <= n; i++){
//         num += a[i] - a[i - 1];
//         if(num >= mid) {
//             nn++;
//             num = 0;
//         }
//         if(nn >= c) return true;
//     }
//     return false;
// }

// int main()
// {
//     std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//     cin >> n >> c;
//     a.resize(n + 1);
//     for(ll i = 1;i <= n; i++) cin >> a[i];
//     sort(a.begin(), a.end());

//     ll l = 0,r = N;
//     while(l < r){
//         ll mid = (l + r + 1) >> 1;
//         if(check(mid)) l = mid;
//         else r = mid - 1;
//     }
//     cout << l <<'\n';
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;

// void vol()
// {
//     int n;cin >> n;
//     vector<int>a(n + 1, 0);
//     int cnt = 0;
//     int x;
//     for(int i = 1; i <= n; i++){
//         cin >> x;
//         a[x]++;
//         if(a[x]==2) cnt++;
//     }
//     cout << cnt <<'\n';
// }
// int main()
// {
//     std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//     int t;cin >> t;
//     while(t--){
//         vol();
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void vol()
// {
//     int n, a, b;cin >> n >> a >> b;
//     if(2 * a > b){
//         if(n % 2 == 0) {
//             cout << (n / 2) * b << '\n';return;
//         }else{
//             cout << ((n / 2) * b) + a << '\n';return;
//         }
//     }else{
//         cout << n * a << '\n';return;
//     }
// }
// int main()
// {
//     std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//     int t;cin >> t;
//     while(t--){
//         vol();
//     }
//     return 0;
// }






// #include<string>
// #include<iostream>
// using namespace std;

// int main()
// {
//     string s="student12";
//     string x = s.substr();       //默认时的长度为从开始位置到尾
//     string y = s.substr(5);      //获得字符串s中 从第5位开始到尾的字符串
//     string z = s.substr(5, 3);    //获得字符串s中 从第5位开始的长度为3的字符串
//     cout <<  x << endl;
//     cout << y << endl;
//     cout << z << endl;
//     return 0;

// }









// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// const int N = 1e9;
// int n,c;
// vector<int>a(1);
// bool check(int mid)
// {
//     int nn = 1;
//     int num = 0;
//     for(int i = 2;i <= n;i++){
//         num += a[i] - a[i-1];
//         if(num >= mid){
//             nn++;
//             num = 0;
//         }
//         if(nn >= c) return true;
//     }
//     return false;
// }
// int main()
// {
//     std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//     cin >> n >> c;
//     a.resize(n + 1 );
//     for(int i = 1; i <= n; i++) cin >> a[i];
//     sort(a.begin(), a.end());
//     int l = 1, r = N;
//     while(l < r){
//         int mid = (l + r + 1) >> 1;
//         if(check(mid)) l = mid;
//         else r = mid - 1; 
//     }
//     cout << l;
//     return 0;
// }



#include<iostream>
#include<vector>
using namespace std;
const int N = 11;//因为n和m是2~9的数所以周围留下了一圈

int n,m;
vector<vector<int> >a(N,vector<int>(N, 0));

//递归深搜
void dfs(int x, int y, int k)//为（x,y）赋k值
{
    a[x][y] = k;
    //按照题目要求的右下左上的顺序依次设计判断x与y的加减依次对应了右下左上
    if(y + 1 <= m && a[x][y + 1] == 0){
        dfs(x, y + 1, k + 1);
    }else if(x + 1 <= n && a[x + 1][y] == 0){
        dfs(x + 1, y, k + 1);
    }else if(y - 1 > 0 && a[x][y - 1] == 0){
        dfs(x, y - 1, k + 1);
    }else if(x - 1 > 0 && a[x - 1][y] == 0){
        dfs(x - 1, y, k + 1);
    }
}

int main()
{
    std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    //输入行列
    cin >> n >> m;
    //赋初值
    dfs(1, 1, 1);//依题意设计函数dfs为(1,1)赋值为1,dfs函数赋值的点是我们搜索开始的最初点
    //输出
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
}