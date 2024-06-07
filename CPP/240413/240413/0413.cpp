//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//bool cmp(int a, int b) {
//    return a > b; // Ωµ–Ú≈≈¡–
//}
//
//int main() {
//    int a[] = { 45, 12, 34, 77, 90, 11, 2, 4, 5, 55 };
//    sort(a, a + 10, cmp);
//    for (int i = 0; i < 10; i++) {
//        cout << a[i] << " ";
//    }
//    return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[10], max, i, j;
//	for ( i = 0; i < 10; i++)
//	{
//		cin >> arr[i];
//	}
//	for ( i = 0; i < 10; i++)
//	{
//		for ( j = 0; j < i ; j++)
//		{
//			if (arr[j] > arr[j + 1]) 
//			{
//				max = arr[j];
//			}
//			else
//			{ 
//				max = arr[j + 1];
//			}
//		}
//	}
//	cout << max << endl;
//	return 0;
//}


//
//#include<iostream>
//#include<climits>
//using namespace std;
//int main()
//{
//	int n, i, max = INT_MIN;
//	for (i = 0; i < 10; i++)
//	{
//		cin >> n;
//		if (n > max)
//			max = n;
//	}
//	cout << max << endl;
//
//	return 0;
//}



//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[3], i, j, temp;
//	for (i = 0; i < 3; i++)
//	{
//		cin >> arr[i];
//	}
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < i ; j++) {
//			if (arr[j] > arr[j + 1]) {
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	temp = 0;
//	for (i = 0; i < 3; i++)
//	{
//		temp++;
//		cout << arr[i] ;
//		if (temp == 3) {
//			break;
//		}
//		cout << " ";
//	}
//	cout << endl;
//	return 0;
//}


#include<iostream>
#include<algorithm>
using namespace std;
bool my(int x, int y)
{
	return x > y;
}
int main()
{
	int arr[5] = { 5,2,7,1,89 };
	sort(arr, arr+5);
	for (int i = 0; i < 5; i++) {
		cout << arr[i]<<" ";
	}
	return 0;
}