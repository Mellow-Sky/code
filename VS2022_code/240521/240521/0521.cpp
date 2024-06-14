//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[10];
//	for (int i = 0; i < 10; i++) {
//		cin >> a[i];
//	}
//	//4 5 2 8 1 9 3 7 6 0 a
//	//0 1 2 3 4 5 6 7 8 9 i
//	for (int i = 2; i < 10; i++) {
//		int key = a[i];
//		int j = i - 1;
//		while (j >= 0 && a[j] < key) {
//			a[j + 1] = a[j];
//			j--;
//		}
//		a[j + 1] = key;
//	}
//	for (int i = 0; i < 10; i++) {
//		cout << a[i] << " ";
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[10];
//	for (int i = 0; i < 10; i++)cin >> a[i];
//
//	for (int i = 0; i < 10; i++) {
//		int temp = i;
//		for (int j = i; j < 10; j++) {
//			if (a[j] < a[temp]) {
//				temp = j;
//			}
//		}
//		swap(a[i], a[temp]);
//	}
//	for (int i = 0; i < 10; i++) {
//		cout << a[i] << " ";
//	}
//
//	return 0;
//}





//#include<iostream>
//#include<vector>
//using namespace std;
//
//void merge(vector<int>& a, int l, int mid, int r) {
//	int n1 = mid - l + 1;
//	int n2 = r - mid;
//	vector<int>P(n1);
//	vector<int>Q(n2);
//	for (int i = 0; i < n1; i++) {
//		P[i] = a[l + i];
//	}
//	for (int i = 0; i < n2; i++) {
//		Q[i] = a[mid + 1 + i];
//	}
//
//	int i = 0, j = 0, k = l;
//	while (i < n1 && j < n2) {
//		if (P[i] <= Q[j]) {
//			a[k] = P[i];
//			i++;
//		}
//		else {
//			a[k] = Q[j];
//			j++;
//		}
//		k++;
//	}
//
//	while (i < n1) {
//		a[k] = P[i];
//		i++;
//		k++;
//	}
//	while (j < n2) {
//		a[k] = Q[j];
//		j++;
//		k++;
//	}
//}
//
//void merge_sort(vector<int>& a, int l, int r) {
//	if (l < r) {
//		int mid = (l + r) / 2;
//		merge_sort(a, l, mid);
//		merge_sort(a, mid + 1, r);
//
//		merge(a, l, mid, r);
//	}
//}
//
//int main()
//{
//	vector<int> a(10);
//	for (int i = 0; i <= 9; i++)cin >> a[i];
//
//	merge_sort(a, 0, a.size() - 1);
//
//	for (int i = 0; i <= 9; i++) {
//		cout << a[i] << " ";
//	}
//
//	return 0;
//}




//#include<iostream>
//#include<vector>
//using namespace std;
//
//void merge(vector<int>& a, int l, int mid, int r) {
//	int nx = mid - l + 1;
//	int ny = r - mid;
//	vector<int>P(nx);
//	vector<int>Q(ny);
//
//	for (int i = 0; i <= nx; i++) {
//		P[i] = a[l + i];
//	}
//	for (int i = 0; i <= ny; i++) {
//		Q[i] = a[mid + 1 + i];
//	}
//
//	int i = 0, j = 0, k = l;
//	while (i < nx && j < ny) {
//		if (P[i] <= Q[j]) {
//			a[k] = P[i];
//			i++;
//		}
//		else {
//			a[k] = Q[j];
//			j++;
//		}
//		k++;
//	}
//
//	while (i < nx) {
//		a[k] = P[i];
//		i++;
//		k++;
//	}
//	while (j < ny) {
//		a[k] = Q[j];
//		j++;
//		k++;
//	}
//}
//
//void merge_sort(vector<int>& a, int l, int r) {
//	if (l < r) {
//		int mid = l + (r - l) / 2;
//		merge_sort(a, l, mid);
//		merge_sort(a, mid + 1, r);
//
//		merge(a, l, mid, r);
//	}
//}
//
//int main()
//{
//	vector<int>a(10);
//	for (int i = 0; i < 10; i++) {
//		cin >> a[i];
//	}
//
//	merge_sort(a, 0, a.size() - 1);
//
//	for (int i = 0; i < 10; i++) {
//		cout << a[i] << " ";
//	}
//
//	return 0;
//}





//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[10];
//	for (int i = 0; i < 10; i++) {
//		cin >> a[i];
//	}
//
//	for (int i = 0; i < 10; i++) {
//		for (int j = i + 1; j < 10; j++) {
//			if (a[i] > a[j]) {
//				int temp=a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//
//	for (int i = 0; i < 10; i++) {
//		cout << a[i] << " ";
//	}
//
//	return 0;
//}



