//#include <iostream>
//#include <vector>
//#include <tuple>
//
//using i64 = long long;
//using namespace std;
//
//void solve() {
//    int n;
//    std::cin >> n;
//
//    std::vector<int> a(n);
//    for (int i = 0; i < n; i++) {
//        std::cin >> a[i];
//    }
//
//    i64 min = 0, ma = 0;
//    for (int i = 0; i < n; i++) {
//        tie(min, ma) =
//            make_pair(min + a[i], max(ma + a[i], -min - a[i]));
//    }
//    std::cout << ma << "\n";
//}
//
//int main() {
//    std::ios::sync_with_stdio(false);
//    std::cin.tie(nullptr);
//
//    int t;
//    std::cin >> t;
//
//    while (t--) {
//        solve();
//    }
//
//    return 0;
//}







#include <iostream>
#include<set>
using namespace std;

void maxHeapify(int A[], int heapSize, int i) {
    int left = 2 * i;
    int right = 2 * i + 1;
    int largest = i;
    
    if (left < heapSize && A[left] > A[largest])
        largest = left;

    if (right < heapSize && A[right] > A[largest])
        largest = right;

    if (largest != i) {
        swap(A[i], A[largest]);
        maxHeapify(A, heapSize, largest);
    }
}

int main() {
    int A[] = { 9,4,6,2,8,1,7 };
    int heapSize = sizeof(A) / sizeof(A[0]);

    // Example usage:
    int i = 1; // Index of the element to heapify
    maxHeapify(A, heapSize, i);

    // Print the modified array
    for (int i = 0; i < heapSize; ++i)
        cout << A[i] << " ";
    cout << endl;
    
    return 0;
}
