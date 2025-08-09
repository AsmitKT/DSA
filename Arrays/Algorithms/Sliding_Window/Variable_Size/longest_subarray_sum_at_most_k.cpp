#include <bits/stdc++.h>
using namespace std;

int longestSubarraySumAtMostK(const vector<int>& arr, int k) {
	int l = 0, sum = 0, res = 0;
	for (int r = 0; r < arr.size(); r++) {
		sum += arr[r];
		while (sum > k && l <= r) {
			sum -= arr[l++];
		}
		res = max(res, r - l + 1);
	}
	return res;
}

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	cout << longestSubarraySumAtMostK(arr, k) << endl;
	return 0;
}
