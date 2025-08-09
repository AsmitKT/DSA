#include <bits/stdc++.h>
using namespace std;

int smallestSubarrayWithSumGreaterThanK(const vector<int>& arr, int k) {
	int n = arr.size(), l = 0, sum = 0, res = n + 1;
	for (int r = 0; r < n; r++) {
		sum += arr[r];
		while (sum > k) {
			res = min(res, r - l + 1);
			sum -= arr[l++];
		}
	}
	return res == n + 1 ? 0 : res;
}

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	cout << smallestSubarrayWithSumGreaterThanK(arr, k) << endl;
	return 0;
}
