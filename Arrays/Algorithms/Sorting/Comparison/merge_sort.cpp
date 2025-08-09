#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int l, int m, int r) {
	int n1 = m - l + 1, n2 = r - m;
	vector<int> L(n1), R(n2);
	for (int i = 0; i < n1; i++) L[i] = arr[l + i];
	for (int i = 0; i < n2; i++) R[i] = arr[m + 1 + i];
	int i = 0, j = 0, k = l;
	while (i < n1 && j < n2) arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
	while (i < n1) arr[k++] = L[i++];
	while (j < n2) arr[k++] = R[j++];
}

void mergeSort(vector<int>& arr, int l, int r) {
	if (l < r) {
		int m = l + (r - l) / 2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	mergeSort(arr, 0, n - 1);
	for (int x : arr) cout << x << ' ';
	cout << endl;
	return 0;
}
