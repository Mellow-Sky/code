// #include<string>
// using namespace std;
// int main() {
// 	std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
// 	vector<int>a(200);
// 	string s;
// 	for(int i=1;i<=9;i++)cin>>a[i];
// 	cin>>s;
// 	for(int i=0;i<s.size();i++){
// 		int x=s[i]-'0';
// 		cout<<a[x];
// 	}
// 	return 0;
// }







// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// using ll=long long;
// int main()
// {
// 	std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
// 	int n;cin>>n;
// 	vector<ll>a(n);	
// 	for(int i=0;i<n;i++)cin>>a[i];
// 	int l=0,r=n-1;
// 	while( r-l>=2 ){
// 		ll mid=(l+r)/2;
// 		if(a[mid+1]+a[mid]>=a[mid+1]+a[mid+2]){
// 			a[mid]=a[mid+1]+a[mid];
// 			a.erase(a.begin()+mid+1);
// 			r--;
// 		}else {
// 			a[mid+1]=a[mid+1]+a[mid+2];
// 			a.erase(a.begin()+mid+2);
// 			r--;
// 		}
// 	}
// 	cout<<max(a[0],a[1])-min(a[0],a[1]);
// }




#include<iostream>
using namespace std;
const int N=2e5+10;
int ar[N];
int main()
{
    int n;
    scanf("%d",&n);
    int ant=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(i!=0)
        {
            if(ar[i-1]>ar[i])
            {
                ant=1;
                break;
            }
        }
    }
    if(ant)printf("%d\n",n);
    else printf("0\n");
     
    return 0;
}