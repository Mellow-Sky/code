// #include<iostream>
// using namespace std;
// int m, n, a[11][11];
// int nx[4]={0,1,0,-1};
// int ny[4]={1,0,-1,0};

// void mellow(int x, int y, int k)
// {
//     a[x][y] = k;
//     for(int i = 0; i < 4; i++){
//         if( ( (x + nx[i]<= m) && (y + ny[i]<= n) && (x + nx[i]> 0) && (y + ny[i]> 0) ) && a[x + nx[i]][y + ny[i]] == 0){
//             mellow(x + nx[i], y + ny[i], k + 1);
//         }
//     }
// }

// int main()
// {
//     std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//     cin >> m >> n;

//     mellow(1, 1, 1);

//     for(int i = 1; i <= m; i++){
//         for(int j = 1; j <= n; j++){
//             printf("%3d",a[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;
const int N = 102;
int n;
vector<vector<int> >a(N, vector<int>(N));

int nx[4] = {0, 0, 1, -1};
int ny[4] = {1, -1, 0, 0};

void dfs(int x, int y, int ch)
{
    a[x][y] = ch;
    for(int i = 0; i < 4; i++){
        if(x + nx[i] <= n && x + nx[i] > 0 && y + ny[i] <= n && y + ny[i] > 0 && a[x + nx[i]][y + ny[i]] == 0){
            dfs(x + nx[i], y + ny[i], 6);
        }
    }
}
int main()
{
    std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++) cin >> a[i][j];
    
    int x1, y1, x2, y2;cin >> x1 >> y1 >> x2 >> y2;
    if(a[x1][y1] == 1) {
        cout << "NO";
        return 0;
    }

    dfs(x1, y1, 6);
    
    if(a[x2][y2] == 6) cout << "YES";
    else cout << "NO";

    return 0;
}