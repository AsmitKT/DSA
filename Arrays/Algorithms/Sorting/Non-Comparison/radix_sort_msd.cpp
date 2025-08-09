#include <bits/stdc++.h>
using namespace std;

void msdRadixSort(vector<int>& arr, int left, int right, int exp) {
	if (left >= right || exp == 0) return;
	vector<int> count(10, 0), output(right - left + 1);
	for (int i = left; i <= right; i++) count[(arr[i] / exp) % 10]++;
	for (int i = 1; i < 10; i++) count[i] += count[i - 1];
	for (int i = right; i >= left; i--) {
		int idx = (arr[i] / exp) % 10;
		output[--count[idx]] = arr[i];
	}
	for (int i = 0; i < output.size(); i++) arr[left + i] = output[i];
	int start = left;
	for (int i = 0; i < 10; i++) {
		int end = (i == 9) ? right : left + count[i] - 1;
		if (start <= end) msdRadixSort(arr, start, end, exp / 10);
		start = end + 1;
	}
}

void radixSortMSD(vector<int>& arr) {
	int max_val = *max_element(arr.begin(), arr.end());
	int exp = 1;
	while (max_val / exp >= 10) exp *= 10;
	msdRadixSort(arr, 0, arr.size() - 1, exp);
}

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	radixSortMSD(arr);
	for (int x : arr) cout << x << ' ';
	cout << endl;
	return 0;
}
