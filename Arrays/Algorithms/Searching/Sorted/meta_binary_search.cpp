#include <bits/stdc++.h>
using namespace std;

int metaBinarySearch(const vector<int>& arr, int x) {
	int n = arr.size();
	int left = 0, right = n - 1;
	int lg = log2(n) + 1;
	int pos = -1;
	for (int i = lg; i >= 0; i--) {
		int newPos = pos + (1 << i);
		if (newPos < n && arr[newPos] <= x) pos = newPos;
	}
	if (pos != -1 && arr[pos] == x) return pos;
	return -1;
}

int main() {
	int n, x;
	cin >> n >> x;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	cout << metaBinarySearch(arr, x) << endl;
	return 0;
}
