#include <bits/stdc++.h>
using namespace std;

void countingSort(vector<int>& arr, int exp) {
	int n = arr.size();
	vector<int> output(n), count(10, 0);
	for (int i = 0; i < n; i++) count[(arr[i] / exp) % 10]++;
	for (int i = 1; i < 10; i++) count[i] += count[i - 1];
	for (int i = n - 1; i >= 0; i--) {
		output[count[(arr[i] / exp) % 10] - 1] = arr[i];
		count[(arr[i] / exp) % 10]--;
	}
	for (int i = 0; i < n; i++) arr[i] = output[i];
}

void radixSort(vector<int>& arr) {
	int max_val = *max_element(arr.begin(), arr.end());
	for (int exp = 1; max_val / exp > 0; exp *= 10) countingSort(arr, exp);
}

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	radixSort(arr);
	for (int x : arr) cout << x << ' ';
	cout << endl;
	return 0;
}
