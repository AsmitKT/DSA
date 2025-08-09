#include <bits/stdc++.h>
using namespace std;

int binarySearch(const vector<int>& arr, int x) {
	int l = 0, r = arr.size() - 1;
	while (l <= r) {
		int m = l + (r - l) / 2;
		if (arr[m] == x) return m;
		if (arr[m] < x) l = m + 1;
		else r = m - 1;
	}
	return -1;
}

int main() {
	int n, x;
	cin >> n >> x;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	cout << binarySearch(arr, x) << endl;
	return 0;
}
