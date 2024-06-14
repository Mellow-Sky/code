//#include<iostream>
//#include<vector>
//
//void merge(std::vector<int>& a, int l, int mid, int r) {
//	int nx = mid - l + 1;
//	int ny = r - mid;
//	std::vector<int>P(nx), Q(ny);
//	for (int i = 0; i < nx; i++) {
//		P[i] = a[l + i];
//	}
//	for (int i = 0; i < ny; i++) {
//		Q[i] = a[mid + 1 + i];
//	}
//	int i = 0, j = 0, k = l;
//	while (i < nx && j < ny) {
//		if (P[i] >= Q[j]) {
//			a[k] = P[i++];
//		}
//		else {
//			a[k] = Q[j++];
//		}
//		k++;
//	}
//	while (i < nx) {
//		a[k++] = P[i++];
//	}
//	while (j < ny) {
//		a[k++] = Q[j++];
//	}
//}
//
//void merge_sort(std::vector<int>& a, int l, int r) {
//	if (l < r) {
//		int mid = (l + r) >> 1;
//		merge_sort(a, l, mid);
//		merge_sort(a, mid + 1, r);
//		merge(a, l, mid, r);
//	}
//}
//
//int main() {
//	int n;
//	std::cin >> n;
//	std::vector<int>a(n);
//	for (int i = 0; i < n; i++) {
//		std::cin >> a[i];
//	}
//	merge_sort(a, 0, a.size() - 1);
//	for (auto& i : a) {
//		std::cout << i << " ";
//	}
//	return 0;
//}


