#include <bits/stdc++.h>
using namespace std;

int binarySearch(const vector<int>& arr, int l, int r, int x) {
	if (l > r) return -1;
	int m = l + (r - l) / 2;
	if (arr[m] == x) return m;
	if (arr[m] < x) return binarySearch(arr, m + 1, r, x);
	return binarySearch(arr, l, m - 1, x);
}

int main() {
	int n, x;
	cin >> n >> x;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	cout << binarySearch(arr, 0, n - 1, x) << endl;
	return 0;
}
