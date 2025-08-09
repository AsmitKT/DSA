#include <bits/stdc++.h>
using namespace std;

int maxSumSubarrayOfSizeK(const vector<int>& arr, int k) {
	int n = arr.size();
	int max_sum = 0, window_sum = 0;
	for (int i = 0; i < k; i++) window_sum += arr[i];
	max_sum = window_sum;
	for (int i = k; i < n; i++) {
		window_sum += arr[i] - arr[i - k];
		max_sum = max(max_sum, window_sum);
	}
	return max_sum;
}

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	cout << maxSumSubarrayOfSizeK(arr, k) << endl;
	return 0;
}
