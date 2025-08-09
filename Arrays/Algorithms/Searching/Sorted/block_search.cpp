#include <bits/stdc++.h>
using namespace std;

int blockSearch(const vector<int>& arr, int x, int blockSize) {
	int n = arr.size();
	int i = 0;
	while (i < n && arr[min(i + blockSize - 1, n - 1)] < x) i += blockSize;
	for (int j = i; j < min(i + blockSize, n); j++) {
		if (arr[j] == x) return j;
	}
	return -1;
}

int main() {
	int n, x, blockSize;
	cin >> n >> x >> blockSize;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	cout << blockSearch(arr, x, blockSize) << endl;
	return 0;
}
