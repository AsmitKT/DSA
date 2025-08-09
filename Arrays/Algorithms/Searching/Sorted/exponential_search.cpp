#include <bits/stdc++.h>
using namespace std;

int binarySearch(const vector<int>& arr, int l, int r, int x) {
	while (l <= r) {
		int m = l + (r - l) / 2;
		if (arr[m] == x) return m;
		if (arr[m] < x) l = m + 1;
		else r = m - 1;
	}
	return -1;
}

int exponentialSearch(const vector<int>& arr, int x) {
	int n = arr.size();
	if (arr[0] == x) return 0;
	int i = 1;
	while (i < n && arr[i] <= x) i *= 2;
	return binarySearch(arr, i / 2, min(i, n - 1), x);
}

int main() {
	int n, x;
	cin >> n >> x;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	cout << exponentialSearch(arr, x) << endl;
	return 0;
}
