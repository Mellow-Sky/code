//#include<iostream>
//
//using namespace std;
//
//void quickSort_num1(int arr[], int star, int end) {
//    //确定左右指针的位置
//    int left = star, right = end;
//    //设置基准点
//    int base = arr[star];
//    if (left < right) {
//        while (left < right) {
//            //先让由指针不断往左寻找比 base 小的值,找到了便交换
//            //如果没找到,此时left = right 等于没交换
//            while (left < right && arr[right] >= base) {
//                right--;
//            }
//            arr[left] = arr[right];
//            //先让由指针不断往右寻找比 base 大的值,找到了便交换
//            //如果没找到,此时left = right 等于没交换
//            while (left < right && arr[left] <= base) {
//                left++;
//            }
//            arr[right] = arr[left];
//        }
//        //arr[right] = base 也可以,因为最终left=right
//        arr[left] = base;
//        //接着再让分割好的两个小区间进行上述操作
//        //左边区间为比base小的值
//        quickSort_num1(arr, star, left - 1);
//        //右边区间为比base大的值
//        quickSort_num1(arr, left + 1, end);
//    }
//}
//
////采用分治的方法,先找分割点
////partition为寻找分割点的函数
//int partition(int arr[], int left, int right) {
//    int base = arr[left];
//    while (left < right) {
//        //先让由指针不断往左寻找比 base 小的值,找到了便交换
//        //如果没找到,此时left = right 等于没交换
//        while (left < right && arr[right] >= base) {
//            right--;
//        }
//        arr[left] = arr[right];
//        //先让由指针不断往右寻找比 base 大的值,找到了便交换
//        //如果没找到,此时left = right 等于没交换
//        while (left < right && arr[left] <= base) {
//            left++;
//        }
//        arr[right] = arr[left];
//    }
//    arr[left] = base;
//    return left;
//}
//
//void quickSort_num2(int arr[], int left, int right) {
//    if (left < right) {
//        //确定分割点
//        int pos = partition(arr, left, right);
//        //左右区间,再重复操作
//        quickSort_num2(arr, left, pos - 1);
//        quickSort_num2(arr, pos + 1, right);
//    }
//}
//
//int main() {
//    int arr1[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 10};
//    quickSort_num1(arr1, 0, 9);
//    for (int i = 0; i < 10; i++) {
//        cout << arr1[i] << " ";
//    }
//    cout << '\n';
//    //采用分治思想
//    int arr2[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 10};
//    quickSort_num2(arr2, 0, 9);
//    for (int i = 0; i < 10; i++) {
//        cout << arr2[i] << " ";
//    }
//    cout << '\n';
//    return 0;
//}



#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[9],j=1;
    for(int i=n;i>=1;i--) {
        a[n-i] = i;
        j*=i;
    }
    for(int k=1;k<=j;k++){
        next_permutation(a , a + n);
        for (int i = 0; i < n; i++) { cout << a[i] << " "; }
        cout << endl;
    }
    return 0;
}