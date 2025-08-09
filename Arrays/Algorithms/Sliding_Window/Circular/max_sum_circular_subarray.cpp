#include <bits/stdc++.h>
using namespace std;

int maxSumCircularSubarray(vector<int>& arr, int k) {
	int n = arr.size();
	int max_sum = INT_MIN;
	for (int i = 0; i < n; i++) {
		int curr_sum = 0;
		for (int j = 0; j < k; j++) {
			curr_sum += arr[(i + j) % n];
		}
		max_sum = max(max_sum, curr_sum);
	}
	return max_sum;
}

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	cout << maxSumCircularSubarray(arr, k) << endl;
	return 0;
}
