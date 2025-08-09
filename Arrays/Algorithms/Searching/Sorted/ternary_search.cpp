#include <bits/stdc++.h>
using namespace std;

int ternarySearch(const vector<int>& arr, int x) {
	int l = 0, r = arr.size() - 1;
	while (l <= r) {
		int mid1 = l + (r - l) / 3;
		int mid2 = r - (r - l) / 3;
		if (arr[mid1] == x) return mid1;
		if (arr[mid2] == x) return mid2;
		if (x < arr[mid1]) r = mid1 - 1;
		else if (x > arr[mid2]) l = mid2 + 1;
		else {
			l = mid1 + 1;
			r = mid2 - 1;
		}
	}
	return -1;
}

int main() {
	int n, x;
	cin >> n >> x;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	cout << ternarySearch(arr, x) << endl;
	return 0;
}
